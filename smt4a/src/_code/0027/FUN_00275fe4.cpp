#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588e3c;


void FUN_00275fe4(int param_1,unsigned int param_2)

{
  unsigned int *q = *(unsigned int **)((unsigned char *)&DAT_00588e3c + 0x20);
  q[param_1 + 0x36] = param_2;
  return;
}

} /* extern "C" */
