/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291234` (_code @ 0x291234, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00296d6c(...);
int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00296d6c. */


void FUN_00291234(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  
  if (param_1 == 0) {
    temp_v1 = FUN_00296d6c(param_2,param_3);
    VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    return;
  }
  if (param_1 != 1) {
    if (param_1 == 2) {
      temp_v0 = FUN_00296d6c(0,1);
      if (temp_v0 == '\0') {
        temp_v1 = FUN_00296d6c(param_2,param_3);
        VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorUnsignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
        return;
      }
      temp_v1 = FUN_00296d6c(param_2,param_3);
      VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorUnsignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    return;
  }
  temp_v1 = FUN_00296d6c(param_2,param_3);
  VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}

} /* extern "C" */
