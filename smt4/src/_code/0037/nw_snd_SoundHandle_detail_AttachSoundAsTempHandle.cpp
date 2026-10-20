/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundHandle_detail_AttachSoundAsTempHandle` (_code @ 0x37693c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003799bc(int);

/* Supplied declaration required: FUN_003799bc. */
extern int FUN_00379a04(int);


void nw_snd_SoundHandle_detail_AttachSoundAsTempHandle(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = param_2;
  temp_v0 = FUN_00379a04(param_2);
  if (temp_v0 != 0) {
    FUN_003799bc(*param_1);
  }
  *(int **)(*param_1 + 0xc) = param_1;
  return;
}

} /* extern "C" */
