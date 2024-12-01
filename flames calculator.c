#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int  countdiff(char *a,char *b){
    int n=strlen(a);
    int m=strlen(b);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                count++;
                break;
            }
        }
    }
    printf("%d same characters\n",count);
    int f1=n-count;
    int f2=m-count;
    printf("%d-->balance in my name:\n",f1);
    printf("%d-->balance in my name:\n",f2);
    int total=f1+f2;
    return total;
}

void calflames(int total){
    // char flame[]=["F","L","A","M","E","S"];
    char flames[]="FLAMES";
    int len=strlen(flames);
    int index=0;
    while(len>1){
        index=(index+total-1)%len;
    for(int i=index;i<=len-1;i++){
        flames[i]=flames[i+1];
    }
    len--;
    flames[len]='\0';
    }
    if(flames[0]=='F'){
        printf("You Both are friends\n");
    }
    else if(flames[0]=='L'){
        printf("Congrats You both are in love!!!\n");
        printf("Give me Treat");
    }
    else if(flames[0]=='A'){
        printf("You Both have a strong Bond!!\n");
    }
    else if(flames[0]=='M'){
        printf("Oops He/she is your Perfect Soulmate....\n");
    }
    else if(flames[0]=='E'){
        printf("Love your Enemies\n");
    }
    else if(flames[0]=='S'){
        printf("You have a Pretty and intelligent Sister..\n");
    }
}

int main(){
    char a[100],b[100];
    int total;
    printf("Enter your Name:\n");
    scanf("%[^\n]s",a);
    printf("Enter your Partner Name:\n");
    scanf(" %[^\n]s",b);
    *a=tolower(*a);
    *b=tolower(*b);
    total=countdiff(a,b);
    calflames(total);
    return 0;
}

