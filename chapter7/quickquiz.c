# include <stdio.h>

int main(){
    int arr[3][2];
    printf ("enter the value to display in 2d arry column");
     for (int i  = 0; i < 3; i++)
     {
      for (int j = 0; j < 2; j++)
      {
         printf ("enter the number at arr[%d][%d]",i,j);
            if (scanf("%d",&arr[i][j])!=1){
        printf("enter the correct value");
        return 1 ;
      }
        }
     }
     for (int i  = 0; i < 3; i++)
     {
      for (int j = 0; j < 2; j++)
      {
      printf("%d ",arr[i][j]);
        }
        printf("\n");
     }
     
     
     
     return 0;
}