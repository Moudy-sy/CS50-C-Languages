#include <stdio.h>
#include <cs50.h>

int get_size(void)
void print_grid(int size)
int main(void)

{
    // Get size of grid
    // int n;
    // do 
    // {
    //     n = get_int("Size: ");
    // }
    // while (n < 1)

    // for(int i = 0; i < n; i++)
    // {
    //   for(int x = 0; x < n; x++)
    //   {
    //      printf("#");
    //   }
    //   printf("\n");
    // }
    int n = get_size();
    print_grid(n);
}

{
    int n;
    do 
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

{
    for(int i = 0; i < size; i++)
    {
      for(int x = 0; x < size; x++)
      {
         printf("#");
      }
      printf("\n");
    }
}