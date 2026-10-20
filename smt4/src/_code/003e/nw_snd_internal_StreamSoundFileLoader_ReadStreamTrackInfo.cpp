/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_StreamSoundFileLoader_ReadStreamTrackInfo` (_code @ 0x3e6e54, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e6efc(int);

/* Supplied declaration required: FUN_003e6efc. */


unsigned int nw_snd_internal_StreamSoundFileLoader_ReadStreamTrackInfo(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 4) != 0) {
    FUN_003e6efc(param_1 + 4);
    return 1;
  }
  return 0;
}

} /* extern "C" */
