// Concatenate two strings
#include<stdio.h>
void concatenate(char[],char[]);

int main(){

    char p[100],q[100];

    printf("Enter the first string \n");
    scanf("%s", p);

    printf("Enter the second string \n");
    scanf("%s",q);

    //con = concatenate(p,q);

    concatenate(p,q);

    printf("The concatenated string is %s\n ", p) ;

    return 0;


}

void concatenate(char p[],char q[]){

    int c, d;

    c = 0;

    while(p[c] != '\0'){

        c++;

    }


    d = 0;

    while(q[d] != '\0'){


        p[c] = q[d];

        d++;

        c++;


    }

    p[c] = '\0'; // terminating the p array

}

