#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "stdfix.h"
/*using namespace std;

void slowPrint(unsigned long speed, const char *s){
    int i = 0;
    while(s[i]!=0)
    {
        cout << s[i++];
        cout.flush();
        unsleep(speed)
    }
}
*/
void Type(const char* p)
{
    if(p != NULL)
    {
        while(*p)
        {
            printf("%c|", *p++);
            ;;Sleep(60);
            printf("\b \b");
            ;;Sleep(60);
        }
        ;;Sleep(600);
    }
}

int main()
{
    Type("Hi, how are you today?\n");
    Type("I hope you're enjoying your day!\n");
    system("pause");
    return 0;
}
