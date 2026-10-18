/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a78ec` (_code @ 0x1a78ec, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_001af090(int);


unsigned int * FUN_001a78ec(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  float in_s0;
  
  temp_v2 = *param_1;
  if ((temp_v2 & 0x80000000) != 0) {
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == 0.0f) << 0x1e);
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0)) {
      temp_v2 = (temp_v2 & 0x7f000000) >> 0x18;
      if (temp_v2 != 0x18) {
        temp_v1 = (1 << temp_v2) - 1;
        VectorSignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
      }
      else {
        temp_v1 = 0x18;
      }
      temp_v2 = FUN_001af090(temp_v1);
      *param_2 = temp_v2;
    }
    else {
      *param_2 = 0;
    }
  }
  else {
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == 0.0f) << 0x1e);
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0)) {
      temp_v1 = (1 << ((temp_v2 & 0x7f000000) >> 0x18)) - 1;
      VectorSignedToFloat(temp_v1,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v2 = FUN_001af090(temp_v1);
      *param_2 = temp_v2;
    }
    else {
      *param_2 = temp_v2 & 0xffffff;
    }
  }
  param_2[1] = 0xf004e;
  return param_2 + 2;
}
