/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundHandle_detail_AttachSound` (_code @ 0x45b7cc, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0015ddf0. */
extern int FUN_0045f7e4(int);


void nw_snd_SoundHandle_detail_AttachSound(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = param_2;
  temp_v0 = FUN_0045f7e4(param_2);
  if (temp_v0 != 0) {
    FUN_0015ddf0(*param_1);
  }
  *(int **)(*param_1 + 8) = param_1;
  return;
}
