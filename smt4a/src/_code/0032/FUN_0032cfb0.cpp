#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f0c4;


int FUN_0032cfb0(int param_1)

{
  int *p = (int *)(*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4));
  p = p + param_1 * 16;
  return (int)p + 0x5f0;
}

} /* extern "C" */
