/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dd938` (_code @ 0x1dd938, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_001dd938(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  
  temp_v0 = 1;
  if ('\x02' < *(char *)(param_1 + 0x2e3)) {
    *(unsigned char *)(param_1 + 0x2e3) = 4;
  }
  temp_v1 = (int)*(char *)(param_1 + 0x2e3);
  if (temp_v1 + 1 < 4) {
    do {
      temp_v3 = *(int *)(param_2 + (temp_v1 + temp_v0) * 0x44 + 0x18) -
              *(int *)(param_2 + temp_v1 * 0x44 + 0x18);
      *(int *)(param_1 + 0x31c) = temp_v3;
      if (0 < temp_v3) {
        temp_v2 = param_1 + temp_v1 * 0x44;
        temp_v3 = param_1 + (temp_v1 + temp_v0) * 0x44;
        temp_v4 = (float)VectorSignedToFloat(*(int *)(temp_v3 + 0x18) - *(int *)(temp_v2 + 0x18),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(param_1 + 0x220) = (*(float *)(temp_v3 + 0x38) - *(float *)(temp_v2 + 0x38)) / temp_v4;
        *(unsigned int *)(param_1 + 0x24c) = *(unsigned int *)(temp_v3 + 0x38);
        *(char *)(param_1 + 0x2e3) = (char)(temp_v1 + temp_v0);
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v1 + temp_v0 < 4);
    return;
  }
  return;
}
