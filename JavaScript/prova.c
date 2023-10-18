#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 1;
    {
        int a = 3;
    }

    printf("a = %d   \n",a);
    return 0;
}
