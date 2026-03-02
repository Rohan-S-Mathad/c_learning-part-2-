# include <stdio.h>

int main(){
    int arr []={1,-2,3,-4,5,-1,6,0} ;
    int x=0;   
    for (int i = 0; i < 9; i++)
    {
        if (arr[i]>0)
        {
            x++;
        }
       
        
    }
    printf("the number of positive integers is %d",x);
     return 0;
}