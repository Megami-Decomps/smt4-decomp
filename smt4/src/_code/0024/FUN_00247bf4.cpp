/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00247bf4` (_code @ 0x247bf4, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_002c08f0(void);


void FUN_00247bf4(unsigned int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  float temp_v1;
  
  temp_v0 = FUN_002c08f0();
  if (param_3 != 0) {
    if (param_2 != 0) {
      *(unsigned int *)(temp_v0 + 0x24) = 0x3f800000;
      temp_v1 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(temp_v0 + 0x28) = -1.0f / temp_v1;
      return;
    }
    *(unsigned int *)(temp_v0 + 0x24) = 0;
  }
  else {
    if (param_2 != 0) {
      *(unsigned int *)(temp_v0 + 0x24) = 0;
      temp_v1 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(temp_v0 + 0x28) = 1.0f / temp_v1;
      return;
    }
    *(unsigned int *)(temp_v0 + 0x24) = 0x3f800000;
  }
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  return;
}

} /* extern "C" */
