#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#define MAX_CLOCK           80
#define MAX_ANTI_CLOCK      500               
#define MICRO_SECOND_0      380
#define MICRO_SECOND_180    2400
#define FREQUENCY           50
#define HEAD                A0
#define RIGHT_SHOULDER      0
#define RIGHT_UPPER_ARM     1
#define RIGHT_LOWER_ARM     2
#define RIGHT_HIP           3
#define RIGHT_UPPER_KNEE    4
#define RIGHT_LOWER_KNEE    5
#define RIGHT_UPPER_FOOT    6
#define RIGHT_LOWER_FOOT    7
#define LEFT_SHOULDER       8
#define LEFT_UPPER_ARM      9
#define LEFT_LOWER_ARM      10
#define LEFT_HIP            11
#define LEFT_UPPER_KNEE     12
#define LEFT_LOWER_KNEE     13
#define LEFT_UPPER_FOOT     14
#define LEFT_LOWER_FOOT     15
#define BUTTON_MEL          2
#define BUTTON_JAAFAR       3
#define BUTTON_COLLIEN      4
#define BUTTON_RYAN         5
#define BUTTON_CHELLE       6
#define BUTTON_JAMAE        7
#define BUTTON_NOUR         8


Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

/*
 *
 * This function converts pulse width into degree (e.g., 0, 90, 180)
 *
*/

int degree(int d)
{
    return map(d, 0, 180, MAX_ANTI_CLOCK, MAX_CLOCK);
}

#include "madulara.h"
#include "maluya.h"
#include "omar.h"
#include "pepito-c.h"
#include "pepito-j.h"
#include "himongala.h"
#include "usman.h"

void setup() {
    Serial.begin(9600);
    pinMode(BUTTON_MEL, INPUT);
    pinMode(BUTTON_JAAFAR, INPUT);
    pinMode(BUTTON_COLLIEN, INPUT);
    pinMode(BUTTON_RYAN, INPUT);
    pinMode(BUTTON_CHELLE, INPUT);
    pinMode(BUTTON_JAMAE, INPUT);
    pinMode(BUTTON_NOUR, INPUT);
    pwm.begin();
    pwm.setPWMFreq(FREQUENCY);
}

int d(int dg) {
    return map(dg, 2500, 0, 0, 180);
}

void loop() {

    int mel     = digitalRead(BUTTON_MEL);
    int far     = digitalRead(BUTTON_JAAFAR);
    int col     = digitalRead(BUTTON_COLLIEN);
    int ry      = digitalRead(BUTTON_RYAN);
    int chell   = digitalRead(BUTTON_CHELLE);
    int jam     = digitalRead(BUTTON_JAMAE);
    int nour    = digitalRead(BUTTON_NOUR);

    if(mel)
    {
        HepHepHooray();
        delay(500);
        RobotStand();
    } else if(far) {
        ClapThreeTimes();
        delay(500);
        RobotStand();
    } else if(col) {
        Dab();
        delay(500);
        RobotStand();
    } else if(ry) {
        chestBeat();
        delay(500);
        RobotStand();
    } else if(chell) {
        Heart();
        delay(500);
    } else if(jam) {
        RobotHug();
        delay(500);
        RobotStand();
    } else if(nour) {
        hip_shake();
        delay(500);
        RobotStand();
    } else {
        RobotStand();
    }

    RobotStand();
}

void RobotStand() {
    pwm.setPWM(RIGHT_LOWER_FOOT, 0, degree(90));
    pwm.setPWM(LEFT_LOWER_FOOT, 0, degree(90));
    pwm.setPWM(RIGHT_UPPER_FOOT, 0, degree(90));
    pwm.setPWM(LEFT_UPPER_FOOT, 0, degree(90));
    pwm.setPWM(RIGHT_LOWER_KNEE, 0, degree(45));
    pwm.setPWM(LEFT_LOWER_KNEE, 0, degree(45));
    pwm.setPWM(RIGHT_UPPER_KNEE, 0, degree(95));
    pwm.setPWM(LEFT_UPPER_KNEE, 0, degree(85));
    pwm.setPWM(RIGHT_HIP, 0, degree(90));
    pwm.setPWM(LEFT_HIP, 0, degree(90));
    pwm.setPWM(RIGHT_SHOULDER, 0, degree(180));
    pwm.setPWM(LEFT_SHOULDER, 0, degree(0));
    pwm.setPWM(RIGHT_UPPER_ARM, 0, degree(135));
    pwm.setPWM(LEFT_UPPER_ARM, 0, degree(45));
    pwm.setPWM(RIGHT_LOWER_ARM, 0, degree(90));
    pwm.setPWM(LEFT_LOWER_ARM, 0, degree(90));
}