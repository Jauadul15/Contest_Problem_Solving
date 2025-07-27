/*
Write a C program that performs the following tasks:
Take an integer n as input, which represents the size of an array.
Take n integers as input and store them in an array.
Replace each element of the array based on these rules:
If the element is positive, replace it with 1.
If the element is negative, replace it with 2.
If the element is zero, keep it as 0.
Finally, print the modified array in a single line.
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {
            a[i]=1;
        }
        else if (a[i]<0)
        {
            a[i]=2;
        }
        else{
            a[i]=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}