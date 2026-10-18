/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012f5ac` (_code @ 0x12f5ac, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int nw_snd_internal_SoundArchiveFile_FileHeader_GetFileBlockOffset(unsigned int);


void FUN_0012f5ac(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  *(unsigned int *)(param_1 + 4) = param_2;
  temp_v0 = nw_snd_internal_SoundArchiveFile_FileHeader_GetFileBlockOffset(param_2);
  *(unsigned int *)(param_1 + 0x108) = temp_v0;
  return;
}
