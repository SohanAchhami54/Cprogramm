//#include<stdio.h>
//void main()
//{
//  printf("the factorial is:%d",fact(5));
//}
//
//
//int fact(int n)
//{
//    if (n==1)
//    {
//        return 1;
//    }    int factNm1=  fact(n-1);
//         int factN=factNm1*n;
//    return factN;
//}
//
//
//
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to be factorized:");
    scanf("%d",&n);
    //factorial(n);
    printf("The factorial of %d is:%d",n,  factorial(n));
}
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
         return (n*factorial(n-1));

    }
}
