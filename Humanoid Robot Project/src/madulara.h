void Heart()
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

    // Arms Forward

    for (uint32_t right = degree(180), left = degree(0); right < degree(90) && left > degree(90); right++, left--)
    {
        pwm.setPWM(RIGHT_SHOULDER, 0, right);
        pwm.setPWM(LEFT_SHOULDER, 0, left);
        delay(5);
    }

    // Arms Up

    for (uint32_t right = degree(90), left = degree(90); right < degree(0) && left > degree(180); right++, left--)
    {
        pwm.setPWM(RIGHT_SHOULDER, 0, right);
        pwm.setPWM(LEFT_SHOULDER, 0, left);
        delay(5);
    }

    // Heart
    for (uint32_t right = degree(135), left = degree(45); right > degree(155) && left < degree(25); right--, left++)
    {
        pwm.setPWM(RIGHT_UPPER_ARM, 0, right);
        pwm.setPWM(LEFT_UPPER_ARM, 0, left);
        delay(6);
    }

    for (uint32_t right = degree(90), left = degree(90); right < degree(0) && left > degree(180); right++, left--)
    {
        pwm.setPWM(RIGHT_LOWER_ARM, 0, right);
        pwm.setPWM(LEFT_LOWER_ARM, 0, left);
        delay(4);
    }

    for (uint32_t right = degree(0), left = degree(180); right > degree(180) && left < degree(0); right--, left++)
    {
        pwm.setPWM(RIGHT_LOWER_ARM, 0, right);
        pwm.setPWM(LEFT_LOWER_ARM, 0, left);
        delay(4);
    }
}