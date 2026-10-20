/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034a16c` (_code @ 0x34a16c, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int SBORROW4(int, int);
int VectorSignedToFloat(...);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_0034a16c(int param_1,int *param_2,int *param_3,float *param_4,unsigned int *param_5)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  
  temp_v1 = 1;
  temp_v0 = *param_2;
  temp_v2 = SBORROW4(temp_v0,3);
  if (temp_v0 < 3) {
    temp_v2 = SBORROW4(temp_v0 + 1,4);
  }
  if (temp_v0 - 3 < 0 != temp_v2) {
    while (temp_v0 = *(int *)(param_1 + (*param_2 + temp_v1) * 0x18 + 0x48) -
                   *(int *)(param_1 + *param_2 * 0x18 + 0x48), *param_3 = temp_v0, temp_v0 < 1) {
      temp_v1 = temp_v1 + 1;
      if (*param_2 + temp_v1 >= 4) {
        return;
      }
    }
    temp_v0 = param_1 + *param_2 * 0x18;
    temp_v3 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x44),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = (float)VectorSignedToFloat(*(int *)(param_1 + (*param_2 + temp_v1) * 0x18 + 0x48) -
                                       *(int *)(temp_v0 + 0x48),(unsigned char)(in_fpscr >> 0x16) & 3);
    *param_4 = temp_v3 / temp_v5;
    temp_v4 = VectorSignedToFloat(*(unsigned int *)(param_1 + *param_2 * 0x18 + 0x44),
                                (unsigned char)(in_fpscr >> 0x16) & 3);
    *param_5 = temp_v4;
    *param_2 = *param_2 + temp_v1;
  }
  return;
}

} /* extern "C" */
