/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_Sound3DCalculator_CalcBiquadFilterValue` (_code @ 0x45c650, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0045c650_arg1 fn_0045c650_arg1;
struct fn_0045c650_arg1 {
    unsigned char pad_0x0[0x4c];
    float field_0x4c; /* +0x4c */
    float field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x4];
    float field_0x58; /* +0x58 */
    float field_0x5c; /* +0x5c */
};


void nw_snd_Sound3DCalculator_CalcBiquadFilterValue
               (unsigned int param_1,fn_0045c650_arg1 *param_2,unsigned int param_3,float *param_4)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  float temp_v0;
  
  temp_v0 = 0.0f;
  if (param_2->field_0x4c < in_s0) {
    temp_v0 = ((in_s0 - param_2->field_0x4c) / param_2->field_0x50) * param_2->field_0x58;
    if (param_2->field_0x5c < temp_v0) {
      temp_v0 = param_2->field_0x5c;
    }
  }
  *param_4 = temp_v0;
  return;
}
