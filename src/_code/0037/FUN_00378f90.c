/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00378f90` (_code @ 0x378f90, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004216a8; /* 0x4216a8 */


void FUN_00378f90(unsigned int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xfa;
  *param_1 = (unsigned int)&DAT_004216a8;
  param_1[4] = 0x3ecccccd;
  param_1[5] = 0x3f000000;
  *(unsigned char *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x10000;
  param_1[0x15] = 0;
  *(unsigned char *)((int)param_1 + 0x5d) = 4;
  *(unsigned char *)((int)param_1 + 0x5e) = 0;
  temp_v1 = (unsigned int)*(unsigned char *)((int)param_1 + 0x5d);
  temp_v0 = 0;
  do {
    temp_v1 = temp_v1 - 1;
    param_1[temp_v0 + 9] = 0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  temp_v1 = (unsigned int)*(unsigned char *)((int)param_1 + 0x5d);
  if (temp_v1 != 0) {
    temp_v0 = 0;
    do {
      temp_v1 = temp_v1 - 1;
      param_1[temp_v0 + 0xd] = 0;
      temp_v0 = temp_v0 + 1;
    } while (temp_v1 != 0);
  }
  return;
}
