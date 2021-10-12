#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    printf("Enter the marks obtained: \n");
    scanf("%d", &a);
    if(a<=100 && a>=85)
    {
        printf("A Grade");
    }
    else if(a<=84 && a>=70)
    {
        printf("B Grade");
    }
    else if(a<=69 && a>=55)
    {
        printf("C Grade");
    }
    else if(a<=54 && a>=40)
    {
        printf("D Grade");
    }
    else
    {
        printf("F Grade");
    }
    
    return 0;
}