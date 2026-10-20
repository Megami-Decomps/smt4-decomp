/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cc198` (_code @ 0x1cc198, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_driver_Voice_Free(void);

/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */


void FUN_001cc198(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 >= 2) {
    if (param_2 == 2 || param_2 == 3) {
      *(unsigned int *)(param_3 + 4) = 0;
    }
    return;
  }
  nw_snd_internal_driver_Voice_Free();
  *(unsigned int *)(param_3 + 4) = 0;
  return;
}

} /* extern "C" */
