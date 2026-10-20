/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundHandle_detail_AttachSound` (_code @ 0x376910, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd9ec(int);

/* Supplied declaration required: FUN_002bd9ec. */
extern int FUN_003799c4(int);


void nw_snd_SoundHandle_detail_AttachSound(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = param_2;
  temp_v0 = FUN_003799c4(param_2);
  if (temp_v0 != 0) {
    FUN_002bd9ec(*param_1);
  }
  *(int **)(*param_1 + 8) = param_1;
  return;
}

} /* extern "C" */
