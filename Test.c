
// test Code

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int T , i=0;
     double count = 1;
     short current[100];
    scanf("%d",&T);
    
    for (i = 0 ; i < T ; i++) {
        scanf("%hd",&current[i]);
    }
    for ( i = 0 ; i < T ; i++) {
        short currentShort = current[i];
        while (currentShort>1) {
            count *= currentShort;
            currentShort--;
        }
        
         printf("%f\n",count);
        count=1;
        printf("Mychange");
    }
     return 0 ;
}
/*
 This change is made By Ahmed Amr Here :)
 
 */
   
