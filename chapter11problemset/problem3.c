# include <stdio.h>
# include <stdlib.h>

int main(){
     int a;
     int* ptr=&a;
     ptr=(int*) calloc (6, sizeof (int));
     for (int i = 0; i < 5; i++)
     {
        printf("Enter the value of %d number",i);
        if (scanf("%d",&ptr[i])!=1){
        printf("enter the correct value");
        return 1 ;
        }
     }
     
     for (int i = 0; i < 5; i++)
     {
        printf(" %d \n ",ptr[i]);
     }
     
     return 0;
}