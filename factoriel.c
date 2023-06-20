#include <stdio.h>
#include <string.h>
#include <cs50.h>

int fact(int n)
{
    if(n <= 1 )
       return 1;

    else
    return n * fact(n-1);   

}

int main(void)
{
  int sayi = get_int("Sayi Girin: ");
  fact(sayi);

  printf("%i\n",fact(sayi));
}
