# include <stdio.h>

int main(){
     int arr[2][1][1]={1,2};
     for (int i = 0; i < 2; i++)
     {
          printf("the adress is %p\n",&arr[i][1][1]);
     }
     
     return 0;
}