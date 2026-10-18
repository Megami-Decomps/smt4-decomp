/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetFileInfo` (_code @ 0x1bbc80, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetFileInfo(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 0x34));
  if ((param_2 & 0xffffff) >= *puVar1) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
  }
  return temp_v0;
}
