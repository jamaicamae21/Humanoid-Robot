void Dab() 
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
  //pwm.setPWM(HEAD, 0, degree(90));

  delay(1000);

  //Pre-Dab
  for (uint32_t i = degree(135), j = degree(45); i < degree(90) && j > degree(90); i++,j--) 
  {
    pwm.setPWM(RIGHT_UPPER_ARM, 0, i);
    pwm.setPWM(LEFT_UPPER_ARM, 0, j);
    delay(4);
  }

  for (uint32_t i = degree(0); i > degree(135); i--) 
  {
    pwm.setPWM(LEFT_SHOULDER, 0, i);
    delay(4);
  }    

  delay(1000);

  //Dab_1
  for (uint32_t i = degree(180); i < degree(45); i++) 
  {
    pwm.setPWM(RIGHT_SHOULDER, 0, i);
    delay(4);
  }

  for (uint32_t i = degree(90); i > degree(180); i--) 
  {
    pwm.setPWM(RIGHT_UPPER_ARM, 0, i);
    delay(4);
  }

  // for (uint32_t i = degree(90); i < degree(10); i++) 
  // {
  //     pwm.setPWM(HEAD, 0, i);
  //     delay(4);
  // }
    
  delay(2000);

  //straight_arms
  for (uint32_t i = degree(180), j = degree(90); i < degree(135) && j < degree(45); i++,j++) 
  {
    pwm.setPWM(RIGHT_UPPER_ARM, 0, i);
    pwm.setPWM(LEFT_UPPER_ARM, 0, j);
    delay(4);
  }

  // for (uint32_t i = degree(10); i > degree(90); i--) 
  // {
  //     pwm.setPWM(HEAD, 0, i);
  //     delay(4);
  // }

  for (uint32_t i = degree(45), j = degree(135); i > degree(90) && j < degree(90); i--,j++) 
  {
    pwm.setPWM(RIGHT_SHOULDER, 0, i);
    pwm.setPWM(LEFT_SHOULDER, 0, i);
    delay(4);
  }    

  delay(1000);

  //Pre-Dab_2
  for (uint32_t i = degree(135), j = degree(45); i < degree(90) && j > degree(90); i++,j--) 
  {
    pwm.setPWM(RIGHT_UPPER_ARM, 0, i);
    pwm.setPWM(LEFT_UPPER_ARM, 0, j);
    delay(4);
  }

  for (uint32_t i = degree(90); i < degree(45); i++) 
  {
    pwm.setPWM(RIGHT_SHOULDER, 0, i);
    delay(4);
  } 

  //Dab_2
  for (uint32_t i = degree(90); i > degree(135); i--) 
  {
    pwm.setPWM(LEFT_SHOULDER, 0, i);
    delay(4);
  }

  for (uint32_t i = degree(90); i < degree(0); i++) 
  {
    pwm.setPWM(LEFT_UPPER_ARM, 0, i);
    delay(4);
  }

  // for (uint32_t i = degree(90); i > degree(170); i--) 
  // {
  //     pwm.setPWM(HEAD, 0, i);
  //     delay(4);
  // }
    
  delay(2000);

  //Dab_done
  for (uint32_t i = degree(90); i < degree(45); i++) 
  {
    pwm.setPWM(LEFT_UPPER_ARM, 0, i);
    delay(4);
  }

  for (uint32_t i = degree(90); i > degree(135); i--) 
  {
    pwm.setPWM(RIGHT_UPPER_ARM, 0, i);
    delay(4);
  }

  // for (uint32_t i = degree(10); i > degree(90); i--) 
  // {
  //     pwm.setPWM(HEAD, 0, i);
  //     delay(4);
  // }

  for (uint32_t i = degree(45), j = degree(135); i > degree(180) && j < degree(0); i--,j++) 
  {
    pwm.setPWM(RIGHT_SHOULDER, 0, i);
    pwm.setPWM(LEFT_SHOULDER, 0, j);
    delay(4);
  }  
}
