#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
   string word = get_string("Kelime: ");

   int x = strlen(word);

   printf("%i\n", x);
}
