/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_WaveSoundFile_WaveSoundData_GetNoteInfo` (_code @ 0x14d168, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int nw_snd_internal_WaveSoundFile_WaveSoundData_GetNoteInfo(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 0x14));
  if ((param_2 < *puVar1) && ((short)puVar1[param_2 * 2 + 1] == 0x4902)) {
    temp_v0 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
