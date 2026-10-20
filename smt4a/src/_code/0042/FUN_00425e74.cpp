/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00425e74` (_code @ 0x425e74, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00425e74(unsigned int *param_1)

{
  int temp_v0;
  int temp_v1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(unsigned char *)(param_1 + 0xb) = 1;
  param_1[0x56] = 0;
  *(unsigned char *)(param_1 + 0x57) = 2;
  *(unsigned char *)((int)param_1 + 0x15d) = 1;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0xba] = 0;
  param_1[0x121] = 0;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 + 2;
    param_1[temp_v0 + 0xbb] = 0;
    param_1[temp_v0 * 6 + 0x76] = 0;
    param_1[temp_v0 + 0xbc] = 0;
    param_1[temp_v0 * 6 + 0x7c] = 0;
    temp_v0 = temp_v1;
  } while (temp_v1 < 8);
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  return;
}

} /* extern "C" */
