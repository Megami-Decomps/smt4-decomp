/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b3cb8` (_code @ 0x1b3cb8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(unsigned int);


int FUN_001b3cb8(unsigned int *param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (*(char *)(param_1 + 3) != '\0') {
    temp_v0 = nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(*param_1);
    temp_v0 = *(int *)(param_1[1] + param_2 * 0xc + 8) + temp_v0 + 8;
  }
  return temp_v0;
}
