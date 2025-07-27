/*
Problem: Find the Index
You are given an array of integers and another integer 𝑥
Your task is to find the index of the first occurrence of x in the array.
If x does not exist in the array, print -1.
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
    int x;
    scanf("%d",&x);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==x)
        {
            printf("%d",i);
            found=1;
            break;
        }
        
    }
    if (!found)
    {
        printf("-1");
    }
    return 0;
}