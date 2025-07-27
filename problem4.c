/*
Problem: Print Small Values
You are given an array of integers. Your task is to print all elements that are less than or equal to 10, along with their indices in the array.
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
        if (a[i]<=10)
        {
            printf("A[%d] = %d\n",i,a[i]);
        }
    }
    return 0;
}