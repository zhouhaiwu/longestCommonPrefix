#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    int i = 0;
    int j = 0;
    int len;
    char mystr;
    //char myEstr[200];
    char *mystr1;
    mystr1 = (char *)malloc(sizeof(char) * 200);
    if (strsSize == 0) {
        mystr1[j] = '\0';
        return mystr1;
    }
    len = strlen(*strs);
    printf("len:%d\n", len);
    if (len == 0) {
        mystr1[j] = '\0';
        return mystr1;
    }
    if (strsSize == 1) {
        printf("*strs:%s\n", *strs);
        return *strs;
    }
    mystr = strs[0][0];
    printf("mystr:%c\n", mystr);

    while(mystr == strs[i][j]) {
        i++;
        printf("i:%d\n", i);
        if(i == strsSize) {
            i=0;
            printf("AAA1\n");
            //myEstr[j] = mystr;
            mystr1[j] = mystr;
            j=j+1;
            printf("AAA2\n");
            mystr = strs[0][j];
            if (mystr < 'a' || mystr > 'z') {
                break;
            }
            printf("mystr:%c\n", mystr);
            printf("AAA3\n");
            printf("j:%d\n", j);
            printf("==========\n");
        }
    }
    mystr1[j] = '\0';
    //int len;
    len = strlen(mystr1);
    printf("len:%d\n", len);
    printf("AAA\n");
    //strcat(mystr1, myEstr);
    printf("BBBB\n");
    return mystr1;
}


int main() {
    char *mystr;
    //char *mystrs[] = {"flower","flow","flight"};
    //char *mystrs[] = {"dog","racecar","car"};
    //char *mystrs[] = {"a"};
    //char *mystrs[] = {"flower","flower","flower","flower"};
    char *mystrs[] = {"a", "b"};
    //int len = strlen(mystrs);
    //printf("len:%d\n", len);
    //char *mystrs[] = {""};
    mystr = longestCommonPrefix(mystrs, 2);
    printf("mystr:%s\n", mystr);
    return 0;
}