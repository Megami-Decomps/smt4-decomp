/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_StreamSoundFileLoader_ReadStreamInfo` (_code @ 0x3e6e0c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nw_snd_internal_StreamSoundFileReader_ReadStreamSoundInfo. */


unsigned int nw_snd_internal_StreamSoundFileLoader_ReadStreamInfo(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 4) != 0) {
    nw_snd_internal_StreamSoundFileReader_ReadStreamSoundInfo(param_1 + 4);
    return 1;
  }
  return 0;
}
