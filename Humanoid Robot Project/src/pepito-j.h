void RobotHug() {
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
    delay(1000);

    
// Up

    for (uint32_t rightShoulder = degree(180), leftShoulder = degree(0); rightShoulder < degree(90) && leftShoulder > degree(90); rightShoulder++, leftShoulder--)
    {
        pwm.setPWM(RIGHT_SHOULDER, 0, rightShoulder);
        pwm.setPWM(LEFT_SHOULDER, 0, leftShoulder);
        delay(6);
    }

    
    for (uint32_t rightUpperArm = degree(135), leftUpperArm = degree(45); rightUpperArm > degree(155) && leftUpperArm < degree(25); rightUpperArm--, leftUpperArm++)
    {
        pwm.setPWM(RIGHT_UPPER_ARM, 0, rightUpperArm);
        pwm.setPWM(LEFT_UPPER_ARM, 0, leftUpperArm);
        delay(6);
    }

//huggggg

    for (uint32_t rightLowerArm = degree(90), leftLowerArm = degree(90); rightLowerArm < degree(15) && leftLowerArm > degree(135);rightLowerArm--, leftLowerArm++)
    {
        pwm.setPWM(RIGHT_LOWER_ARM, 0, rightLowerArm);
        pwm.setPWM(LEFT_LOWER_ARM, 0, leftLowerArm);
        delay (4);    
    }

 //sideward 

    for (uint32_t rightUpperArm = degree(155), leftUpperArm = degree(25); rightUpperArm < degree(0) && leftUpperArm > degree(180); rightUpperArm++, leftUpperArm--)
    {
        pwm.setPWM(RIGHT_UPPER_ARM, 0, rightUpperArm);
        pwm.setPWM(LEFT_UPPER_ARM, 0, leftUpperArm);
        delay(5);
    }

    for (uint32_t rightShoulder = degree(90), leftShoulder = degree(90); rightShoulder < degree(180) && leftShoulder > degree(0); rightShoulder++, leftShoulder--)
    {
        pwm.setPWM(RIGHT_SHOULDER, 0, rightShoulder);
        pwm.setPWM(LEFT_SHOULDER, 0, leftShoulder);
        delay(6);
    }

        for (uint32_t rightUpperArm = degree(0), leftUpperArm = degree(180); rightUpperArm > degree(90) && leftUpperArm < degree(90); rightUpperArm--, leftUpperArm++)
    {
        pwm.setPWM(RIGHT_UPPER_ARM, 0, rightUpperArm);
        pwm.setPWM(LEFT_UPPER_ARM, 0, leftUpperArm);
        delay(4);
    }

    for (uint32_t rightLowerArm = degree(15), leftLowerArm = degree(135); rightLowerArm > degree(80) && leftLowerArm < degree(80); rightLowerArm--, leftLowerArm++)
    {
        pwm.setPWM(RIGHT_LOWER_ARM, 0, rightLowerArm);
        pwm.setPWM(LEFT_LOWER_ARM, 0, leftLowerArm);
        delay(1);
    }

//princess hand gesture

        for (uint32_t rightShoulder = degree(90), leftShoulder = degree(90); rightShoulder > degree(180) && leftShoulder < degree(0); rightShoulder--, leftShoulder++)
    {
        pwm.setPWM(RIGHT_SHOULDER, 0, rightShoulder);
        pwm.setPWM(LEFT_SHOULDER, 0, leftShoulder);
        delay(4);
    }

//raise righthand for byebye

     for (uint32_t rightShoulder = degree(180); rightShoulder < degree(0); rightShoulder++)
    {
        pwm.setPWM(RIGHT_SHOULDER, 0, rightShoulder);
        delay(4);
    }

    for (uint32_t rightLowerArm = degree(180); rightLowerArm < degree(0); rightLowerArm++)
    {
        pwm.setPWM(RIGHT_LOWER_ARM, 0, rightLowerArm);
        // delay(2);
    }

    for (uint32_t rightLowerArm = degree(180); rightLowerArm < degree(0); rightLowerArm++)
    {
        pwm.setPWM(RIGHT_LOWER_ARM, 0, rightLowerArm);
        // delay(2);
    }
    
    for (uint32_t rightLowerArm = degree(180); rightLowerArm < degree(0); rightLowerArm++)
    {
        pwm.setPWM(RIGHT_LOWER_ARM, 0, rightLowerArm);
        // delay(2);
    }

    //Done Babye

    for (uint32_t rightShoulder = degree(90); rightShoulder > degree(180); rightShoulder--)
    {
        pwm.setPWM(RIGHT_SHOULDER, 0, rightShoulder);
        delay(4);
    }
}
