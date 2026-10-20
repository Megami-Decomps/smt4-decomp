/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221d78` (_code @ 0x221d78, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorUnsignedToFloat(unsigned int, int);

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_00221d78(unsigned int param_1)

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
  DAT_006472e8 = temp_v2 * 0.003921569f;
  DAT_006472dc = temp_v3 * 0.003921569f;
  DAT_006472e0 = temp_v0 * 0.003921569f;
  DAT_006472e4 = temp_v1 * 0.003921569f;
  return;
}

} /* extern "C" */
