/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00156f34` (_code @ 0x156f34, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00557b30; /* 0x557b30 */


void FUN_00156f34(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_00557b30;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(unsigned char *)(param_1 + 8) = 0;
  *(unsigned char *)((int)param_1 + 0x21) = 0;
  *(unsigned char *)((int)param_1 + 0x22) = 0;
  *(unsigned char *)((int)param_1 + 0x23) = 0x66;
  param_1[9] = 0x40400000;
  param_1[10] = 0x469c4000;
  param_1[0xb] = 0x3f28e45b;
  param_1[0xc] = 0x3fd9999a;
  param_1[0xd] = 0x3fd55555;
  param_1[0xe] = 0x437a0000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(unsigned char *)(param_1 + 0x31) = 1;
  return;
}

} /* extern "C" */
