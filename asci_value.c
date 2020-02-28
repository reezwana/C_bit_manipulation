
// ASCII value of a string
// ASCII value of a character
/*
#include<stdio.h>

int main(){

char c;

printf("Enter your character \n");
scanf("%c",&c);

printf("The ascii value of %c is %d", c,c);

return 0;


}

*/


#include<stdio.h>
int main()
{

char p[100];
int i ;

printf("Enter your string \n");
scanf("%s",p);

printf("your string is %s\n", p);

for(int i = 0; p[i] != '\0'; i++){

    printf("The ASCII VALUES OF CHARACTER IS %c = %d\n" p[i],p[i]);


}

return 0;



}
