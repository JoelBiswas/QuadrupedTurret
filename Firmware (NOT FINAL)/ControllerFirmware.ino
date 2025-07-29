#include <Bluepad32.h>

// INT VALUES ARE NOT ASSIGNED!!!! ITS JUST FOR REFERENCE!!!!
// EVERYTHING IS NOT FINAL HERE!!!!

// Servo objects
constexpr uint8_t legXPinFrontLeft = 13;
constexpr uint8_t legXPinFrontRight = 12; 
constexpr uint8_t legXPinBackLeft = 14; 
constexpr uint8_t legXPinBackRight = 27;

constexpr uint8_t legXChannelFrontLeft = 0;
constexpr uint8_t legXChannelFrontRight = 1;
constexpr uint8_t legXChannelBackLeft = 2;
constexpr uint8_t legXChannelBackRight = 3;

constexpr uint8_t legYPinFrontLeft = 25; 
constexpr uint8_t legYPinFrontRight = 26;
constexpr uint8_t legYPinBackLeft = 32; 
constexpr uint8_t legYPinBackRight = 33; 

constexpr uint8_t legYChannelFrontLeft = 4;
constexpr uint8_t legYChannelFrontRight = 5;
constexpr uint8_t legYChannelBackLeft = 6;
constexpr uint8_t legYChannelBackRight = 7;

// Constants
const int neutral = 90;    // reset position
const int stepAngle = 40;  // how far forward to move
const int moveDelay = 250; // wait time between movements
const int swingAngleLeft = -60;  //negative for left motors
const int swingAngleRight = 60;  //positive for right motors

const int HERTZ = 50;
const uint8_t BYTES = 12;

bool isWalking;

constexpr uint8_t STATUS_LED = 2;
ControllerPtr myControllers[BP32_MAX_GAMEPADS];

void onConnectedController(ControllerPtr ctl)
{
    Serial.println("Controller connected");
    myControllers[0] = ctl;
    digitalWrite(STATUS_LED, HIGH);
    ctl->playDualRumble(0, 500, 255, 128);
}

void onDisconnectedController(ControllerPtr)
{
    Serial.println("Controller disconnected");
    myControllers[0] = nullptr;
    digitalWrite(STATUS_LED, LOW);
}

void processGamepad(ControllerPtr ctl)
{
    if (ctl->a())
    {
        Serial.println("Rick Ross Mongolian Throat Singing");
        Serial.println(isWalking);
        if (!isWalking)
        {
          isWalking = true;
          walk();
        }
    }
}

void setup()
{
    Serial.begin(115200);

    pinMode(STATUS_LED, OUTPUT);
    digitalWrite(STATUS_LED, LOW);

    ledcSetup(legXChannelFrontLeft, HERTZ, BYTES);
    ledcSetup(legXChannelBackRight, HERTZ, BYTES);
    ledcSetup(legXChannelFrontRight, HERTZ, BYTES);
    ledcSetup(legXChannelBackLeft, HERTZ, BYTES);

    ledcSetup(legYChannelFrontRight, HERTZ, BYTES);
    ledcSetup(legYChannelBackLeft, HERTZ, BYTES);
    ledcSetup(legYChannelFrontLeft, HERTZ, BYTES);
    ledcSetup(legYChannelBackRight, HERTZ, BYTES);

    ledcAttachPin(legXPinFrontLeft, legXChannelFrontLeft);
    ledcAttachPin(legXPinBackRight, legXChannelBackRight);
    ledcAttachPin(legXPinFrontRight, legXChannelFrontRight);
    ledcAttachPin(legXPinBackLeft, legXChannelBackLeft);

    ledcAttachPin(legYPinFrontRight, legYChannelFrontRight);
    ledcAttachPin(legYPinBackLeft, legYChannelBackLeft);
    ledcAttachPin(legYPinFrontLeft, legYChannelFrontLeft);
    ledcAttachPin(legYPinBackRight, legYChannelBackRight);

    // All start at neutral position
    writeToServo(legXChannelFrontLeft, neutral);
    writeToServo(legXChannelBackRight, neutral);
    writeToServo(legXChannelFrontRight, neutral);
    writeToServo(legXChannelBackLeft, neutral);

    writeToServo(legYChannelFrontRight, neutral);
    writeToServo(legYChannelBackLeft, neutral);
    writeToServo(legYChannelFrontLeft, neutral);
    writeToServo(legYChannelBackRight, neutral);
    delay(500);

    isWalking = false;

    BP32.setup(&onConnectedController, &onDisconnectedController);
    // BP32.forgetBluetoothKeys(); PLEASE DO NOT UNCOMMENT THIS
    BP32.enableVirtualDevice(false);
}

void loop()
{
    if (BP32.update())
    {
        ControllerPtr ctl = myControllers[0];
        if (ctl && ctl->isConnected() && ctl->hasData() && ctl->isGamepad())
            processGamepad(ctl);
    }
    delay(10);
}

void writeToServo(int pwmChannel, int angle)
{
    // Map angle (0–180) to pulse width in microseconds (1000–2000)
    int us = map(angle, 0, 180, 1000, 2000);

    // Convert microseconds to duty (out of 2^16 for 16-bit resolution and 50Hz)
    uint32_t duty = (us * 4095UL) / 20000UL; // for 12-bit

    Serial.print("Angle: ");
    Serial.print(angle);
    Serial.print(" → Duty: ");
    Serial.println(duty);

    ledcWrite(pwmChannel, duty);
}


void walk() {
  isWalking = true;
  
  Serial.println("MIT Library Activities");

  moveLegLeft(legXChannelFrontLeft, legYChannelFrontLeft, + stepAngle); // Front left
  moveLegRight(legXChannelFrontRight, legYChannelFrontRight, + stepAngle); // Front right
  moveLegLeft(legXChannelBackLeft, legYChannelBackLeft, + stepAngle); // Back left
  moveLegRight(legXChannelBackRight, legYChannelBackRight, + stepAngle); // Back right

  isWalking = false;
  
}

void moveLegLeft(int xChannel, int yChannel, int swingAngle) {
  writeToServo(yChannel, neutral + swingAngleLeft); // lift leg
  delay(moveDelay / 2);
  writeToServo(xChannel, neutral + swingAngleLeft);
  delay(moveDelay);
  writeToServo(yChannel, neutral);
  delay(moveDelay / 2);
  writeToServo(xChannel, neutral);
  delay(moveDelay);
}

void moveLegRight(int xChannel, int yChannel, int swingAngle) {
  writeToServo(yChannel, neutral + swingAngleRight); // lift leg
  delay(moveDelay / 2);
  writeToServo(xChannel, neutral + swingAngleRight);
  delay(moveDelay);
  writeToServo(yChannel, neutral);
  delay(moveDelay / 2);
  writeToServo(xChannel, neutral);
  delay(moveDelay);
}


