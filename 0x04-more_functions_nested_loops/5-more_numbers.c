​#​include​ ​"​main.h​"

/**
*more_numbers - function that prints 10 times the numbers, 0 to 14
*followed by a new line
*
*Return: Always 0 (Success)
*/
void more_numbers(void)
​{
​int​ num, x;

​for​ (x = ​0​; x < ​10​; x++)
{
for​ (num = 0​; num <= 14​; num++)
{
if​ (num > 9​)
{
_putchar​((num / ​10​) + ​48​);
}
​_putchar​((num % ​10​) + 48​);
}
_putchar​(​10​);
}
​}
