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
        void Generate(int);


    protected:

    private:
        const unsigned int m=8707;
        const unsigned int a=70;
        const unsigned int c=1067;
};

#endif // RAND1_H
