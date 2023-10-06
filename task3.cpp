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