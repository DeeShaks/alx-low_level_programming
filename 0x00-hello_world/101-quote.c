#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point of c language code.
 *
 * Description: prints without using printf af puts function.
 * Return: Always return (0)
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
return (1);
}
