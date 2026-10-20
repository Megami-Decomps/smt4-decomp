#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


void FUN_003343c0(unsigned char param_1)

{
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x20b0) = param_1;
  return;
}

} /* extern "C" */
