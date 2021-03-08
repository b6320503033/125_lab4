#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[200];
    scanf("%s",a);
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]==a[i+1])
            continue;

        printf("%c",a[i]);
    }
    return 0;
}
