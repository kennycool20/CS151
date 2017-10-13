/*********************************************************************************************************************************************************************************
//Name    : Kehinde Ogungbemi
//Creation: 10.06.17
//Version : 0.1
Description: Description: prompt the user to enter two (2) vectors in polar coordinates with the angle in degrees and print the vectors, their sum and differences in both polar and rectangular coordinates
**********************************************************************************************************************************************************************************************/
/**
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Variables Declaration(h, p , y,u, mag, ang, magid1,magid2)                03
//03      Prompt Vector(1) (h,p)                                                    04
//04      Prompt Vector(2) (y,u)                                                    05
//05      Print Polar Coordinate vector (1)                                         06
//06      toRectangular(h,p,mag, ang)                                               07
//07      toRectangular(h,p): processes (h,p)--> (mag,ang)                          08
//08      toPolar(h,p,mag,ang)                                                      09
//09      toPolar(mag,ang): processes (mag,ang)--> polar form                       10
//10      print (mag,ang)                                                           11
//11      Print Polar Coordinate vector (2)                                         12
//12      toRectangular(y,u,mag, ang)                                               13
//13      toRectangular(y,u): processes (y,u)--> (mag,ang)                          14
//14      toPolar(y,u,mag,ang)                                                      15
//15      toPolar function changes (mag,ang)--> polar form                          16
//16      print (mag,ang)                                                           17
//17      add(h,p,y,u,magid1 ,magid2)                                               18
//18      add(h,p,y,u magid1, magid2):  returns (magid1,magid2)                     19
//19      print (magid1,magid2)                                                     20
//20      toRectangular(magid1,magid2,mag,ang) to rectangular coords.               21
//21      Print (mag,ang)                                                           22
//22      Subtract(h,p,y,u,magid1 ,magid2)                                          23
//23      Subtract(h,p,y,u):     returns (magid1,magid2)                            24
//24      print(magid1,magid2)                                                      25
//25      toRectangular(magid1,magid2,mag,ang) to rectangular coords                26
//26      Print(mag,ang)                                                            27
//27      subtract(y,u,h,p, magid1, magid2)                                         28
//28      Subtract(y,u,h,p):    returns (magid1,magid2)                             29
//29      print(magid1,magid2) -->toRectangular function                            30
//30      toRectangular(magid1,magid2,mag,ang) rectangular coords.                  31
//31      print(mag,ang)                                                            32
//32     (exit)

**/

#include "vec.h"
#include <iostream>
#include <string>


using namespace std;




int main(){
  
// Declaration of Varibles Float Type
float h, p , y,u, mag, ang, magid1,magid2 ;

// Prompts User for Vector (1)  
cout << "\nEnter the First Vector: " ;
cin >> h >> p;

// Prompts User for Vector (2)
cout << "\nEnter the Second Vector: " ;
cin >> y >> u ;

cout << endl;


cout << "v1:"<< endl;
cout << "Polar Coordinates:";
cout <<"  ("<<  fixed << setprecision(1) << h  << " ," << p<< ")\n";
cout << "Rectangular Coordinates:";
toRectangular(h, p, mag ,ang);
cout <<"  ("<< mag << " ," << ang<< ")\n";
 
cout << endl;

cout << "Polar Coordinates:";
cout <<"  ("<< fixed << setprecision(1) << y  << " ," << u<< ")\n";
cout << "Rectangular Coordinates:";
toRectangular(y, u, mag ,ang);
cout <<"  ("<< mag << " ," << ang<< ")\n";   

cout << endl; 


cout << "v1 + v2:"<< endl;
cout << "Polar Coordinates:";
add(h,p,y,u,magid1 ,magid2);
cout <<"  ("<< fixed << setprecision(1) << magid1  << " ," << magid2<< ")\n";
cout << "Rectangular Coordinates:";
toRectangular(magid1,magid2,mag,ang);
cout <<"  ("<< mag << " ," << ang << ")\n";   
  

cout << endl; 

cout << "v1 - v2:"<< endl;
cout << "Polar Coordinates:";
subtract(y,u,h,p,magid1 ,magid2);
cout <<"  ("<< fixed << setprecision(1) << magid1  << " ," << magid2<< ")\n";
cout << "Rectangular Coordinates:";
toRectangular(magid1,magid2,mag,ang);
cout <<"  ("<< mag << " ," << ang << ")\n";   
       

   cout << endl; 

cout << "v2 - v1:"<< endl;
cout << "Polar Coordinates:";
subtract(h,p,y,u,magid1,magid2);
cout <<"  ("<< fixed << setprecision(1) << magid1  << " ," << magid2<< ")\n";
cout << "Rectangular Coordinates:";
toRectangular(magid1,magid2,mag,ang);
cout <<"  ("<< mag << " ," << ang << ")\n";   

  return 0;
}



