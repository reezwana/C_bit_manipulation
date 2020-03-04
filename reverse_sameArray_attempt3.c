#include<stdio.h>
int main()
{

    char s[1000];
    int begin, end, count = 0;
    char temp = 0;

    printf("Enter your string : ");
    scanf("%s", s);
    printf("The string is %s ", s);

    while(s[count] != '\0'){

        count++;

    }


    end = count - 1;

    for(begin = 0; begin < count; begin++ ){

        temp = s[begin];
        s[begin] = s[end];
        s[end] = temp;
        begin ++;
        end -- ;


    }



    s[begin] = '\0';
    printf("%s\n", s);
    return 0;

}
