
         \\TASK 1"

#include<iostream>
using namespace std;

 int value1 = 10;
 int value2 = 20;

 int sum(){
   value1 = 40;
   return value1 + value2;
   }



main(){
    int x = value1;
    value1 = 100;
    x = 20;
    value2 = sum();
    cout<<value1<<"  "<<value2;
}


         \\TASK 2"




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


             \\TASK 3



#include<iostream>
using namespace std;
float taxCalculator(char code, float price);
main(){
 char code;
 cout<<"Enter the vehicle type code(M, E, S, V, T): ";
 cin>>code;
 float price;
 cout<<"Enter the price of the vehicle: $";
 cin>>price;
 float result= taxCalculator(code, price);
 cout<<"The final price of a vehicle of type "<<code<<" after adding the tax is $"<<result;

 



}
 float taxCalculator(char code, float price)
{
 float taxAmount;
   
    if (code =='E'){
     taxAmount= price+(price*0.08);
    }
    
    if (code=='M'){
     taxAmount=price+(price*0.06);
    }
    
    if (code =='S'){
     taxAmount=price+(price*0.10);
    }
    
    if (code =='V'){
     taxAmount=price+(price*0.12);n
    }

    if (code =='T'){
     taxAmount=price+(price*0.15);
    }
 return taxAmount;
}

               \\TASK 4

#include<iostream>
using namespace std;
int projectTimeCalculation(int neededHours, int days, int numWorkers);

main(){
 int neededHours;
 cout<<"Enter the needed hours: ";
 cin>>neededHours;
 int days;
 cout<<"Enter the days the firm has: ";
 cin>>days;
 int numWorkers;
 cout<<"Enter the number of all workers: ";
 cin>>numWorkers;
 projectTimeCalculation(neededHours, days, numWorkers);

 


}
int projectTimeCalculation(int neededHours, int days, int numWorkers)
{
  int time=days*numWorkers*9;
  int addHours=neededHours-time;
  int leftHours=time-neededHours;
  
    if(time < neededHours){
     
     
     cout<<"not enough time!"<<addHours<<" hours needed.";
    }
   
    if (time >=neededHours){
     cout<<"Yes!"<<leftHours<<" hours left.";
    }
  }










































