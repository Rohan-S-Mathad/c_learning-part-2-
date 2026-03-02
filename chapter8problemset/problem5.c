# include <stdio.h>
#include<string.h>
void strcpy1(char st[],char st2[]){
    for (int i = 0; i < strlen(st2); i++)
    {
        st2[i]=st[i];
        
    }
    

}
int main(){
    char f[]="lo";
    char g[30];
    strcpy1(f,g);
    printf("%s %s",g,f);
     
     return 0;
}