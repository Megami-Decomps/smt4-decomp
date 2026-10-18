/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fe298` (_code @ 0x3fe298, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003fe298(unsigned short *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned short temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = (param_3 << 0x18) | (((param_3 & 0xffff) >> 8) << 0x10) |
          (((param_3 & 0xffffff) >> 0x10) << 8) | (param_3 >> 0x18);
  switch(param_2) {
  case 0:
    *(unsigned int *)(param_1 + 0x12) = temp_v1;
    *param_1 = *param_1 | 0x400;
    return;
  case 1:
    *(unsigned int *)(param_1 + 0x14) = temp_v1;
    *param_1 = *param_1 | 0x400;
    return;
  case 2:
    *(unsigned int *)(param_1 + 0x16) = temp_v1;
    *param_1 = *param_1 | 0x400;
    return;
  case 3:
    *(unsigned int *)(param_1 + 0x18) = temp_v1;
    temp_v0 = *param_1 | 0x400;
    break;
  case 4:
    *(unsigned int *)(param_1 + 0x1a) = temp_v1;
    temp_v0 = *param_1 | 0x400;
    break;
  case 5:
    *(unsigned int *)(param_1 + 0x1c) = temp_v1;
    temp_v0 = *param_1 | 0x400;
    break;
  case 6:
    *(unsigned int *)(param_1 + 0x1e) = temp_v1;
    temp_v0 = *param_1 | 0x200;
    break;
  case 7:
    *(unsigned int *)(param_1 + 0x20) = temp_v1;
    temp_v0 = *param_1 | 0x200;
    break;
  case 8:
    *(unsigned int *)(param_1 + 0x22) = temp_v1;
    temp_v0 = *param_1 | 0x200;
    break;
  default:
    return;
  }
  *param_1 = temp_v0;
  return;
}
