/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_SoundThread_Destroy` (_code @ 0x121990, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00146ee0(void);

/* Supplied declaration required: FUN_00146ee0. */


void nw_snd_internal_driver_SoundThread_Destroy(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 500) != '\0') {
    *(unsigned char *)(param_1 + 0x1f7) = 1;
    FUN_00146ee0();
    *(unsigned char *)(param_1 + 500) = 0;
  }
  return;
}

} /* extern "C" */
