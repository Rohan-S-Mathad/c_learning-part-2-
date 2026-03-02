# include <stdio.h>
int * sum (int x,int y ){
    int sum= x+ y;
    int * ptr=&sum;
    printf("the sum is  %d \n",sum );
    return ptr;
}
float * avg(int x,int y ){
    float avg=( x+ y)/2.0;
    float * ptr=&avg;
    printf("the average is  %f \n",avg);
    return ptr;
}
int main(){
    int a,b;
    
    int * ptr1;
    float * ptr2;
     printf("Enter the value of number");
     if (scanf("%d",&a)!=1){
     printf("enter the correct value");
     return 1 ;
     }
     printf("Enter the value of number");
     if (scanf("%d",&b)!=1){
     printf("enter the correct value");
     return 1 ;
     }
     //printf("The sum and average of two numers is %d and %f ",claculate (&a,&b,&sum,&avg));
     //above is wrong because void function does not return anything so call function first and print
     ptr1 = sum (a,b);
     ptr2 = avg(a,b);
     
     printf ("the adress is of sum is  %p and of avrage is %p",ptr1,ptr2);
     return 0;
}