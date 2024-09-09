void HepHepHooray () {
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

   

//ready for clap

   for (uint32_t i = degree(180), j = degree(0); i < degree(90) && j > degree(90); i++, j--)
    {
        pwm.setPWM(RIGHT_SHOULDER, 0, i);
        pwm.setPWM(LEFT_SHOULDER, 0, j);
        delay(4);
    }

    for (uint32_t i = degree(135), j = degree(45); i > degree(155) && j < degree(25); i--, j++)
    {
        pwm.setPWM(RIGHT_UPPER_ARM, 0, i);
        pwm.setPWM(LEFT_UPPER_ARM, 0, j);
        delay(6);
    }
delay (500);

    // hep 
    for (uint32_t i = degree(90), j = degree(90); i < degree(0) && j > degree(180); i++, j--)
    {
        pwm.setPWM(RIGHT_LOWER_ARM, 0, i);
        pwm.setPWM(LEFT_LOWER_ARM, 0, j);
        delay (2);
    }

    for (uint32_t i = degree(0), j = degree(180); i > degree(180) && j < degree(0); i--, j++)
    {
        pwm.setPWM(RIGHT_LOWER_ARM, 0, i);
        pwm.setPWM(LEFT_LOWER_ARM, 0, j);
               delay (2);

    }

 // hep
    for (uint32_t i = degree(180), j = degree(0); i < degree(0) && j > degree(180); i++, j--)
    {
        pwm.setPWM(RIGHT_LOWER_ARM, 0, i);
        pwm.setPWM(LEFT_LOWER_ARM, 0, j);
        delay (2);
    }

    for (uint32_t i = degree(0), j = degree(180); i > degree(180) && j < degree(0); i--, j++)
    {
        pwm.setPWM(RIGHT_LOWER_ARM, 0, i);
        pwm.setPWM(LEFT_LOWER_ARM, 0, j);
        delay (2);
    }


  for (uint32_t i = degree(180), j = degree(0); i < degree(90) && j > degree(90); i++, j--)
    {
        pwm.setPWM(RIGHT_LOWER_ARM, 0, i);
        pwm.setPWM(LEFT_LOWER_ARM, 0, j);
    }

delay (500);

//hooray
    for (uint32_t i = degree(90), j = degree(90); i < degree(20) && j > degree(160); i++, j--)
    {
      
        pwm.setPWM(RIGHT_SHOULDER, 0, i);
        pwm.setPWM(LEFT_SHOULDER, 0, j);
        delay(4);
    }
    for (uint32_t i = degree(155), j = degree(25); i > degree(155) && j < degree(25); i--, j++)
    {
        pwm.setPWM(RIGHT_UPPER_ARM, 0, i);
        pwm.setPWM(LEFT_UPPER_ARM, 0, j);
        delay(6);
    }

delay (500);



}