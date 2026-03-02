# include <stdio.h>

int main(){
    int marks[90];
    printf("Enter the marks of 5 students \n");
     for (int i = 0; i < 5; i++)
     {
     if (scanf("%d",&marks[i])!=1){
     printf("enter the correct value");
     return 1 ;
     }
     }
     for (int i = 0; i < 5; i++)
     {
        printf("The marks of %d is %d \n",i,marks[i]);
     }
     
    
     return 0;
}