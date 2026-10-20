/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001536e4` (_code @ 0x1536e4, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(int);
int FUN_00169b30(int);
int VectorSignedToFloat(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_00169b30. */


void FUN_001536e4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  FUN_00163aa4(param_1 + 0xe8c);
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + 0x1078 + temp_v1 * 0x14;
    temp_v2 = *(int *)(temp_v0 + 400);
    temp_v3 = *(int *)(temp_v0 + 0x184);
    temp_v5 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x180),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = temp_v5 * 0.01f;
    if (temp_v2 < temp_v3) {
      temp_v5 = (temp_v5 / temp_v6) * temp_v7;
    }
    else {
      temp_v4 = temp_v3 + *(int *)(temp_v0 + 0x188);
      if (temp_v4 <= temp_v2) {
        if (temp_v4 + temp_v3 <= temp_v2) {
          FUN_00169b30(param_1);
          return;
        }
        temp_v7 = (float)VectorSignedToFloat(temp_v2 - (temp_v3 + *(int *)(temp_v0 + 0x188)),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = temp_v5 - (temp_v5 / temp_v6) * temp_v7;
      }
    }
    temp_v1 = temp_v1 + 1;
    *(float *)(temp_v0 + 0x18c) = temp_v5;
    *(int *)(temp_v0 + 400) = temp_v2 + 1;
  } while (temp_v1 < 0x18);
  return;
}

} /* extern "C" */
