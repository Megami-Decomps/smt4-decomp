#include "romwright_types.h"

extern "C" {

extern int FUN_003e46f4(unsigned int);


void FUN_003f01a4(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *p;
  temp_v0 = FUN_003e46f4(0x8c);
  p = (unsigned int *)(param_1 + 0x4d74);
  *p = (temp_v0 != 0) ? 2 : 3;
  return;
}

} /* extern "C" */
