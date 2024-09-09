void chestBeat() 
{
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

    for (uint32_t R_shoulder = degree(180), L_shoulder = degree(0); R_shoulder < degree(90) && L_shoulder > degree(90); R_shoulder++, L_shoulder--)
    {
        pwm.setPWM(RIGHT_SHOULDER, 0, R_shoulder);
        pwm.setPWM(LEFT_SHOULDER, 0, L_shoulder);
        delay(1);
    }

    for (uint32_t R_upperArm = degree(135), L_upperArm = degree(45); R_upperArm > degree(145) && L_upperArm < degree(0); R_upperArm--, L_upperArm++)
    {
        pwm.setPWM(RIGHT_UPPER_ARM, 0, R_upperArm);
        pwm.setPWM(LEFT_UPPER_ARM, 0, L_upperArm);
        delay(1);
    }

    for (uint32_t R_lowerArm = degree(90), L_lowerArm = degree(90); R_lowerArm > degree(180) && L_lowerArm < degree(10); R_lowerArm--, L_lowerArm++)
    {
        pwm.setPWM(RIGHT_LOWER_ARM, 0, R_lowerArm);
        pwm.setPWM(LEFT_LOWER_ARM, 0, L_lowerArm);
        delay(1);
    }
    delay(50);


    //1ST CHEST BEAT
    for (uint32_t L_upperArm = degree(0); L_upperArm > degree(35); L_upperArm--)
    {
        pwm.setPWM(LEFT_UPPER_ARM, 0, L_upperArm);
        delay(3);
    }
    
    for (uint32_t R_upperArm = degree(180); R_upperArm < degree(140); R_upperArm++)
    {
        pwm.setPWM(RIGHT_UPPER_ARM, 0, R_upperArm);
        delay(3);
    }    
    delay(50);


    //2ND CHEST BEAT
    for (uint32_t L_upperArm = degree(0); L_upperArm > degree(35); L_upperArm--)
    {
        pwm.setPWM(LEFT_UPPER_ARM, 0, L_upperArm);
        delay(3);
    }
    
    for (uint32_t R_upperArm = degree(180); R_upperArm < degree(140); R_upperArm++)
    {
        pwm.setPWM(RIGHT_UPPER_ARM, 0, R_upperArm);
        delay(3);
    }    
    delay(50);


    //3RD CHEST BEAT
    for (uint32_t L_upperArm = degree(0); L_upperArm > degree(35); L_upperArm--)
    {
        pwm.setPWM(LEFT_UPPER_ARM, 0, L_upperArm);
        delay(3);
    }
    
    for (uint32_t R_upperArm = degree(180); R_upperArm < degree(140); R_upperArm++)
    {
        pwm.setPWM(RIGHT_UPPER_ARM, 0, R_upperArm);
        delay(3);
    }    
    delay(50);


    //4TH CHEST BEAT
    for (uint32_t L_upperArm = degree(0); L_upperArm > degree(35); L_upperArm--)
    {
        pwm.setPWM(LEFT_UPPER_ARM, 0, L_upperArm);
        delay(3);
    }
    
    for (uint32_t R_upperArm = degree(180); R_upperArm < degree(140); R_upperArm++)
    {
        pwm.setPWM(RIGHT_UPPER_ARM, 0, R_upperArm);
        delay(3);
    }    
    delay(50);


    //5TH CHEST BEAT
    for (uint32_t L_upperArm = degree(0); L_upperArm > degree(35); L_upperArm--)
    {
        pwm.setPWM(LEFT_UPPER_ARM, 0, L_upperArm);
        delay(3);
    }
    
    for (uint32_t R_upperArm = degree(180); R_upperArm < degree(140); R_upperArm++)
    {
        pwm.setPWM(RIGHT_UPPER_ARM, 0, R_upperArm);
        delay(3);
    }    
    delay(50);


    //6TH CHEST BEAT
    for (uint32_t L_upperArm = degree(0); L_upperArm > degree(35); L_upperArm--)
    {
        pwm.setPWM(LEFT_UPPER_ARM, 0, L_upperArm);
        delay(3);
    }
    
    for (uint32_t R_upperArm = degree(180); R_upperArm < degree(140); R_upperArm++)
    {
        pwm.setPWM(RIGHT_UPPER_ARM, 0, R_upperArm);
        delay(3);
    }    
    delay(50);
}
