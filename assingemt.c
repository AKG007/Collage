#include <stdio.h>
#include<conio.h>

int sum_of_selected_no(int arr[3][3]) // 1 to sum up the selected members of the 2 Dimensional Array (TDA)
{
    int total = 0;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (arr[r][c] % 2 == 0)
            {
                total = total + arr[r][c];
            }
        }
    }
    return total;
}

int check_amstrong(int num)
{
    int total = 0, temp, r;
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        total = total + r * r * r;
        num = num / 10;
    }
    if (total == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int check_mirror(int num)
{
    {
        int rev = 0, temp = num;
        while (num > 0)
        {
            rev *= 10;
            rev += num % 10;
            num /= 10;
        }

        if (rev == temp)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

void print_2darr(int arr[3][3])
{
    printf("\n\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf(" %d ", arr[r][c]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void main()

{

    int tda[3][3] = {10, 11, 12, 13, 14, 15, 16, 17, 18},r,c;
    // 1 to sum up the selected members of the 2 Dimensional Array (TDA)
    printf("Made an array 3x3");
    print_2darr(tda);
    printf("\n\nQ1 To sum up the selected members of the 2 Dimensional Array (TDA) \"press enter to get the answer\" ");
    getchar();
    printf("\n\t=>Sum of selected no of array which are divisble by 2 is %d\n\n\"Press enter to go next question\"", sum_of_selected_no(tda));
    getchar();

    // ------------------------------------------------------------------------------------------------
    // 3 to swap the smallest and biggest elems in a tda and to swap them
    printf("Q3 To swap the smallest and biggest elems in a tda and to swap them	\n");
    int br = 0, bc = 0, sr = 0, sc = 0, big = tda[0][0], small = tda[0][0];
    printf("Orignal 2d array\n");
    print_2darr(tda);
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (tda[r][c] > big)
            {
                big = tda[r][c];
                br = r;
                bc = c;
            }
            if (tda[r][c] < small)
            {
                small = tda[r][c];
                sr = r;
                sc = c;
            }
        }
    }
    tda[sr][sc] = big;
    tda[br][bc] = small;
    printf("\nArray after swap\n");
    print_2darr(tda);
    printf("\"Press enter to go next question\"");
    getchar();

    // -------------------------------------------------------------------------------------

    //  4 given an array to print the sum of digits of each number in the array
    int sum = 0, arr[5] = {10, 11, 12, 13, 14}, num,i;
    printf("Q4 Given an array to print the sum of digits of each number in the array\n\n");
    for (r = 0; r < 5; r++)
    {

        printf(" %2d ", arr[r]);
    }
    printf("\n");
    for (r = 0; r < 5; r++)
    {
        num = arr[r];
        sum = 0;
        while (num > 0)
        {
            i = num % 10;
            sum = sum + i;
            num = num / 10;
        }
        printf(" %2d ", sum);
    }

    printf("\n\n\"Press enter to go next question\"");
    getchar();

    // --------------------------------------------------------------------------------------

    // 5 check the armstrong numbers, mirror numbers in the array
    int check_amstrong_no, check_mirror_no;
    int arr_[3] = {121, 234, 153};
    printf("Q5 Check the armstrong numbers, mirror numbers in the array\n\nArray");
    for ( r = 0; r < 3; r++)
    {
        printf(" %3d ",arr_[r]);
    }
    printf("\n");
    
    for (r = 0; r < 3; r++)
    {
        check_amstrong_no = check_amstrong(arr_[r]);
        check_mirror_no = check_mirror(arr_[r]);
        if (check_amstrong_no == 1)
        {
            printf("\n%d is an amstrong no", arr_[r]);
        }
        else
        {
            printf("\n%d is not an amstrong no", arr_[r]);
        }
        if (check_mirror_no == 1)
        {
            printf("\n%d is an mirror no", arr_[r]);
        }
        else
        {
            printf("\n%d is not an mirror no", arr_[r]);
        }
        printf("\n");
    }

    printf("\n\"Press enter to go next question\"");
    getchar();

    // ---------------------------------------------------------------------------------------------
    // 7 to rotate the elements of the array to right or to left!
    printf("\nQ7 Rotate the elements of the array to right or to left!\nSo Rotating array to left\n\nOrignal");
    print_2darr(tda);
    printf("After Rotate\n\n");
    for (int r = 2; r >= 0; r--)
    {
        for (int c = 0; c < 3; c++)
        {
            printf(" %d ", tda[c][r]);
        }
        printf("\n");
    }
    getch();
    // -----------------------------------------------------------------------------------------------------

    printf("\nQ8. swap 2 specified  rows of the tda\nOrginal");
    print_2darr(tda);
    printf("After Swap\n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf(" %d ", tda[2 - r][c]);
        }
        printf("\n");
    }
    getch();

    // ---------------------------------------------------------------------------------------------

    //  11 program to print the row number of the biggest elem in each row
    printf("\n\nQ11 Biggest no in each row\n\n");
    for (int r = 0; r < 3; r++)
    {
        big = tda[r][0];
        for (int c = 0; c < 3; c++)
        {
            if (tda[r][c] > big)
            {
                big = tda[r][c];
            }
        }
        printf("\nIn first row %2d", big);
    }
    getch();

    // -----------------------------------------------------------------------------------------------------

    // 13 given a tda (2 dimensional Array), wap to print the rowsums, colsums separately and to give the grand sum
    int rsum = 0, csum = 0, tda_[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("\n\nSection B\n\n");
    printf("Q13 given a tda (2 dimensional Array), wap to print the rowsums, colsums separately and to give the grand sum\n\n");
    for (int r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf(" %d ", tda_[r][c]);
            rsum = rsum + tda_[r][c];
            csum = csum + tda_[c][r];
        }
        printf("\trow sums is %d", rsum);
        printf("\tcols sums is %d", csum);
        printf("\n");
    }
    printf("\n\"Press enter to go next question\"");
    getch();

    // ---------------------------------------------------------------------------------------

    //    15 to print the following shapes off/from a 9x9square matrix. Plus sign, tick mark
    // 	 hockey stick, spoon, inverted U, inverted C of desirable proportions
    int _tda[9][9];
    num = 1;
    for (r = 0; r < 9; r++) // adding numbers to the array by help of loop
    {
        for (c = 0; c < 9; c++)
        {
            _tda[r][c] = num;
            num++;
        }
    }

    printf("\n\n\" 15 to print the following shapes off/from a 9x9square matrix.\nPlus sign, tick mark hockey stick, spoon, inverted U, inverted C of desirable proportions\"\nArray of 9x9\n\n");

    for (r = 0; r < 9; r++);
    {
        for (c = 0; c < 9; c++)
        {
            printf(" %2d ", _tda[r][c]);
        }
        printf("\n");
    }

    // Plus sign
    printf("\n\nPlus sign\n\n");
    for (r = 0; r < 9; r++)
    {
        for (c = 0; c < 9; c++)
        {
            if (r == 4 || c == 4)
            {
                printf(" %2d ", _tda[r][c]);
            }
            else
                printf("  . ");
        }
        printf("\n");
    }
    getch();
    // Tick mark
    printf("\n\nTick mark\n\n");
    for (r = 0; r < 9; r++)
    {
        for (c = 0; c < 9; c++)
        {
            if (c == 0 && r > 4 || 8 - r == c)
            {
                printf(" %2d ", _tda[r][c]);
            }
            else
                printf("  . ");
        }
        printf("\n");
    }
    getch();

    // Hockey stick
    printf("\n\nHockey stick\n\n");
    for (r = 0; r < 9; r++)
    {
        for (c = 0; c < 9; c++)
        {
            if (c >= 0 && c <= 1 && r > 5 || r == 8 && c >= 0 && c < 2 || 7 - r == c)
            {
                printf(" %2d ", _tda[r][c]);
            }
            else
                printf("  . ");
        }
        printf("\n");
    }
    getch();

    // Spoon
    printf("\n\nSpoon\n\n");
    for (r = 0; r < 9; r++)
    {
        for (c = 0; c < 9; c++)
        {
            if (c == 0 && r > 4 || r == 8 && c >= 0 && c < 4 || c == 3 && r > 4 || c >= 3 && 7 - r == c)
            {
                printf(" %2d ", _tda[r][c]);
            }
            else
                printf("  . ");
        }
        printf("\n");
    }
    getch();

    // inverted U
    printf("\n\ninverted U\n\n");
    for (r = 0; r < 9; r++)
    {
        for (c = 0; c < 9; c++)
        {
            if (c == 0 || r == 0 || c == 8)
            {
                printf(" %2d ", _tda[r][c]);
            }
            else
                printf("  . ");
        }
        printf("\n");
    }
    getch();

    // inverted C
    printf("\n\ninverted C\n\n");
    for (r = 0; r < 9; r++)
    {
        for (c = 0; c < 9; c++)
        {
            if (r == 0 || c == 8 || r == 8)
            {
                printf(" %2d ", _tda[r][c]);
            }
            else
                printf("  . ");
        }
        printf("\n");
    }
    getch();
    // --------------------------------------------------------------------------------------------------------
}