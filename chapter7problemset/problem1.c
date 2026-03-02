# include <stdio.h>

int main(){
     int arr[10]={1,2,3,4,5,6,7,8,9,10};
     int* ptr=&arr[0];
     printf("%d",*(ptr+2));//yessss it  points to 3 index
     return 0;
}