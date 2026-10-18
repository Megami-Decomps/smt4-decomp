/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158e9c` (_code @ 0x158e9c, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_00158e9c(float *param_1,float param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned int in_fpscr;
  int temp_v2;
  
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(*param_1 == 0.0f) << 0x1e);
  if ((!romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0)) && (param_2 = param_1[4], (unsigned int)param_1[2] <= (unsigned int)param_2)) {
    temp_v2 = (int)(param_1[5] * 128.0f);
    if (temp_v2 < 0x20) {
      param_2 = (float)(int)*(char *)(temp_v2 + 0x41499c);
    }
    else if (temp_v2 < 0x40) {
      param_2 = (float)(int)*(char *)(0x4149dc - temp_v2);
    }
    else {
      if (temp_v2 < 0x60) {
        temp_v1 = *(char *)(temp_v2 + 0x41495c);
      }
      else {
        temp_v1 = *(char *)(0x414a1c - temp_v2);
      }
      param_2 = (float)(int)-temp_v1;
    }
    param_1 = (float *)(unsigned int)*(unsigned char *)(param_1 + 3);
    VectorSignedToFloat(param_2,(unsigned char)(temp_v0 >> 0x16) & 3);
    VectorUnsignedToFloat(param_1,(unsigned char)(temp_v0 >> 0x16) & 3);
  }
  return romwright_piece_4_4(param_2,param_1);
}
