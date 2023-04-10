#include <stdio.h>
#include <string.h>



int main(void)
{

    short area_code; 
    char area[10];


    printf("Enter the area code: ");
    scanf("%hd", &area_code);


    switch(area_code)
    {
        case 229:
            strcpy(area, "Albany");
            break;
        case 404: case 470: case 678: case 770:
            strcpy(area, "Atlanta");
            break;
        case 478:
            strcpy(area, "Columbus");
            break;
        case 912:
            strcpy(area, "Savannah");
            break;
        default:
            strcpy(area, "Area code not recognized");
            break;

    }


    printf("%s\n", area);

    return 0;
}