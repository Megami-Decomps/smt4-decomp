/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a83f8` (_code @ 0x4a83f8, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_004a83f8(unsigned short *param_1)

{
  int temp_v0;
  int temp_v1;
  
  *(unsigned char *)(param_1 + 0x5002) = 0xff;
  *param_1 = 0;
  param_1[0x5003] = 0x500;
  param_1[0x5004] = 0;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 + 1;
    param_1[temp_v0 * 0x10 + 2] = 0;
    *(unsigned char *)(param_1 + temp_v0 * 0x10 + 3) = 0;
    param_1[temp_v0 * 0x10 + 8] = 0;
    *(unsigned char *)((int)param_1 + temp_v0 * 0x20 + 7) = 0;
    *(unsigned char *)(param_1 + temp_v0 * 0x10 + 4) = 0;
    param_1[temp_v0 * 0x10 + 5] = 0;
    param_1[temp_v0 * 0x10 + 10] = 0;
    param_1[temp_v0 * 0x10 + 0xc] = 0;
    *(unsigned int *)(param_1 + temp_v0 * 0x10 + 0x10) = 0;
    temp_v0 = temp_v1;
  } while (temp_v1 < 0x500);
  return;
}

} /* extern "C" */
