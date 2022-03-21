#include <stdio.h>

void main()
{
// 13 given a tda (2 dimensional Array), wap to print the rowsums, colsums separately and to give the grand sum
int tda[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, r, c, rsum = 0, csum = 0;
printf("Section B\n\n");
printf("Q13 given a tda (2 dimensional Array), wap to print the rowsums, colsums separately and to give the grand sum\n\n");
for (int r = 0; r < 3; r++)
{
    for (c = 0; c < 3; c++)
    {
        printf(" %d ", tda[r][c]);
        rsum = rsum + tda[r][c];
        csum = csum + tda[c][r];
    }
    printf("\trow sums is %d", rsum);
    printf("\tcols sums is %d", csum);
    printf("\n");
}
printf("\"Press enter to go next question\"");
getch();

// printf("\n\nQ14 draw the plan of your home using functions for horline, vertline of	specified length, specified height and x,y location");

}