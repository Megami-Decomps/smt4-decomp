/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_SequenceTrack_UpdateChannelLength` (_code @ 0x37d998, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_Channel_NoteOff(...);
int nw_snd_internal_driver_Channel_UpdateSweep(...);

typedef struct fn_0037d998_arg0 fn_0037d998_arg0;
typedef struct fn_0037d998_arg0_pc4 fn_0037d998_arg0_pc4;
struct fn_0037d998_arg0 {
    unsigned char pad_0x0[0x5];
    byte field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x46];
    byte field_0x4c; /* +0x4c */
    unsigned char pad_0x4d[0x43];
    unsigned char field_0x90; /* +0x90 */
    unsigned char pad_0x91[0x33];
    fn_0037d998_arg0_pc4 *field_0xc4; /* +0xc4 */
};
struct fn_0037d998_arg0_pc4 {
    unsigned char pad_0x0[0x5];
    unsigned char field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x46];
    unsigned char field_0x4c; /* +0x4c */
    unsigned char pad_0x4d[0x43];
    byte field_0x90; /* +0x90 */
    unsigned char pad_0x91[0x33];
    unsigned char field_0xc4; /* +0xc4 */
    unsigned char pad_0xc5[0x3];
    byte field_0xc8; /* +0xc8 */
    unsigned char pad_0xc9[0x57];
    undefined4 field_0x120; /* +0x120 */
    unsigned char pad_0x124[0x14];
    undefined4 field_0x138; /* +0x138 */
};

/* Supplied declaration required: nw_snd_internal_driver_Channel_NoteOff. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_UpdateSweep. */


void nw_snd_internal_driver_SequenceTrack_UpdateChannelLength(fn_0037d998_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  fn_0037d998_arg0_pc4 *unaff_r4;
  unsigned char temp_v0;
  
  temp_v0 = param_1->field_0x5 != 0;
  if (temp_v0) {
    unaff_r4 = param_1->field_0xc4;
  }
  if (temp_v0 && unaff_r4 != (fn_0037d998_arg0_pc4 *)0x0) {
    do {
      if (0 < (int)unaff_r4->field_0x120) {
        unaff_r4->field_0x120 = unaff_r4->field_0x120 - 1;
      }
      if (((unaff_r4->field_0x120 == 0) && (unaff_r4->field_0x90 != 4)) &&
         (param_1->field_0x4c == 0)) {
        nw_snd_internal_driver_Channel_NoteOff();
      }
      if (unaff_r4->field_0xc8 == 0) {
        nw_snd_internal_driver_Channel_UpdateSweep(unaff_r4,1);
      }
      unaff_r4 = (fn_0037d998_arg0_pc4 *)unaff_r4->field_0x138;
    } while (unaff_r4 != (fn_0037d998_arg0_pc4 *)0x0);
  }
  return;
}

} /* extern "C" */
