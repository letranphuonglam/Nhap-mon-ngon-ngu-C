#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int main() {
void calculate_the_maximum(int n, int k) {
  //Write your code here.
    int a=0,b=0,c=0;
    int i,j,l,m,o;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            o=i&j;
            l=i|j;
            m=i^j;
            if(o>a && o<k)
                a=o;
            if(l>b && l<k)
                b=l;
            if(m>c && m<k)
                c=m;
        }
    }  
    printf("%d\n%d\n%d",a,b,c);
}
    
  int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

