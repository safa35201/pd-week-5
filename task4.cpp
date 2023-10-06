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