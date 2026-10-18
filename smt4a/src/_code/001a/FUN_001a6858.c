/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a6858` (_code @ 0x1a6858, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


int FUN_001a6858(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int unaff_r5;
  unsigned int temp_v2;
  
  temp_v2 = *(unsigned int *)(param_1 + 0x39c);
  if ((int)temp_v2 < 1) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = temp_v2 & 1;
    if (temp_v0 != 0) {
      unaff_r5 = *(int *)(param_1 + 0x3a0);
    }
    temp_v1 = 0;
    if (temp_v0 != 0) {
      do {
        if (*(unsigned short *)(unaff_r5 + temp_v1 * 0x28 + 0x20) == param_2) {
          return unaff_r5 + temp_v1 * 0x28;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)temp_v0);
    }
  }
  if ((int)temp_v0 < (int)temp_v2) {
    temp_v1 = *(int *)(param_1 + 0x3a0);
    do {
      if (*(unsigned short *)(temp_v1 + temp_v0 * 0x28 + 0x20) == param_2) {
        return temp_v1 + temp_v0 * 0x28;
      }
      if (*(unsigned short *)(temp_v1 + temp_v0 * 0x28 + 0x48) == param_2) {
        return temp_v1 + temp_v0 * 0x28 + 0x28;
      }
      temp_v0 = temp_v0 + 2;
    } while ((int)temp_v0 < (int)temp_v2);
  }
  return 0;
}
