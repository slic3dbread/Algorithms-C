#include <stdio.h>
#include <math.h>
#include <time.h>

#define PHI ((1 + sqrt(5))/2)

long long Fib1(long long n);
long long Fib2(long long n);
long long Fib3(long long n);

int main()
{
    int d, i;
    int e;
    clock_t begin, end;
    double time_spent;
    while(1)
    {
        printf("n?\n>");
        scanf("%d",&d);
        printf("type? [1 rec][2 ite ][3 floor]\n>");
        scanf("%d",&e);
        begin = clock();
        if(e==1)
        {
            printf("out: %ld\n",Fib1(d));
        }
        else if(e==2)
        {
            for(i=0;i<10000;i++)
            printf("out2: %ld\n",Fib2(d));
        }
        else if(e==3)
        {  
            for(i=0;i<100000;i++)
            printf("out3: %ld\n",Fib3(d));
        }
        end = clock();
        time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
        printf("Time Taken is: %f\n\n", time_spent);
    }
    return 0;
}

long long Fib1(long long n)
{
    if(n<=1)
    {
        return n;
    }
    return (Fib1(n-1)+Fib1(n-2));
}

long long Fib2(long long n)
{
    long long fnow=0;
    long long fnext=1;
    long long tempf=0;
    while(--n>0)
    {
        tempf = fnow + fnext;
        fnow = fnext;
        fnext = tempf;
    }
    return fnext;
}

long long Fib3(long long n)
{
    return floor( (pow(PHI, n) - pow(1 - PHI, n))/sqrt(5) );
}