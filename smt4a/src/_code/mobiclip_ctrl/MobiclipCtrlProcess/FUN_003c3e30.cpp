#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588038; /* 0x588038 */


void FUN_003c3e30(unsigned char param_1)

{
  if ((*(int *)((unsigned char *)&DAT_00588038 + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&DAT_00588038 + 0x4)) + 0x77) = param_1;
  }
  return;
}

} /* extern "C" */
