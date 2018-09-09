#include <windows.h>
#include <time.h>
#include <iostream>

const int m=9091, a=70, c=1067;
int arr_saver[10]={};
int x=20*time(0)%m;
int IT=100000;

void randomize(){ //IT iterations
for (int i=0; i<IT; i++){
    x=(a*x+c)%m;
    for(int j=1; j<=10; j++){
if ( (x*1.0/m)<0.1*j ) {arr_saver[j-1]++; break;}
}
}
}

void show_results_in_percent(){

for(int j=0; j<10; j++){
std::cout<<"["<<0.1*j<<";"<<0.1*(j+1)<<")   "<<arr_saver[j]*1.0/IT<<"%\n";

}
}
