/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d230` (_code @ 0x23d230, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00490e46; /* 0x490e46 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


unsigned int * FUN_0023d230(unsigned int *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v3 = (float)VectorUnsignedToFloat(param_2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = (float)VectorUnsignedToFloat((param_2 & 0xff0000) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (float)VectorUnsignedToFloat((param_2 & 0xff00) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (float)VectorUnsignedToFloat(param_2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  *param_1 = DAT_00490e46 | 0x80000000;
  param_1[1] = 0x804f02c0;
  param_1[2] = (unsigned int)(temp_v2 * 0.003921569f);
  param_1[3] = (unsigned int)(temp_v1 * 0.003921569f);
  param_1[4] = (unsigned int)(temp_v0 * 0.003921569f);
  param_1[5] = (unsigned int)(temp_v3 * 0.003921569f);
  return param_1 + 6;
}
