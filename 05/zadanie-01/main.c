#include <stdio.h>
#include <string.h>
typedef enum{
    true = 1,
    false = 0
}bool;
bool czy_lustrzane(char l1[], char l2[],int len1,int len2) {
    int i;
    int ile=0;
    len1 = strlen(l1);
    len2 = strlen(l2);
    if (len1==len2) {
        for (i=0;i<len1;i++) {
            if (l1[i]==l2[len1-i-1]) {
                ile++;
            }
        }
        if (ile==len1) {
            return true;
        }
    }else {
        return false;
    }
}
int main(void) {
    char l1[100],l2[100],len1,len2;
    printf("Podaj liczbe 1. (max 100 znakow)");
    scanf("%s",l1);
    printf("Podaj liczbe 2. (max 100 znakow)");
    scanf("%s",l2);
    bool wynik=czy_lustrzane(l1,l2,len1,len2);
    printf("%s\n",wynik ? "true" : "false");
}
