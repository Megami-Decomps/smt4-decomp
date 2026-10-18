/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291060` (_code @ 0x291060, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_8_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00291008. */


void FUN_00291060(int param_1,int *param_2,int *param_3,int *param_4,unsigned int *param_5,
                 float *param_6,unsigned int *param_7,unsigned int *param_8)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  
  if (*param_3 < 4) {
    temp_v0 = *param_2;
    *param_2 = temp_v0 + 1;
    if (temp_v0 + 1 <= *param_4) {
      FUN_00291008(param_5);
      return;
    }
    *param_2 = 0;
    *param_6 = 0.0f;
    *param_5 = 0;
    *param_8 = 0;
    temp_v1 = *param_3;
    temp_v0 = 1;
    temp_v2 = SBORROW4(temp_v1,3);
    if (temp_v1 < 3) {
      temp_v2 = SBORROW4(temp_v1 + 1,4);
    }
    if (temp_v1 - 3 < 0 != temp_v2) {
      while (temp_v1 = *(int *)(param_1 + (*param_3 + temp_v0) * 0x18 + 0x48) -
                     *(int *)(param_1 + *param_3 * 0x18 + 0x48), *param_4 = temp_v1, temp_v1 < 1) {
        temp_v0 = temp_v0 + 1;
        if (*param_3 + temp_v0 >= 4) {
          return;
        }
      }
      temp_v1 = param_1 + *param_3 * 0x18;
      temp_v3 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v1 + 0x44),(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      temp_v5 = (float)VectorSignedToFloat(*(int *)(param_1 + (*param_3 + temp_v0) * 0x18 + 0x48) -
                                         *(int *)(temp_v1 + 0x48),(unsigned char)(in_fpscr >> 0x16) & 3);
      *param_6 = temp_v3 / temp_v5;
      temp_v4 = VectorSignedToFloat(*(unsigned int *)(param_1 + *param_3 * 0x18 + 0x44),
                                  (unsigned char)(in_fpscr >> 0x16) & 3);
      *param_7 = temp_v4;
      *param_3 = *param_3 + temp_v0;
    }
  }
  return;
}
