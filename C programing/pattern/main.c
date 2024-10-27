#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j,n,k=0,m,s=2;
    scanf("%d",&n);

   // for(i=0;i<(2*n-1);i++){
      //  for(j=0;j<(2*n-1);j++){
             k=2*n-1;
            while(k>=1){
              printf("%d\t",n);
              k--;
            }
            printf("\n");
              m=n;
           while(m>=1){
              printf("%d\t",m);
              m--;
            }
            while(s<=2*n-1){
                printf("%d\t",s);
                s++;
            }

        }

    //}
//}
