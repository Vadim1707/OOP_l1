#include "rand1.h"
#include <iostream>
rand1::rand1()
{
}

rand1::~rand1()
{
}
inline void rand1::Generate_one(){
x_Counter=(a*x_Counter+c)%m;
}

void rand1::show_x(){
std::cout<<"seed: "<<x_Counter<<std::endl;
}

void rand1::Generate(){
if (n<1) return;
for(int i=0; i<n; i++){
    Generate_one();
    for(int j=1; j<=10; j++)
    if(1.0*x_Counter/m<0.1*j) {arr_Counter[j-1]++; break;}

}
}

void rand1::print(){
std::cout<<"Interval\t frequency\n";
for(int j=0; j<10; j++){
std::cout<<"["<<0.1*j<<";"<<0.1*(j+1)<<") \t "<<arr_Counter[j]*1.0/n<<"%\n";
}
}
