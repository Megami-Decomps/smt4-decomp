/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8db0` (_code @ 0x1a8db0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(int);


unsigned int FUN_001a8db0(int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (((char)param_1[3] == '\0') ||
     (temp_v2 = *param_1, temp_v0 = nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(temp_v2)
     , *(int *)(temp_v2 + temp_v0) != 0x54415743)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
