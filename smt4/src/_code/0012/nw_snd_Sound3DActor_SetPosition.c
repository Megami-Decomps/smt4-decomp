/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_Sound3DActor_SetPosition` (_code @ 0x120ef4, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00120ef4_arg0 fn_00120ef4_arg0;
struct fn_00120ef4_arg0 {
    unsigned char pad_0x0[0x68];
    float field_0x68; /* +0x68 */
    float field_0x6c; /* +0x6c */
    float field_0x70; /* +0x70 */
    float field_0x74; /* +0x74 */
    float field_0x78; /* +0x78 */
    float field_0x7c; /* +0x7c */
    byte field_0x80; /* +0x80 */
};


void nw_snd_Sound3DActor_SetPosition(fn_00120ef4_arg0 *param_1,float *param_2)

{
  float temp_v0;
  float temp_v1;
  
  if (param_1->field_0x80 == 0) {
    param_1->field_0x74 = *param_2 - param_1->field_0x68;
    param_1->field_0x78 = param_2[1] - param_1->field_0x6c;
    param_1->field_0x7c = param_2[2] - param_1->field_0x70;
  }
  temp_v0 = *param_2;
  temp_v1 = param_2[1];
  param_1->field_0x70 = param_2[2];
  param_1->field_0x68 = temp_v0;
  param_1->field_0x6c = temp_v1;
  param_1->field_0x80 = 0;
  return;
}
