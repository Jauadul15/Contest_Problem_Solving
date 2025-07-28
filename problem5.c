#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int min = INT_MAX;
    int position = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            position = i;
        }
        
    }
    printf("%d %d",min,position);
    
}