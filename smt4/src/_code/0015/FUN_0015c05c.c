/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015c05c` (_code @ 0x15c05c, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(int);
extern int nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlock(int *);


void FUN_0015c05c(int *param_1,int *param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  
  if ((*param_2 == 0x52415743) && (param_2[2] == 0x1000000)) {
    *param_1 = (int)param_2;
    temp_v0 = nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlock(param_2);
    param_1[1] = temp_v0 + 8;
    *(unsigned char *)(param_1 + 3) = 1;
    if ((param_3 != 0) &&
       (temp_v1 = *param_1,
       temp_v0 = nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(temp_v1),
       *(int *)(temp_v1 + temp_v0) == 0x54415743)) {
      temp_v0 = nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(*param_1);
      param_1[2] = temp_v0 + 4 + (int)param_2;
    }
  }
  return;
}
