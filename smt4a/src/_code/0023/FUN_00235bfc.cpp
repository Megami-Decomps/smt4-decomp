/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235bfc` (_code @ 0x235bfc, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(unsigned int, int);

extern int DAT_0056fcc0; /* 0x56fcc0 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


void FUN_00235bfc(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4, in_s5; 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int temp_v2;
  unsigned int in_s3;
  unsigned int in_s4;
  unsigned int in_s5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = VectorFloatToUnsigned(in_s0,3);
  temp_v3 = VectorFloatToUnsigned(in_s1,3);
  temp_v2 = VectorFloatToUnsigned(in_s2,3);
  temp_v4 = temp_v4 & 0xff;
  temp_v3 = (temp_v3 & 0xff) << 8;
  temp_v1 = (temp_v2 & 0xff) << 0x10;
  temp_v2 = temp_v3 | (param_2 & 0xff000000) | temp_v4 | temp_v1;
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 == 2) {
        temp_v2 = temp_v3 | temp_v4 | temp_v1 | 0x2000000;
      }
    }
    else {
      temp_v2 = temp_v3 | temp_v4 | temp_v1 | 0x1000000;
    }
  }
  else {
    temp_v2 = temp_v3 | temp_v4 | temp_v1;
  }
  temp_v0 = *(int *)(DAT_0056fcc0 + 4);
  *(unsigned int *)(temp_v0 + 0x184) = 0;
  *(unsigned int *)(temp_v0 + 0x188) = 0x3f800000;
  *(unsigned int *)(temp_v0 + 0x18c) = in_s5;
  *(unsigned int *)(temp_v0 + 0x17c) = in_s3;
  *(unsigned int *)(temp_v0 + 0x180) = in_s4;
  *(unsigned int *)(temp_v0 + 400) = temp_v2;
  return;
}

} /* extern "C" */
