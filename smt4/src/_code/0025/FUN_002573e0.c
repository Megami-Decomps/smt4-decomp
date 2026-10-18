/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002573e0` (_code @ 0x2573e0, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_002573e0(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v3 = (float)VectorUnsignedToFloat(param_1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = (float)VectorUnsignedToFloat((param_1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (float)VectorUnsignedToFloat((param_1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (float)VectorUnsignedToFloat(param_1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004ea928 = temp_v2 * 0.003921569f;
  DAT_004ea91c = temp_v3 * 0.003921569f;
  DAT_004ea920 = temp_v0 * 0.003921569f;
  DAT_004ea924 = temp_v1 * 0.003921569f;
  return;
}
