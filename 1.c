#include<stdio.h>

int main()
{
    char ch='a'+'b'; // ch will have a value of 195

    switch(ch)
    {
        case 'a':
            printf("Case 1: Look beta\n");
            break;
        case 'b':
            printf("Case 2: Look beta\n");
            break;
        case 'A':
            printf("Case 3: Look up\n");
            break;
        case 'b'+'a':
            printf("Case 4: Look idea\n");
            break;
        default:
            printf("Default case: No match found\n");
    }
    return 0;
}
