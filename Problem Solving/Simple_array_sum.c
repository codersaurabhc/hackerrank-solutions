#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define N 1000

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x[N],n,i,t;
        scanf("%d",&n);
    for(i=0;i<n;i++)
          if(i==0)
        
    {scanf("%d",&x[i]);t=x[i];}
               else
                 if(getchar()==' ')
                  {scanf("%d",&x[i]);t=t+x[i];}
    printf("%d",t);
    return 0;
}
