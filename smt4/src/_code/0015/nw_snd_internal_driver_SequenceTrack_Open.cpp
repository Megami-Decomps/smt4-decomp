/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_SequenceTrack_Open` (_code @ 0x15c50c, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0015c50c_arg0 fn_0015c50c_arg0;
struct fn_0015c50c_arg0 {
    unsigned char pad_0x0[0x5];
    undefined1 field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x3a];
    undefined1 field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x3];
    undefined4 field_0x44; /* +0x44 */
    unsigned char pad_0x48[0x2];
    undefined1 field_0x4a; /* +0x4a */
};


void nw_snd_internal_driver_SequenceTrack_Open(fn_0015c50c_arg0 *param_1)

{
  param_1->field_0x4a = 0;
  param_1->field_0x40 = 0;
  param_1->field_0x44 = 0;
  param_1->field_0x5 = 1;
  return;
}

} /* extern "C" */
