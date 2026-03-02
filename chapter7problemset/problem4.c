# include <stdio.h>

int main(){
    int arr[11];
    int n;
// store multiplication of 5 in arr
printf("Enter the number");
if (scanf("%d",&n)!=1){
printf("enter the correct value");
return 1 ;
}
    for (int a = 0; a <=10; a++)
    {
    arr[a]=n*a;    
    printf("%d X %d = %d \n",n,a,arr[a]);
       }
    
     return 0;
}