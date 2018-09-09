#include "rand1.h"
#include <iostream>
rand1::rand1()
{
    //ctor
}

rand1::~rand1()
{
    //dtor
}
inline void rand1::Generate_one(){
x_Counter=(a*x_Counter+c)%m;
}

void rand1::show_x(){
std::cout<<x_Counter;
}

void rand1::Generate(int n){
if (n<1) return;
for(int i=0; i<n; i++){
    Generate_one();
    for(unsigned int j=1; j<=10; j++)
    if(10*x_Counter/m<j) {a[j]++; break;}
}

}
