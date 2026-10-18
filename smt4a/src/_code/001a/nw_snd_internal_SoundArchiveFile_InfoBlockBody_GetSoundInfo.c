/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo` (_code @ 0x1a8c40, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  if (param_2 >> 0x18 == 1) {
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 4));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}
