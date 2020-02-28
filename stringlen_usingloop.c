
//Using loop method
// what about using fgets to read the string. Because otherwise the string cannot be read after white space .
// but if I use fgets, the length of string becomes one more than the actual length. Is it because it is considering the null spcae??



#include<stdio.h>
int main()
{
char st[100];
int i;

//char ss[] = "tanvir\n";

//printf("%s",ss);
printf("Enter the string: ");
scanf("%s",st);
//fgets(st, 100, stdin);
printf("String is %s", st);

for(i = 0; st[i]!='\0';i++);

printf("Length is %d",i);
return 0;

}

//tanvir
//tumpa
//tanvirtumpa

//tanvir'\n'
//tumpa'\n'

//tanvir'\n'tumpa'\n'



// Using strlen , calculate the length of a string
/*
#include<stdio.h>
int main()
{
char sen[10];
int length;
printf("Enter the strung: ");
scanf("%s", sen);

length = strlen(sen);

printf("Length of the string is %ld : ", length);

return 0;


}
*/

//concatenate
//ascii
//reverse
