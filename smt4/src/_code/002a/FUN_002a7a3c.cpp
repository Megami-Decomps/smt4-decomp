/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7a3c` (_code @ 0x2a7a3c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlock(unsigned int);


int FUN_002a7a3c(unsigned int *param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((*(char *)(param_1 + 3) != '\0') && (param_2 < *(unsigned int *)param_1[1])) {
    if (param_1[2] == 0) {
      temp_v1 = ((unsigned int *)param_1[1])[param_2 * 3 + 2];
      temp_v0 = nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlock(*param_1);
      return temp_v0 + 8 + temp_v1;
    }
    return *(int *)(param_1[2] + param_2 * 4);
  }
  return 0;
}

} /* extern "C" */
