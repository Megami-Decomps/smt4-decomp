/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlock` (_code @ 0x1b38b0, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlock(int param_1)

{
  int temp_v0;
  
  if (*(short *)(param_1 + 0x14) == 0x6801) {
    temp_v0 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6801) {
    temp_v0 = param_1 + 0x20;
  }
  else {
    temp_v0 = 0;
  }
  return param_1 + *(int *)(temp_v0 + 4);
}

} /* extern "C" */
