#include <stdio.h>
#include <string.h>

char *Strtok(char *str1, const char *str2);

int main()
{
    char *result;
    char str1[100], str2[100];
    scanf("%s %s",str1, str2);

    result = Strtok(str1, str2);
    printf("%s", result);
    return 0;
}

char *Strtok(char *str1, const char *str2)
{
    int i,j;
    int cnt=0;
    char str3[100];
    for(i=0;i<strlen(str2);i++){
        for(j=0;j<strlen(str1);j++){
            if(str1[j] != str2[i]) {
                str3[cnt] = str1[j];
                printf("%c", str3[cnt]);
                cnt++;
            }
        }
    }
    return str3;
}
