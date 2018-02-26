task main{
  //All the robot code
  setMotor(leftMotor,60);
  setMotor(rightMotor,60);
  wait(3,seconds);
  setMotor(leftMotor,-60);
  setMotor(rightMotor,-60);
  wait(3,seconds);
  //Make the robot spin around?
  setMotor(leftmotor,127);
  setMotor(rightMotor, 0);
  wait(1,seconds);
}