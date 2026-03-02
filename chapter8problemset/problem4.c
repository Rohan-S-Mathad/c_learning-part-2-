# include <stdio.h>
void sclice(char st[]){
    int n,m;
    printf("n<m");
    if (n>m){
        printf ("enter n<m");
        
    }
    if (scanf("%d",&n)!=1){
        printf("enter the correct value");
      
    
        }
    if (scanf("%d",&m)!=1){
    printf("enter the correct value");
   
    }
    for (int i =n; i <= m ; i++)
    {
        printf(" %c",st[i]);
    }
    
}
int main(){
    char f[30];
    scanf("%s",f);ritumathad
    sclice(f);
     
     return 0;
}