#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N; int num[100];
  scanf("%d",&N);

    while (N>=0&&N<=100)
    {
        for(int i=0;i<N;i++){
       scanf ("%d",&num[i]);

 }

   for(int i=0;i<N;i++){

printf("\n%d ",num[i]);
 for(int t=0;t<num[i];t++){
    printf("*");
   }
    }
   break; }





    return 0;
}
