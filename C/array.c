#include <stdio.h>
#define N 6

int main()
{   
    int values[N];
    int i;
    for(i=0;i<N;i++){
        printf("Enter values of Element Number %d:\n",i+1);
        scanf("%d",&values[i]);
    }
    for(i=0;i<N;i++){
        printf("values[%d]=%d\n",i,values[i]);
    }
}
