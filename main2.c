#include <stdio.h>
// includes string functions
#include <string.h>

// Function removes the repeating same code many time
// Syntax of Function
// data_type func_name(parameter_type parametername){
//     return value_of_type_data_type;
// }

// Function to add 2 numbers
int sum(int a, int b)
{
    return a + b;
}
float average(float a, float b)
{
    return (a + b) / 2;
}

// A structure is a user defined data type in which we can create a data type that can be used to group items of possibly different types into a single type.
struct Books
{
    char name[50];
    char author[50];
    int price;
} book;

void printStruct(struct Books bk)
{
    printf("Book name is %s\n", bk.name);
    printf("Author name is %s\n", bk.author);
    printf("Book Price is %d\n", bk.price);
}

int main()
{

    // An array is defined as the collection of similar type of data items
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 70, 8, 9};
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the values for index %d \n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value for index %d is %d\n", i, arr[i]);
    }
    printf("%d", arr[7]);

    // Pointers is a variable which stores the address of another variable
    int a = 98;
    printf("%d\n", a);
    int *ptr = NULL; // Nothing in it
    if (!ptr)
    {
        printf("pointer is not null");
    }
    ptr = &a;   // ptr stores address of a
    *ptr = 188; // change the value to which pointer is pointing
    printf("%d", a);

    // Strings is a sequence of characters terminated with a null character \0 .
    char name[3] = {'m', 'y', '\0'};
    char str1[65], str2[98], str3[32];
    strcpy(str1, "Ash");
    strcpy(str2, "Ron");
    strcat(str1, str2);
    printf("%d", strcmp(str1, str2));

    // Structures
    struct Books bk1, bk2;
    strcpy(bk1.name, "C Programming");
    strcpy(bk1.author, "Dennis");
    bk1.price = 78;
    printStruct(bk1);

    return 0;
}
