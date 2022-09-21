/**
 * _strcat - function that cancatenates two strings.
 *
 * @dest : pointer to destination input
 *
 * Return: pointer to source input
*/
char *strcat(char *dest, char *src)
{
	int c, c2;
	c = 0;
	/*find the size of dest array*/
	while (dest[c])
		c++;
	/*iterate through src array value without the null byte*/
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];
	return(dest);
}
