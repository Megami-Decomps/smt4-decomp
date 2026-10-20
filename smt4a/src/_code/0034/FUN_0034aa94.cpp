#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


void FUN_0034aa94(int param_1,unsigned int param_2)

{
  if (param_1 == 0) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x205c) = param_2;
  }
  else if (param_1 == 1) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2060) = param_2;
  }
  else if (param_1 == 2) {
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2064) = param_2;
  }
  return;
}

} /* extern "C" */
