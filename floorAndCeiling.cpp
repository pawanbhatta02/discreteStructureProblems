#include<iostream>
#include <string>  

using namespace std;

float floorM(float x){
    if(x<1)return (float)(int)x-1;
    return (float)(int)x;
}


float ceilM(float x){
    if(x>1)return (float)(int)x+1;
    return (float)(int)x;
}



int main()
{
    float num;
    cout<<floorM(2)<<endl;
    cout<<floorM(-1.1)<<endl;
    cout<<ceilM(1.1)<<endl;
    cout<<ceilM(-1.1)<<endl;
   return 1;
}