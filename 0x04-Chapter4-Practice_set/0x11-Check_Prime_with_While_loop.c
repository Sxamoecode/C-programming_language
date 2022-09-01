#include <stdio.h>

int main()
{
    int num, i, flag=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    //0 and 1 are not prime number
    //Change flag to 1 for non-prime number
    if (num == 0 || num  == 1) {
        flag = 1;
    }

    i = 2;
    while (i <= num/2)
    {
        //if num is divisible by i, then n is not prime
        // change flag to 1 for non-prime number
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
        ++i;
    }


    //flag is 0 for prime numbers
    if (flag == 0)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }

    return 0;
}
