void setServo(int servo, int angle) {
  int duty;
  duty = map(angle, 0, 180, MAX_ANTI_CLOCK, MAX_CLOCK);
  pwm.setPWM(servo, 0, duty);
}

void initial_position() {
  //RIGHT
  setServo(8, 180); //SHOULDER BOTTOM 
  setServo(9, 120); //UPPER ARM
  setServo(10, 90); //LOWER ARM
  setServo(11, 90); //HIP
  setServo(12, 85); // UPPER KNEE
  setServo(13, 110); //lOWER KNEE
  setServo(14, 90); //UPPER FOOT (dungo)
  setServo(15, 90); //LOWER FOOT GOING LEFT
//LEFT
  setServo(0, 0); //Shoulder BOTTOM
  setServo(1, 60); //UPPER ARM
  setServo(2, 90); //LOWER ARM
  setServo(3, 85); //HIP //85
  setServo(4, 95); //UPPER KNEE
  setServo(5, 120); // LOWER KNEE //125
  setServo(6, 80); //UPPER FOOT (HANGAD) //90
  setServo(7, 95); //LOWER FOOT (SIDEWARDS) GOING RIGHT
}

void hip_shake() {
initial_position();
  //arms raise and down
  for (int i = 0; i <= 45; i++) {
    setServo(9, 0 + i); //45
    setServo(1, 180 - i); //135
    if (i <= 25) {
      setServo(10, 20 + i); //45
      setServo(2, 160 - i); //135
    }
    delay(15);
  }
  //shake to the left and hands move, step to left and center
  for (int i = 0; i <= 10; i++) {
    setServo(10, 45 - (i * 2)); //hands
    setServo(2, 135 - (i * 2)); //hands
    setServo(11, 90 + i); //90 //hip
    setServo(15, 90 + i); //lower foot right
    setServo(3, 90 + i); //hip left
    setServo(7, 90 + i); //lower foot left
    delay(50);
  }
  //rotation of hips 3x
  for (int j = 1; j <= 3; j++) {
    for (int i = 0; i <= 20; i++) {
      setServo(10, 25 + (i * 2)); //hands
      setServo(2, 115 + (i * 2)); //hands

      setServo(11, 100 - i); //100 hip right
      setServo(15, 100 - i); //lower foot right
      setServo(3, 100 - i); //hip left
      setServo(7, 100 - i); //lower foot left
      delay(50);
    }
    for (int i = 0; i <= 20; i++) {
      setServo(10, 65 - (i * 2)); //hands
      setServo(2, 155 - (i * 2)); //hands

      setServo(11, 80 + i); //80 hip right
      setServo(15, 80 + i); //lower foot right
      setServo(3, 80 + i); //hip left
      setServo(7, 80 + i); //lower foot left
      delay(50);
    }
  }
  //move left to center
  for (int i = 0; i <= 10; i++) {
    setServo(10, 25 + (i * 2)); //hands
    setServo(2, 115 + (i * 2)); //hands
    setServo(11, 100 - i); //100 hip right
    setServo(15, 100 - i);  //lower foot right
    setServo(3, 100 - i); //hip left
    setServo(7, 100 - i); //lower foot left
    delay(50);
  }
  //same sa first
  for (int i = 0; i <= 45; i++) {
    setServo(9, 45 - i); //45 
    setServo(1, 135 + i); //135
    if (i <= 25) {
      setServo(10, 45 - i); //45
      setServo(2, 135 + i); //135
    }
    delay(15);
  }
}
