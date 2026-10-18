/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033e104` (_code @ 0x33e104, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_00433d98; /* 0x433d98 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_0033e104(int param_1,unsigned int *param_2)

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
  temp_v1 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(param_1 + 0x10) + 0x18),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
  param_2[1] = ((143.0f - temp_v0) - temp_v1) * in_s0 + 0.0f + DAT_00433d98;
  return;
}
