#ifndef RAND1_H
#define RAND1_H

#include <Random.h>


class rand1 : public Random_UD
{
    public:
        rand1();
        virtual ~rand1();
        inline void Generate_one();
        void show_x();
        void Generate();
        void print();///best after generate


    protected:

    private:
        const  int m=9091;
        const  int a=70;
        const  int c=1067;
        int n=10000;

};

#endif // RAND1_H
