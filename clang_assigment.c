#include <stdio.h>
#include <conio.h>

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

int sum_of_all(int arr[3][3]) // 4 given an array to print the sum of digits of each number in the array
{
    int total = 0;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            total = total + arr[r][c];
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

    int tda[3][3] = {10, 11, 12, 13, 14, 15, 16, 17, 18};
    /*
        // 1 to sum up the selected members of the 2 Dimensional Array (TDA)
        printf("Made an array 3x3");
        print_2darr(tda);
        printf("\n\nQ1 To sum up the selected members of the 2 Dimensional Array (TDA) \"press enter to get the answer\" ");
        getchar();
        printf("\n\t=>Sum of selected no of array which are divisble by 2 is %d\n\n\"Press enter to go next question\"", sum_of_selected_no(tda));
        getchar();
        //clrscr();

        // 3 to swap the smallest and biggest elems in a tda and to swap them
        printf("Q3 To swap the smallest and biggest elems in a tda and to swap them	\n");
        int br = 0, bc = 0, sr = 0, sc = 0, big = tda[0][0], small = tda[0][0];
        printf("Orignal 2d array\n");
        print_2darr(tda);
        for (int r = 0; r < 3; r++)
        {
            for (int c = 0; c < 3; c++)
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
        //clrscr();
        

    // // 4 given an array to print the sum of digits of each number in the array
    int sum = 0, arr[5] = {10, 11, 12, 13, 14}, num, i,r;
    printf("Q4 Given an array to print the sum of digits of each number in the array\n\n");
    // printf("\n\n\t=>Sum of all the memebers of 2d array is %d\n\n", sum_of_all(tda));
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
    // //clrscr();
    
        // 5 check the armstrong numbers, mirror numbers in the array
        int arr[3] = {121, 234, 153}, r, check_amstrong_no, check_mirror_no;
        printf("Q5 Check the armstrong numbers, mirror numbers in the array\n\n");
        for (r = 0; r < 3; r++)
        {
            check_amstrong_no = check_amstrong(arr[r]);
            check_mirror_no = check_mirror(arr[r]);
            if (check_amstrong_no == 1)
            {
                printf("\n%d is an amstrong no", arr[r]);
            }
            else
            {
                printf("\n%d is not an amstrong no", arr[r]);
            }
            if (check_mirror_no == 1)
            {
                printf("\n%d is an mirror no", arr[r]);
            }
            else
            {
                printf("\n%d is not an mirror no", arr[r]);
            }
            printf("\n");
        }

        printf("\n\"Press enter to go next question\"");
        getchar();

        // clrscr();

                // 6 to print the grand sum of digits of the numbers in a given array
                printf("\nGrand sum of digits of the numbers in a given array is %d", sum_of_all(tda));

                // 7 to rotate the elements of the array to right or to left!
                printf("Rotate the elements of the array to right or to left!\nSo Rotating array to left\n\nOrignal");
                // arr[5]=[10,11,12,13,14];
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
*/
/*

                // 8 to swap 2 specified  rows of the tda
                printf("8. swap 2 specified  rows of the tda\nOrginal");
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
                */
/*
                //    9 to implement the 15 puzzle
                int puzzle[4][4] = {1, 3, 2, 15, 6, 5, 8, 16, 7, 9, 11, 10, 4, 12, 14, 13}, temp;
                printf("9. Implement the 15 puzzle");
                printf("\n\n");

                for (int r = 0; r < 4; r++)
                {
                    for (int c = 0; c < 4; c++)
                    {
                        if (puzzle[r][c] == 16)
                            printf("%2d", 0);
                        else
                            printf(" %2d ", puzzle[r][c]);
                    }
                    printf("\n");
                }
                printf("\n\n");

                for (int i = 0; i < 17; i++)
                {
                    for (int r = 0; r < 4; r++)
                    {
                        for (int c = 0; c < 4; c++)
                        {
                            if (c != 3)
                            {
                                if (puzzle[r][c] > puzzle[r][c + 1])
                                {
                                    temp = puzzle[r][c];
                                    puzzle[r][c] = puzzle[r][c + 1];
                                    puzzle[r][c + 1] = temp;
                                }
                            }
                            else
                            {

                                if (r == 3)
                                {
                                    if (puzzle[0][0] > puzzle[r][c])
                                    {
                                        temp = puzzle[r][c];
                                        puzzle[r][c] = puzzle[0][0];
                                        puzzle[0][0] = temp;
                                    }
                                }
                                else if (puzzle[r][c] > puzzle[r + 1][0])
                                {
                                    temp = puzzle[r][c];
                                    puzzle[r][c] = puzzle[r + 1][0];
                                    puzzle[r + 1][0] = temp;
                                }
                            }
                        }
                    }
                }

                for (int r = 0; r < 4; r++)
                {
                    for (int c = 0; c < 4; c++)
                    {
                        if (puzzle[r][c] == 16)
                            printf("%2d", 0);
                        else
                            printf(" %2d ", puzzle[r][c]);
                    }
                    printf("\n");
                }
                printf("\n\n");

                //  10 reflect a matrix on bottom line and  left edge separately
                for (int r = 0; r < 3; r++)
                {
                    for (int c = 0; c < 3; c++)
                    {
                        if (c == 0 || r == 2)
                            printf(" %2d ", tda[r][c]);
                        else
                            printf("   ");
                    }
                    printf("\n");
                }
*/
                //  10 program to print the row number of the biggest elem in each row
                int big;
                printf("Biggest no in each row");
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
            
            
}
