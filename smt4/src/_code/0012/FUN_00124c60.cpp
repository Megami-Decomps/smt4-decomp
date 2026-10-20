/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124c60` (_code @ 0x124c60, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be5a4(unsigned int, unsigned int, int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(unsigned int, int);

extern unsigned int DAT_00464d54; /* 0x464d54 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_002be5a4. */


void FUN_00124c60(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float in_s0;
  
  VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = *(int *)(param_1 + 0x54) != 0;
  temp_v0 = '\0';
  if (temp_v2) {
    temp_v0 = *(char *)(param_1 + 0x5c);
  }
  if (temp_v2 && temp_v0 != '\0') {
    if (in_s0 == 0.0f) {
      temp_v1 = 0;
    }
    else if (in_s0 == 1.0f) {
      temp_v1 = 0xff;
    }
    else {
      temp_v1 = VectorFloatToUnsigned(in_s0 * 255.0f,3);
    }
    FUN_002be5a4(*(unsigned int *)(param_1 + 0x50),DAT_00464d54 | temp_v1,param_1 + 0x5c);
  }
  return;
}

} /* extern "C" */
