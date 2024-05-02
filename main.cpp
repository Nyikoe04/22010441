  #include <iostream>

   #include<cmath>  //sqrt and pow

   using namespace std;

   int main()
   {
       double p1,p2,y1,y2;
       double distance;

       cout<< "Enter the value for p1: ";
       cin>> p1;


       cout<< "Enter the value for p2: ";
       cin>> p2;


       cout<< "Enter the value for y1: ";
       cin>> y1;


       cout<< "Enter the value for y2: ";
       cin>> y2;


       distance = sqrt(pow(p1-p2,2)+pow(y1 - y2,2));

       cout<<"distance between the two point  is :" << distance<< endl8;

      return 0;
}

