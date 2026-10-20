/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Channel_Release` (_code @ 0x235870, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_Voice_SetPriority(int, int);

typedef struct fn_00235870_arg0 fn_00235870_arg0;
struct fn_00235870_arg0 {
    unsigned char pad_0x0[0x90];
    byte field_0x90; /* +0x90 */
    unsigned char pad_0x91[0x34];
    undefined1 field_0xc5; /* +0xc5 */
    unsigned char pad_0xc6[0x3];
    byte field_0xc9; /* +0xc9 */
    unsigned char pad_0xca[0x6a];
    int field_0x134; /* +0x134 */
};

/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPriority. */


void nw_snd_internal_driver_Channel_Release(fn_00235870_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1->field_0x90 != 4) {
    if ((param_1->field_0x134 != 0) && (param_1->field_0xc9 == 0)) {
      nw_snd_internal_driver_Voice_SetPriority(param_1->field_0x134,1);
    }
    param_1->field_0x90 = 4;
  }
  param_1->field_0xc5 = 0;
  return;
}

} /* extern "C" */
