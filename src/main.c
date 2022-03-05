


/**************************************************************
 *                                                            *
 *                     Done By: ApoAlquaary                   *
 *            Github: https://github.com/ApoAlquaary          *
 *                    Date: 13/09/2021                        *
 * 				   	 									                              *
 *************************************************************/


#include <stdio.h>
#include "funP.h"


int main(){

/**************************************************************
 *                                                            *
 *                          variables                         *
 *                                                            *
 *************************************************************/
    int choice;
    float x, y, result;
    float (*funcs[4])(float, float);

/**************************************************************
 *                                                            *
 *                  pointer fun assaignment                   *
 *                                                            *
 *************************************************************/

    funcs[0] = sum;
    funcs[1] = sub;
    funcs[2] = mul;
    funcs[3] = div;

    printf("Enter two integer numbers:  ");


    scanf("%f %f", &x, &y);

    printf("Enter 0 to sum, 1 to subtract, 2 to multiply, or 3 to divide: ");
    scanf("%d", &choice);

    result = funcs[choice](x, y);
    printf("The result is :     %.2f", result);

    return 0;
}
