#include "include.h"

void test(void)
{
  static uint8_t i=0;
  i++;
  if(i<5)
  {
    i=i+10;
  }
}