/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo` (_code @ 0x3e677c, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo(short *param_1)

{
  int temp_v0;
  
  if (*param_1 == 0x4100) {
    temp_v0 = (int)param_1 + *(int *)(param_1 + 2);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
