/* Problem: Absolute Sum
You are given an array of integers. Your task is to calculate the absolute value of the sum of all elements in the array.
 */
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum +=a[i];
    }
    printf("%lld",llabs(sum));
    
}