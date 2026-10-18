/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveFileReader_ReadFileInfo` (_code @ 0x1b3cf8, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int nw_snd_internal_SoundArchiveFile_FileInfo_GetExternalFileInfo(int);
extern int nw_snd_internal_SoundArchiveFile_FileInfo_GetFileLocationType(void);
extern int nw_snd_internal_SoundArchiveFile_FileInfo_GetInternalFileInfo(int);
extern int nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetFileInfo(unsigned int);


unsigned int
nw_snd_internal_SoundArchiveFileReader_ReadFileInfo
          (int param_1,unsigned int param_2,unsigned int *param_3)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetFileInfo
                    (*(unsigned int *)(param_1 + 0x3c));
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = nw_snd_internal_SoundArchiveFile_FileInfo_GetFileLocationType();
    if (temp_v1 != 0) {
      if (temp_v1 != 1) {
        if (temp_v1 == 2) {
          return 0;
        }
      }
      else {
        temp_v2 = nw_snd_internal_SoundArchiveFile_FileInfo_GetExternalFileInfo(temp_v0);
        param_3[2] = temp_v2;
      }
    }
    else {
      temp_v0 = nw_snd_internal_SoundArchiveFile_FileInfo_GetInternalFileInfo(temp_v0);
      *param_3 = *(unsigned int *)(temp_v0 + 8);
      temp_v0 = *(int *)(temp_v0 + 4);
      if (temp_v0 != -1) {
        temp_v0 = temp_v0 + 8;
      }
      param_3[1] = temp_v0;
    }
    temp_v2 = 1;
  }
  return temp_v2;
}
