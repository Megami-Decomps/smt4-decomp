/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_SetBiquadFilter` (_code @ 0x1574c8, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_001574c8_arg0 fn_001574c8_arg0;
struct fn_001574c8_arg0 {
    unsigned char pad_0x0[0x20];
    ushort field_0x20; /* +0x20 */
    byte field_0x22; /* +0x22 */
    unsigned char pad_0x23[0x19];
    float field_0x3c; /* +0x3c */
};


void nw_snd_internal_driver_Voice_SetBiquadFilter(fn_001574c8_arg0 *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  float in_s0;
  float temp_v2;
  
  temp_v2 = 1.0f;
  if ((in_s0 <= 1.0f) && (temp_v2 = in_s0, in_s0 < 0.0f)) {
    temp_v2 = 0.0f;
  }
  temp_v1 = param_1->field_0x22 == param_2;
  if (!temp_v1) {
    param_1->field_0x22 = (unsigned char)param_2;
  }
  temp_v0 = param_1->field_0x3c == temp_v2;
  if (!temp_v0) {
    param_1->field_0x3c = temp_v2;
    temp_v1 = temp_v0;
  }
  if (!temp_v1) {
    param_1->field_0x20 = param_1->field_0x20 | 0x20;
  }
  return;
}

} /* extern "C" */
