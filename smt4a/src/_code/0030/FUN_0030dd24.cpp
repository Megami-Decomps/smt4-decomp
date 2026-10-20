/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030dd24` (_code @ 0x30dd24, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0030dd24(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 * 4;
    temp_v0 = temp_v0 + 1;
    *(unsigned short *)(temp_v1 + param_1 + 0x94) = 0;
  } while (temp_v0 < 0x11e);
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 * 4;
    temp_v0 = temp_v0 + 1;
    *(unsigned short *)(temp_v1 + param_1 + 0x988) = 0;
  } while (temp_v0 < 0x1e);
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 * 4;
    temp_v0 = temp_v0 + 1;
    *(unsigned short *)(temp_v1 + param_1 + 0xa7c) = 0;
  } while (temp_v0 < 0x13);
  *(unsigned short *)(param_1 + 0x494) = 1;
  *(unsigned int *)(param_1 + 0x16ac) = 0;
  *(unsigned int *)(param_1 + 0x16a8) = 0;
  *(unsigned int *)(param_1 + 0x16b0) = 0;
  *(unsigned int *)(param_1 + 0x16a0) = 0;
  return;
}

} /* extern "C" */
