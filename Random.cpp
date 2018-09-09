#include "Random.h"
#include <iostream>
#include <time.h>

Random_UD::Random_UD()
{
    x_Counter=time(0)%8707;
}

Random_UD::Random_UD(unsigned int a){
    x_Counter=a;
}

Random_UD::~Random_UD()
{
    //dtor
}
/**void Random_UD::help_func(){
for (int i=0; i<10; i++) std::cout<<arr_Counter[i]<<" ";
}*/
