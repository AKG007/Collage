#include <stdio.h>

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

    // 1 to sum up the selected members of the 2 Dimensional Array (TDA)
    printf("\n\n1 .sum of selected no of array which are divisble by 2 is %d\n\n", sum_of_selected_no(tda));

    // 3 to swap the smallest and biggest elems in a tda and to swap them
    int br = 0, bc = 0, sr = 0, sc = 0, big = tda[0][0], small = tda[0][0];
    printf("3. orignal 2d array\n");
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
    printf("\narray after swap\n");
    print_2darr(tda);

    // 4 given an array to print the sum of digits of each number in the array
    printf("\n\n4. sum of all the memebers of 2d array is %d\n\n", sum_of_all(tda));

    // 5 check the armstrong numbers, mirror numbers in the array
    int num;
    printf("Enter the numbers to check is it amstrong no or not:\nnum: ");
    scanf("%d", &num);
    int check = check_amstrong(num);
    if (check == 1)
    {
        printf("Entered no %d is an amstrong no", num);
    }
    else
    {
        printf("Entered no %d is not an amstrong no", num);
    }
    printf("\nmirror numbers in the array...\n\n");
    tda[0][0] = num;
    print_2darr(tda);

    // 6 to print the grand sum of digits of the numbers in a given array
    printf("\nGrand sum of digits of the numbers in a given array is %d", sum_of_all(tda));

    // 7 to rotate the elements of the array to right or to left!
    int temp;
    printf("rotate the elements of the array to right or to left!\nOrignal");
    print_2darr(tda);
    printf("After Rotate\n\n");
    for (int r = 2; r >=0; r--)
    {
        for (int c = 0; c <3; c++)
        {
            printf(" %d ",tda[c][r]);
        }
        printf("\n");
    }
    // print_2darr(tda);
}