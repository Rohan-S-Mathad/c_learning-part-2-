// # include <stdio.h>
// int reverse(int* x, int* y);
// int reverse(int* x, int* y){
// int temp;
// temp=*x;
// *x=*y;
// *y=temp;
// }
// int main(){
//      int arr[2]={1,2};
//      reverse(&arr[0],&arr[1]);
//      printf ("%d %d",arr[0],arr[1]);

//      return 0;
// }

# include <stdio.h>

void reverse (int x[],int n){
int temp;
for (int i = 0; i < n/2; i++)
{
     temp =x[i];
     x[i]=x[n-i-1];
     x[n-i-1]=temp;
     
}}
void printfarray(int x[],int n){
 for (int i = 0; i < n; i++)
 {
     
      printf("%d",x[i]);
 }
printf("\n");



}
int main(){
     int arr[]={1,2,3,4,5,6};
     printfarray(arr,6);
     reverse(arr,6);
      printfarray(arr,6);
      return 0;
}