#ifndef RANDOM_H
#define RANDOM_H


class Random_UD
{
    public:
        Random_UD();
        Random_UD(unsigned int);
        virtual ~Random_UD();
        /**unsigned int Generate();
        void help_func();*/

    protected:
        unsigned int x_Counter;
        int arr_Counter[10]={};
};

#endif // RANDOM_H