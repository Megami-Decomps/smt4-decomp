/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_CurveLfo_Update` (_code @ 0x158b54, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00158b54_arg0 fn_00158b54_arg0;
struct fn_00158b54_arg0 {
    unsigned char pad_0x0[0x4];
    float field_0x4; /* +0x4 */
    uint field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    uint field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
};

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void nw_snd_internal_CurveLfo_Update(fn_00158b54_arg0 *param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  float temp_v3;
  
  temp_v0 = param_1->field_0x8;
  temp_v1 = param_1->field_0x10;
  if (temp_v1 < temp_v0) {
    if (temp_v1 + param_2 <= temp_v0) {
      param_1->field_0x10 = temp_v1 + param_2;
      return;
    }
    param_2 = param_2 - (temp_v0 - temp_v1);
    param_1->field_0x10 = temp_v0;
  }
  temp_v2 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = param_1->field_0x14 + param_1->field_0x4 * temp_v2 * 0.001f;
  temp_v3 = (float)VectorSignedToFloat((int)temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  param_1->field_0x14 = temp_v2 - temp_v3;
  return;
}
