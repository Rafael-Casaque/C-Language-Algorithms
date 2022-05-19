#include <stdio.h>
#include <string.h>

int main(){
    char string[20];
    char substring[10];
    printf("aaa");
    scanf("%s", string);
    printf("aaa");
    scanf("%s", substring);

    if(strstr(string, substring)!=NULL) printf("substring!");    
}