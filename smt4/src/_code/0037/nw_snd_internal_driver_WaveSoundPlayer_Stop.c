/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_WaveSoundPlayer_Stop` (_code @ 0x37e5bc, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b7430. */
extern unsigned int FUN_002bd440(void);


void nw_snd_internal_driver_WaveSoundPlayer_Stop(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    temp_v0 = FUN_002bd440();
    FUN_002b7430(temp_v0,param_1 + 0x50);
    *(unsigned char *)(param_1 + 0xd) = 0;
  }
  return;
}
