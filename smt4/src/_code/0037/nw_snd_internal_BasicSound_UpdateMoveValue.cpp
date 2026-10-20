/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_BasicSound_UpdateMoveValue` (_code @ 0x3798c0, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_003798c0_arg0 fn_003798c0_arg0;
struct fn_003798c0_arg0 {
    unsigned char pad_0x0[0x6c];
    int field_0x6c; /* +0x6c */
    int field_0x70; /* +0x70 */
    unsigned char pad_0x74[0x34];
    int field_0xa8; /* +0xa8 */
    int field_0xac; /* +0xac */
};


void nw_snd_internal_BasicSound_UpdateMoveValue(fn_003798c0_arg0 *param_1)

{
  if (param_1->field_0x70 < param_1->field_0x6c) {
    param_1->field_0x70 = param_1->field_0x70 + 1;
  }
  if (param_1->field_0xac < param_1->field_0xa8) {
    param_1->field_0xac = param_1->field_0xac + 1;
  }
  return;
}

} /* extern "C" */
