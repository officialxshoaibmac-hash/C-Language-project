#include <stdio.h>


int main()

{

    //this program converts an integer to a float

    int num;

    float fnum;

    printf("Enter an integer: ");

    scanf("%d", &num);

    fnum = (float)num; // Type casting from int to float

    printf("The float value is: %f\n", fnum);

    return 0;

}
