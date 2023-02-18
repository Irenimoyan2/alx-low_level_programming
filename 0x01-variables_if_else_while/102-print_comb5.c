#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int  x, y, z, w, aux;
        for (x = '0'; x <= '9'; x++)
        {
                for (y = '0' ; y <= '9'; y++)
                {
                        for (z = x ; z <= '9'; z++)
                        {
                                if (z == x)
                                {
                                        aux = y + 1;
                                }
                                else
                                {
                                        aux = '0';
                                }
                                for (w = aux; w <= '9'; w++)
                                {
                                        putchar(x);
                                        putchar(y);
                                        putchar(' ');
                                        putchar(z);
                                        putchar(w);
                                        if (!(x == '9' && y == '8' && z == '9' && w == '9'))
                                        {
                                                putchar(',');
                                                putchar(' ');
                                        }
                                }
                        }
                }
        }
        putchar('\n');
        return (0);
}
