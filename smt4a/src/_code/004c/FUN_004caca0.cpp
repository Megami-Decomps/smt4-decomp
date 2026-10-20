/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004caca0` (_code @ 0x4caca0, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;


void FUN_004caca0(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  temp_v2 = 0;
  if (param_2 == 0) {
    temp_v2 = 4;
  }
  else if (param_2 == 1) {
    temp_v4 = 4;
    temp_v2 = 0x32;
  }
  else if (param_2 == 2) {
    temp_v4 = 0x36;
    temp_v2 = 1;
  }
  else if (param_2 == 3) {
    temp_v4 = 0x43;
    temp_v2 = 0x2a;
  }
  temp_v3 = temp_v2 + temp_v4;
  if ((int)temp_v3 > (int)temp_v4) {
    do {
      temp_v2 = *(int *)(param_1 + 0x1ed4) + temp_v4 * 0x1d0;
      temp_v0 = *(unsigned int *)(temp_v2 + 0x50);
      if (((temp_v0 & 1) != 0 && (temp_v0 & 0x80) != 0) && ((temp_v0 & 2) == 0)) {
        if (*(char *)(temp_v2 + 0xa0) != '\0') {
          *(unsigned int *)(temp_v2 + 0x48) = 6;
        }
        else {
          *(unsigned int *)(temp_v2 + 0x48) = 5;
        }
        temp_v0 = *(unsigned int *)(temp_v2 + 0x58) & 0xfffffff9;
        temp_v0 = temp_v0 | 1;
        *(unsigned int *)(temp_v2 + 0x58) = temp_v0;
        if (param_3 != 0) {
          temp_v0 = temp_v0 | 8;
        }
        *(unsigned int *)(temp_v2 + 0x4c) = 0;
        if (param_3 != 0) {
          *(unsigned int *)(temp_v2 + 0x58) = temp_v0;
        }
        if (param_4 == 0) {
          *(unsigned short *)(temp_v2 + 0x60) = *(unsigned short *)(temp_v2 + 0x60) | 0x200;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v3 > (int)temp_v4);
  }
  return;
}

} /* extern "C" */
