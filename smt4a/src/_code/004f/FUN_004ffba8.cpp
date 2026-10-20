/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ffba8` (_code @ 0x4ffba8, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_004ffba8(int param_1)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = *(unsigned int *)(param_1 + 4);
  if ((temp_v2 & 2) == 0) {
    temp_v0 = param_1 + *(int *)(param_1 + 0x1c) * 0x30;
    temp_v1 = *(int *)(temp_v0 + 0x30);
    if (temp_v1 != 0) {
      if (*(char *)(temp_v0 + 0x44) != '\x02') {
        if (*(char *)(temp_v0 + 0x44) != '\x01') {
LAB_004ffbf4:
          if (*(float *)(temp_v0 + 0x28) < *(float *)(temp_v1 + 8)) {
            return 0;
          }
        }
      }
      else if ((*(unsigned char *)(temp_v1 + 4) & 1) == 0) goto LAB_004ffbf4;
    }
  }
  if (((temp_v2 & 2) == 0) && (temp_v0 = *(int *)(param_1 + 0x90), temp_v0 != 0)) {
    if (*(char *)(param_1 + 0xa4) != '\x02') {
      if (*(char *)(param_1 + 0xa4) != '\x01') {
        if (*(float *)(param_1 + 0x88) < *(float *)(temp_v0 + 8)) {
          return 0;
        }
      }
    }
    else if ((*(unsigned char *)(temp_v0 + 4) & 1) == 0) {
      if (*(float *)(param_1 + 0x88) < *(float *)(temp_v0 + 8)) {
        return 0;
      }
    }
  }
  if (((temp_v2 & 2) == 0) && (temp_v0 = *(int *)(param_1 + 0xc0), temp_v0 != 0)) {
    if (*(char *)(param_1 + 0xd4) != '\x02') {
      if (*(char *)(param_1 + 0xd4) == '\x01') {
        return 1;
      }
    }
    else if ((*(unsigned char *)(temp_v0 + 4) & 1) != 0) {
      return 1;
    }
    if (*(float *)(param_1 + 0xb8) < *(float *)(temp_v0 + 8)) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
