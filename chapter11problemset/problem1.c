# include <stdio.h>
# include <stdlib.h>

int main(){
     int a;
     int* ptr=&a;
     ptr=(int*) malloc (6* sizeof (int));
     ptr[0]=23;
     ptr[1]=9;
     ptr[2]=67;
     ptr[3]=556;
     ptr[4]=77;
     for (int i = 0; i < 5; i++)
     {
        printf("%d \n ",ptr[i]);
     }
     
     return 0;
}