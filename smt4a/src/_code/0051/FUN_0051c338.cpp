/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051c338` (_code @ 0x51c338, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


unsigned char * FUN_0051c338(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned char *pbVar1;
  unsigned char *pbVar2;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  
  pbVar1 = *(unsigned char **)(param_1 + 0x20);
  temp_v1 = VectorFloatToUnsigned(in_s0 / *(float *)(param_1 + 0x18),3);
  if (temp_v1 < *pbVar1) {
    return pbVar1;
  }
  pbVar2 = pbVar1 + ((unsigned int)*(unsigned short *)(param_1 + 0xe) * 6 - 6);
  if (temp_v1 < *pbVar2) {
    temp_v2 = (float)VectorSignedToFloat(*(unsigned short *)(param_1 + 0xe) - 1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v0 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * temp_v2 * in_s0,3);
    pbVar2 = pbVar1 + temp_v0 * 6;
    if (*pbVar2 <= temp_v1) {
      do {
        pbVar1 = pbVar2;
        pbVar2 = pbVar1 + 6;
      } while (*pbVar2 <= temp_v1);
      return pbVar1;
    }
    do {
      pbVar2 = pbVar2 + -6;
    } while (temp_v1 < *pbVar2);
  }
  return pbVar2;
}

} /* extern "C" */
