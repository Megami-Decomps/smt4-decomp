/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad2dc` (_code @ 0x1ad2dc, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_001ad2dc(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  
  temp_v2 = 1;
  temp_v0 = (int)*(char *)(param_1 + 0x2e1);
  if (temp_v0 >= 3) {
    *(unsigned char *)(param_1 + 0x2e1) = 4;
  }
  else if (temp_v0 + 1 < 4) {
    while (temp_v3 = *(int *)(param_2 + (temp_v0 + temp_v2) * 0x44 + 0x10) -
                   *(int *)(param_2 + temp_v0 * 0x44 + 0x10), *(int *)(param_1 + 0x314) = temp_v3,
          temp_v3 < 1) {
      temp_v2 = temp_v2 + 1;
      if (temp_v0 + temp_v2 >= 4) {
        return;
      }
    }
    temp_v1 = param_1 + temp_v0 * 0x44;
    temp_v3 = param_1 + (temp_v2 + temp_v0) * 0x44;
    temp_v6 = (float)VectorSignedToFloat(*(int *)(temp_v3 + 0x10) - *(int *)(temp_v1 + 0x10),
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (float)VectorSignedToFloat((unsigned int)*(unsigned char *)(temp_v3 + 0x34) - (unsigned int)*(unsigned char *)(temp_v1 + 0x34)
                                       ,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(param_1 + 0x210) = temp_v4 / temp_v6;
    temp_v6 = (float)VectorSignedToFloat(*(int *)(temp_v3 + 0x10) - *(int *)(temp_v1 + 0x10),
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (float)VectorSignedToFloat((unsigned int)*(unsigned char *)(temp_v3 + 0x35) - (unsigned int)*(unsigned char *)(temp_v1 + 0x35)
                                       ,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(param_1 + 0x214) = temp_v4 / temp_v6;
    temp_v4 = (float)VectorSignedToFloat(*(int *)(temp_v3 + 0x10) - *(int *)(temp_v1 + 0x10),
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorSignedToFloat((unsigned int)*(unsigned char *)(temp_v3 + 0x36) - (unsigned int)*(unsigned char *)(temp_v1 + 0x36)
                                       ,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(param_1 + 0x218) = temp_v6 / temp_v4;
    temp_v5 = VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v3 + 0x34),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(param_1 + 0x23c) = temp_v5;
    temp_v5 = VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v3 + 0x35),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(param_1 + 0x240) = temp_v5;
    temp_v5 = VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v3 + 0x36),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(param_1 + 0x244) = temp_v5;
    *(char *)(param_1 + 0x2e1) = (char)(temp_v2 + temp_v0);
  }
  return;
}
