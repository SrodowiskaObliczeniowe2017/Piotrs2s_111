#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main(){
    

 int n, x, y, i, r, temp1, temp2;
 srand(time(NULL));
 int tempY = 0;
 int tempX = 0;
 int tab1[1000];
 int tab2[1000];
 


 printf("n = ");
 scanf("%d",&n);

 printf("x = ");
 scanf("%d",&x);

 printf("y = ");
 scanf("%d",&y);

 if (1<=n && n<=pow(10,5) && 1<=x && x<=pow(10,12) && 1<=y && y<=pow(10,6))
 {
   for (i=0; i<n;)
	{
	  r = rand();

          temp1 = tempX + pow(r,2);
	  temp2 = tempY + r;
	  
          if (tempY <= y && tempX >=x )
		{
		  tab2[i] = r;
		  tempX = tempX + pow(tab2[i],2);
		  tempY = tempY + tab2[i];
                  printf("%d\n",tab2[i]);
                  i++;
		
		}
	   else
		{
		 n++;
		 i++;		
		} 
	}
 }
 else
 {
 printf("-1\n");
 }
 




return 0;    
}
