#include<iostream>
using namespace std;
float pyramidVolume(float length, float width, float height, string unit );

int main(){

 float length;
 cout<<"Enter the length of the pyramid(in meters): ";
 cin>>length;
 float width;
 cout<<"Enter the width of the pyramid in meters): ";
 cin>>width;
 float height;
 cout<<"Enter the height of the pyramid: ";
 cin>>height;
 string unit;
 cout<<"Enter the desired output unit(millimetres, centimeters, meters, kilometres): ";
 cin>>unit;
 float result= pyramidVolume(length, width, height, unit);
 cout<<"The volume of the pyramid is: "<<result<<" cubic "<<unit;
 

 
}
 float pyramidVolume (float length, float width, float height, string unit )

{
float volume;
if (unit== "meters"){


   volume=(height*width*length)/3;
   }
if (unit== "millimetres"){
   volume=((height*width*length)/3)*1000;
   }
if (unit== "centimeters"){
   volume=((height*width*length)/3)*100;
 
   }
if (unit== "kilometres"){
    volume=((height*width*length)/3)/(1000^3);

    }
return volume;
}








 

