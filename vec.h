/*********************************************************************************************************************************************************************************
//Name    : Kehinde Ogungbemi
//Creation: 10.06.17
//Version : 0.1
Description: Vector headder file
**********************************************************************************************************************************************************************************************/





#define VEC_H
#include <cmath>
#include <iomanip>


// Name: Main
//Description: Prompts User input for (2) vectors and returns the Polar and Rectangular Coordinates for 
//Return: 0 if successful
//Parameters: None


float PI(){
  return 3.14159265;
}

float toDegree(float rad){
   return (rad * 180 / PI());
}

float toRadian(float deg){
  return deg * PI() / 180;
}
void toRectangular(float magnitude, float angle, float & x ,float & y){

  x = magnitude * cos(toRadian(angle));
  y = magnitude * sin(toRadian(angle));
 
}
void toPolar(float x , float y ,float & magnitude , float & angle){
  magnitude = sqrt((x*x)+(y*y));
  angle = toDegree(atan2(y,x)) ;
}
float add(float mag1,float ang1,float mag2, float ang2, float & mag3, float & ang3){
  
 
  float xr1,yr1,xr2,yr2;
  toRectangular(mag1,ang1,xr1,yr1);
  toRectangular(mag2,ang2,xr2,yr2);
  mag3=xr1+yr1;
  ang3=xr2+yr2;
  toPolar(mag3,ang3,mag3,ang3);
  return 0;
}
float subtract(float mag1,float ang1,float mag2, float ang2, float & mag3, float & ang3){
  
  float xr1,yr1,xr2,yr2;
  toRectangular(mag1,ang1,xr1,yr1);
  toRectangular(mag2,ang2,xr2,yr2);
  mag3=xr2-xr1;
  ang3=yr2-yr1;
  toPolar(mag3,ang3,mag3,ang3);
  return 0;
}