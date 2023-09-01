#include "main.h"

/**
 * check_endianness - Checks the endianness of the system.
 * Return: 0 or 1
 */
int get_endianness(void) 
{
unsigned int value = 0x01000000;
char *byte_ptr = (char *)&value;

if (*byte_ptr == 0x01)
{
return (0);
}
else 
{
return (1);
}

}

