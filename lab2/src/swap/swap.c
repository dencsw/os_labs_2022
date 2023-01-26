#include "swap.h"

void Swap(char *left, char *right)
{
	char tmp_ch = *left;
  *left = *right;
  *right = tmp_ch;
}
