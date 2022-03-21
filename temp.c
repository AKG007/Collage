#include <stdio.h>
#include <conio.h>

int sum_of_selected_no(int arr[3][3]) // 1 to sum up the selected members of the 2 Dimensional Array (TDA)
{
    int total = 0, r, c;
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
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
    int total = 0, r, c;
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
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

void print_2darr(int arr[3][3])
{
    int r, c;
    printf("\n\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
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
    int br = 0, bc = 0, sr = 0, sc = 0, big = tda[0][0], small = tda[0][0], r, c, i, num, check;
    int puzzle[4][4] = {1, 3, 2, 15, 6, 5, 8, 16, 7, 9, 11, 10, 4, 12, 14, 13}, temp;
    clrscr();
    // 1 to sum up the selected members of the 2 Dimensional Array (TDA)
    printf("Made an array 3x3");
    print_2darr(tda);
    printf("\n\nQ1 To sum up the selected members of the 2 Dimensional Array (TDA)");
    printf("\n\t=>Sum of selected no of array which are divisble by 2 is %d\n\n\"Press enter to go next question\"", sum_of_selected_no(tda));
    getch();
    clrscr();

    // 3 to swap the smallest and biggest elems in a tda and to swap them
    printf("Q3 To swap the smallest and biggest elems in a tda and to swap them	\n");
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
    getch();
    clrscr();

    // 4 given an array to print the sum of digits of each number in the array
    printf("Q4 Given an array to print the sum of digits of each number in the array");
    printf("\n\n\t=>Sum of all the memebers of 2d array is %d\n\n", sum_of_all(tda));
    printf("\"Press enter to go next question\"");
    getch();

    clrscr();

    // 5 check the armstrong numbers, mirror numbers in the array
    printf("Q5 Check the armstrong numbers, mirror numbers in the array\n\n");
    printf("Enter the numbers to check is it amstrong no or not:\nnum: ");
    scanf("%d", &num);
    check = check_amstrong(num);
    if (check == 1)
    {
        printf("Entered no %d is an amstrong no", num);
    }
    else
    {
        printf("Entered no %d is not an amstrong no", num);
    }
    printf("\nMirror numbers in the array...\n\n");
    tda[0][0] = num;
    print_2darr(tda);
    printf("\"Press enter to go next question\"");
    getch();
    clrscr();

    // 6 to print the grand sum of digits of the numbers in a given array
    printf("Q6 To print the grand sum of digits of the numbers in a given array\n");
    printf("\nGrand sum of digits of the numbers in a given array is %d", sum_of_all(tda));
    printf("\n\n\"Press enter to go next question\"");
    getch();
    clrscr();

    // 7 to rotate the elements of the array to right or to left!
    printf("Q7 to rotate the elements of the array to right or to left!\n\n");
    printf("rotate the elements of the array to right or to left!\nOrignal");
    print_2darr(tda);
    printf("After Rotate\n\n");
    for (r = 2; r >= 0; r--)
    {
        for (c = 0; c < 3; c++)
        {
            printf(" %d ", tda[c][r]);
        }
        printf("\n");
    }
    printf("\n\"Press enter to go next question\"");
    getch();
    clrscr();

    // 8 to swap 2 specified  rows of the tda
    printf("Q8 To swap 2 specified  rows of the tda\n\n");
    printf("swap 2 specified  rows of the tda\n\nOrginal");
    print_2darr(tda);
    printf("After Swap\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf(" %d ", tda[2 - r][c]);
        }
        printf("\n");
    }
    printf("\n\"Press enter to go next question\"");
    getch();
    clrscr();

    //    9 to implement the 15 puzzle
    printf("Q9. To implement the 15 puzzle");
    printf("\n");
    printf("Make an puzzle array\n\n");
    for (r = 0; r < 4; r++)
    {
        for (c = 0; c < 4; c++)
        {
            if (puzzle[r][c] == 16)
                printf("%2d", 0);
            else
                printf(" %2d ", puzzle[r][c]);
        }
        printf("\n");
    }
    printf("\n\n");

    for (i = 0; i < 17; i++)
    {
        for (r = 0; r < 4; r++)
        {
            for (c = 0; c < 4; c++)
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
    printf("After sorting the puzzle\n\n");
    for (r = 0; r < 4; r++)
    {
        for (c = 0; c < 4; c++)
        {
            if (puzzle[r][c] == 16)
                printf("%2d", 0);
            else
                printf(" %2d ", puzzle[r][c]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("\"Press enter to go next question\"");
    getch();
    clrscr();

    //  10 reflect a matrix on bottom line and  left edge separately
    printf("Q10 Reflect a matrix on bottom line and  left edge separately\n\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (c == 0 || r == 2)
                printf(" %2d ", tda[r][c]);
            else
                printf("   ");
        }
        printf("\n");
    }
    printf("\n\"Press enter to go next question\"");
    getch();
    clrscr();

    //  11 program to print the row number of the biggest elem in each row
    printf("Q11 Program to print the row number of the biggest elem in each row\n\n");
    printf("Biggest no in each row\n\n");
    for (r = 0; r < 3; r++)
    {
        big = tda[r][0];
        for (c = 0; c < 3; c++)
        {
            if (tda[r][c] > big)
            {
                big = tda[r][c];
            }
        }
        printf("\nIn %d-row row %2d", r + 1, big);
    }
    printf("\n\"Press enter to exit\"");
    getch();
    clrscr();
}
