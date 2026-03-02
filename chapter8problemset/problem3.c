# include <stdio.h>
void strlen2(char st[]){
    int a =0;
    
    while (st[a]!='\0')
    {
        a++;
    }
    printf("%d", a);
    
}
int main(){
    char f[30];
    scanf("%s",f);
    printf ("%s\n",f);
    printf("the string contains elements");
   strlen2(f);     
     return 0;
}