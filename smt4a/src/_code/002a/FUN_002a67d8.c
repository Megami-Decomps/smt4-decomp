/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a67d8` (_code @ 0x2a67d8, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_002a67d8(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  
  temp_v0 = 1;
  if ('\x02' < *(char *)(param_1 + 0x2e5)) {
    *(unsigned char *)(param_1 + 0x2e5) = 4;
  }
  temp_v1 = (int)*(char *)(param_1 + 0x2e5);
  if (temp_v1 + 1 < 4) {
    do {
      temp_v3 = *(int *)(param_2 + (temp_v1 + temp_v0) * 0x44 + 0x24) -
              *(int *)(param_2 + temp_v1 * 0x44 + 0x24);
      *(int *)(param_1 + 0x324) = temp_v3;
      if (0 < temp_v3) {
        temp_v2 = param_1 + temp_v1 * 0x44;
        temp_v3 = param_1 + (temp_v1 + temp_v0) * 0x44;
        temp_v4 = (float)VectorSignedToFloat(*(int *)(temp_v3 + 0x24) - *(int *)(temp_v2 + 0x24),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(param_1 + 0x228) = (*(float *)(temp_v3 + 0x44) - *(float *)(temp_v2 + 0x44)) / temp_v4;
        *(unsigned int *)(param_1 + 0x254) = *(unsigned int *)(temp_v3 + 0x44);
        *(char *)(param_1 + 0x2e5) = (char)(temp_v1 + temp_v0);
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v1 + temp_v0 < 4);
    return;
  }
  return;
}
