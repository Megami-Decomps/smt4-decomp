/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bed8` (_code @ 0x31bed8, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00164a9c(unsigned int);
extern int FUN_00203d74(void);
/* Supplied declaration required: FUN_00236038. */


unsigned int FUN_0031bed8(void)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00203d74();
  temp_v3 = temp_v2 != 0;
  temp_v2 = 0;
  if (temp_v3) {
    temp_v2 = temp_v1 - 4;
  }
  if ((temp_v3 && temp_v1 != 4) && temp_v2 < 0 == (temp_v3 && SBORROW4(temp_v1,4))) {
    temp_v1 = 4;
  }
  temp_v2 = FUN_00164a9c(temp_v0);
  if (temp_v1 != 0) {
    *(unsigned int *)(temp_v2 + 0x24) = 0x3f800000;
    temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(temp_v2 + 0x28) = -1.0f / temp_v4;
  }
  else {
    *(unsigned int *)(temp_v2 + 0x24) = 0;
    *(unsigned int *)(temp_v2 + 0x28) = 0;
  }
  return 1;
}
