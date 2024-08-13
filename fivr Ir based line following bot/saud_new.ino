//code for maze solving bot developed by Nauser ALam;


#define in1 9
#define in2 8
#define in3 7
#define in4 6
#define enA 10
#define enB 5
int error;

 int M1_Speed = 95; // speed of motor 1
 int M2_Speed = 95; // speed of motor 2
 int LeftRotationSpeed = 120;  // Left Rotation Speed
 int RightRotationSpeed = 120; // Right Rotation Speed


 void setup() {

  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);

    pinMode(enA,OUTPUT);
    pinMode(enB,OUTPUT);

     pinMode(A0, INPUT); // initialize Left sensor as an input
     pinMode(A1, INPUT); // initialize Right sensor as an input

}

void loop() {

  int LEFT_SENSOR = digitalRead(A0);
  int middle_sensor=digitalRead(A1);
  int middle1_SENSOR = digitalRead(A2);
  int middle2_SENSOR = digitalRead(A3);
  int RIGHT_SENSOR = digitalRead(A4);
//////////////////////////////////////////////////////////////////////////////////////
if(middle1_SENSOR==1 && LEFT_SENSOR==1 && middle_sensor==1 && RIGHT_SENSOR==1 && middle2_SENSOR==1) {
sharpLeftTurn1();
}
/////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==1 && LEFT_SENSOR==0 && middle_sensor==0 && RIGHT_SENSOR==0 && middle2_SENSOR==0) {
    
    
    forward(); //Move Right
 }

////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==1 && LEFT_SENSOR==0 && middle_sensor==1 && RIGHT_SENSOR==0 && middle2_SENSOR==1) {
    
    
    forward1(); //Move Right
 }
////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==0 && LEFT_SENSOR==1 && middle_sensor==0 && RIGHT_SENSOR==0 && middle2_SENSOR==0) {
    
    
    left1(); //Move Right
 }
////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==0 && LEFT_SENSOR==1 && middle_sensor==1 && RIGHT_SENSOR==0 && middle2_SENSOR==0) {
   
    
    left(); //Move Right
 }
////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==1 && LEFT_SENSOR==1 && middle_sensor==1 && RIGHT_SENSOR==0 && middle2_SENSOR==0) {
    
    
    left(); //Move Right
 }
////////////////////////////////////////////////////////////////////////////////////
  else if(middle1_SENSOR==1 && LEFT_SENSOR==1 && middle_sensor==1 && RIGHT_SENSOR==0 && middle2_SENSOR==1) {
    
    
    left1  (); //Move Right
 }
////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==1 && LEFT_SENSOR==0 && middle_sensor==1 && RIGHT_SENSOR==0 && middle2_SENSOR==0) {
    
    
    forward1(); //Move Right
 }
////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==1 && LEFT_SENSOR==0 && middle_sensor==0 && RIGHT_SENSOR==0 && middle2_SENSOR==1) {
    
    
    right() ;//Move Right
 }
////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==1 && LEFT_SENSOR==0 && middle_sensor==1 && RIGHT_SENSOR==1 && middle2_SENSOR==1) {
    
    
    forward(); //Move Right
 }
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==0 && LEFT_SENSOR==0 && middle_sensor==1 && RIGHT_SENSOR==0 && middle2_SENSOR==0) {
    
    
    forward(); //Move Right
 }

 ////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==0 && LEFT_SENSOR==0 && middle_sensor==0 && RIGHT_SENSOR==0 && middle2_SENSOR==1) {
    
    
    forward(); //Move Right
 }
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==1 && LEFT_SENSOR==0 && middle_sensor==0 && RIGHT_SENSOR==1 && middle2_SENSOR==1) {
    
    
    forward(); //Move Right
 }
////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==0 && LEFT_SENSOR==0 && middle_sensor==0 && RIGHT_SENSOR==0 && middle2_SENSOR==0) {
    
    
    sharpRightTurn1(); //Move Right
 }
////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==0 && LEFT_SENSOR==0 && middle_sensor==0 && RIGHT_SENSOR==1 && middle2_SENSOR==0) {
    
    
    right(); //Move Right
 }
////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==0 && LEFT_SENSOR==0 && middle_sensor==0 && RIGHT_SENSOR==1 && middle2_SENSOR==1) {
    
    
    right(); //Move Right
 }
////////////////////////////////////////////////////////////////////////////////////

  else if(middle1_SENSOR==0 && LEFT_SENSOR==1 && middle_sensor==1 && RIGHT_SENSOR==0 && middle2_SENSOR==1) {
    
    
    left(); //Move Right
 }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
 else if(middle1_SENSOR==1 && LEFT_SENSOR==1 && middle_sensor==1 && RIGHT_SENSOR==1 && middle2_SENSOR==0) {
    
    
    left(); //Move Right
 }
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////
  else if(middle1_SENSOR==1 && LEFT_SENSOR==1 && middle_sensor==0 && RIGHT_SENSOR==1 && middle2_SENSOR==1) {
    
    
    left(); //Move Right
 }
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  else if(middle1_SENSOR==0 && LEFT_SENSOR==1 && middle_sensor==0 && RIGHT_SENSOR==1 && middle2_SENSOR==1) {
    
    
    left(); //Move Right
 }
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  else if(middle1_SENSOR==0 && LEFT_SENSOR==1 && middle_sensor==1 && RIGHT_SENSOR==1 && middle2_SENSOR==0) {
    
    
    left(); //Move Right
 }
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  else if(middle1_SENSOR==0 && LEFT_SENSOR==1 && middle_sensor==0 && RIGHT_SENSOR==1 && middle2_SENSOR==0) {
    
    
    left(); //Move Right
 }

//void readSensor()
//{
//   int LEFT_SENSOR = digitalRead(A0);
//  int middle_sensor=digitalRead(A1);
//  int RIGHT_SENSOR = digitalRead(A2);
//  
//  if(RIGHT_SENSOR==1 && LEFT_SENSOR==1 &&middle_sensor==1)
//  {
//    error=3;
//  }
//  else if(RIGHT_SENSOR==0 && LEFT_SENSOR==0 &&middle_sensor==1)
//  {
//    error=0;
//  }
}

void forward()
{
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);

                analogWrite(enA, M1_Speed);
                analogWrite(enB, M2_Speed);
}

///////////////////////////////////////////////////////////////////////////////////////
void forward1()
{
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);

                analogWrite(enA, 170);
                analogWrite(enB, 170);
}
///////////////////////////////////////////////////////////////////////////////////////

void backward()
{
            digitalWrite(in1, LOW);
             digitalWrite(in2, HIGH);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);

                analogWrite(enA, M1_Speed);
                analogWrite(enB, M2_Speed);
}

void right()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, LOW);
            digitalWrite(in4, LOW);

                analogWrite(enA, LeftRotationSpeed);
                analogWrite(enB, RightRotationSpeed);
}

void left()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, LOW);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);

                analogWrite(enA, LeftRotationSpeed);
                analogWrite(enB, RightRotationSpeed);
}
////////////////////////////////////////////////////////////////////////////////////////
void left1()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, LOW);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);

                analogWrite(enA, 170);
                analogWrite(enB, 170);
}

///////////////////////////////////////////////////////////////////////////////////////

void Stop()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, LOW);
            digitalWrite(in3, LOW);
            digitalWrite(in4, LOW);
}
void sharpRightTurn() {
  /*The pin numbers and high, low values might be different depending on your connections */
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

                analogWrite(enA, 70);
                analogWrite(enB, 70);
}

void sharpRightTurn1() {
  /*The pin numbers and high, low values might be different depending on your connections */
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

                analogWrite(enA, 90);
                analogWrite(enB, 90);
}

void sharpLeftTurn() {
  /*The pin numbers and high, low values might be different depending on your connections */
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

                analogWrite(enA, 70);
                analogWrite(enB, 70);
}
void sharpLeftTurn1() {
  /*The pin numbers and high, low values might be different depending on your connections */
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

                analogWrite(enA, 140);
                analogWrite(enB, 140);
}
