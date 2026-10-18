/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a649c` (_code @ 0x2a649c, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_002c17c0(unsigned char);


void FUN_002a649c(int param_1,int *param_2,int *param_3,float *param_4,unsigned int *param_5)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  
  temp_v0 = *param_2;
  temp_v2 = 1;
  temp_v3 = SBORROW4(temp_v0,3);
  if (temp_v0 < 3) {
    temp_v3 = SBORROW4(temp_v0 + 1,4);
  }
  else {
    *param_2 = 4;
  }
  if (temp_v0 - 3 < 0 != temp_v3) {
    while( 1 ) {
      temp_v0 = *(int *)(param_1 + (*param_2 + temp_v2) * 8 + 4) - *(int *)(param_1 + *param_2 * 8 + 4);
      *param_3 = temp_v0;
      if (0 < temp_v0) break;
      temp_v2 = temp_v2 + 1;
      if (*param_2 + temp_v2 >= 4) {
        return;
      }
    }
    temp_v0 = FUN_002c17c0(*(unsigned char *)(param_1 + *param_2 * 8));
    temp_v1 = FUN_002c17c0(*(unsigned char *)(param_1 + (*param_2 + temp_v2) * 8));
    temp_v4 = (float)VectorSignedToFloat(*(int *)(param_1 + (*param_2 + temp_v2) * 8 + 4) -
                                       *(int *)(param_1 + *param_2 * 8 + 4),
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
    *param_4 = (*(float *)(temp_v1 + 0x20) - *(float *)(temp_v0 + 0x20)) / temp_v4;
    temp_v4 = (float)VectorSignedToFloat(*(int *)(param_1 + (*param_2 + temp_v2) * 8 + 4) -
                                       *(int *)(param_1 + *param_2 * 8 + 4),
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
    param_4[1] = (*(float *)(temp_v1 + 0x24) - *(float *)(temp_v0 + 0x24)) / temp_v4;
    temp_v4 = (float)VectorSignedToFloat(*(int *)(param_1 + (*param_2 + temp_v2) * 8 + 4) -
                                       *(int *)(param_1 + *param_2 * 8 + 4),
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
    param_4[2] = (*(float *)(temp_v1 + 0x28) - *(float *)(temp_v0 + 0x28)) / temp_v4;
    *param_5 = *(unsigned int *)(temp_v1 + 0x20);
    param_5[1] = *(unsigned int *)(temp_v1 + 0x24);
    param_5[2] = *(unsigned int *)(temp_v1 + 0x28);
    *param_2 = *param_2 + temp_v2;
  }
  return;
}
