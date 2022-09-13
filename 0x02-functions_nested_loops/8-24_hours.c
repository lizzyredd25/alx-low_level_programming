#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int a, r;
a = 0;
while (a < 24)
{
r = 0;
while (r < 60)
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_putchar(':');
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
_putchar('\n');
r++;
}
a++;
}
}
