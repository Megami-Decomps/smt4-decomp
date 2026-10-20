/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297f00` (_code @ 0x297f00, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(unsigned int, int);

extern int DAT_00587f0c; /* 0x587f0c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_00297f00(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  unsigned int temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  
  temp_v0 = DAT_00587f0c;
  temp_v3 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned char *)(DAT_00587f0c + 0x40) = 1;
  *(int *)(temp_v0 + 0x44) = (int)(temp_v3 * 0.5f);
  *(unsigned int *)(temp_v0 + 0x48) = 0;
  *(unsigned int *)(temp_v0 + 0x50) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x54) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x58) = 0;
  *(unsigned int *)(temp_v0 + 0x5c) = 0;
  *(unsigned int *)(temp_v0 + 0x4c) = 0;
  *(unsigned char *)(temp_v0 + 0x60) = 0;
  return;
}

} /* extern "C" */
