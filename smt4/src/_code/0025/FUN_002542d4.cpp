#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044de98;


void FUN_002542d4(int param_1,unsigned int param_2)

{
  unsigned int *q = *(unsigned int **)((unsigned char *)&DAT_0044de98 + 0x20);
  q[param_1 + 0x36] = param_2;
  return;
}

} /* extern "C" */
