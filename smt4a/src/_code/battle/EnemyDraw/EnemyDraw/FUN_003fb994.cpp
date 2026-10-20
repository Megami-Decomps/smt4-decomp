/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fb994` (_code @ 0x3fb994, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

extern float DAT_00570d5c; /* 0x570d5c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_003fb994(int param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  unsigned int in_fpscr;
  float in_s0;
  float temp_v0;
  float temp_v1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  temp_v0 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(param_1 + 0x10) + 0x14),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(param_1 + 0x10) + 0x1a),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
  param_2[1] = ((143.0f - temp_v0) - temp_v1) * in_s0 + 0.0f + DAT_00570d5c;
  return;
}

} /* extern "C" */
