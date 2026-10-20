#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044ea58; /* 0x44ea58 */


void FUN_00298d50(unsigned int param_1)

{
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0044ea58 + 0x4)) + 0x80) = param_1;
  return;
}

} /* extern "C" */
