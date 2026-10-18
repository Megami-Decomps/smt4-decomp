/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e490` (_code @ 0x22e490, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0022e490(unsigned short *param_1)

{
  int temp_v0;
  int temp_v1;
  
  *(unsigned char *)(param_1 + 0x5002) = 0xff;
  *param_1 = 0;
  param_1[0x5003] = 0x500;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 + 1;
    param_1[temp_v0 * 0x10 + 2] = 0;
    *(unsigned char *)(param_1 + temp_v0 * 0x10 + 3) = 0;
    *(unsigned char *)(param_1 + temp_v0 * 0x10 + 8) = 0;
    *(unsigned char *)((int)param_1 + temp_v0 * 0x20 + 7) = 0;
    *(unsigned char *)(param_1 + temp_v0 * 0x10 + 4) = 0;
    param_1[temp_v0 * 0x10 + 5] = 0;
    param_1[temp_v0 * 0x10 + 9] = 0;
    param_1[temp_v0 * 0x10 + 0xb] = 0;
    *(unsigned int *)(param_1 + temp_v0 * 0x10 + 0x10) = 0;
    temp_v0 = temp_v1;
  } while (temp_v1 < 0x500);
  return;
}
