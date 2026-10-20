/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00508ffc` (_code @ 0x508ffc, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_SoundArchiveFile_FileInfo_GetExternalFileInfo(int);

/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_FileInfo_GetExternalFileInfo. */
extern int nw_snd_internal_SoundArchiveFile_FileInfo_GetFileLocationType(void);
extern int nw_snd_internal_SoundArchiveFile_FileInfo_GetInternalFileInfo(int);
extern int nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetFileInfo(unsigned int, unsigned int);
extern unsigned int *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetGroupInfo(unsigned int);


unsigned int FUN_00508ffc(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  puVar1 = (unsigned int *)
           nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetGroupInfo
                     (*(unsigned int *)(param_1 + 0x3c));
  temp_v0 = 0;
  if (puVar1 != (unsigned int *)0x0) {
    temp_v0 = *puVar1;
    temp_v3 = 0xffffffff;
    *param_3 = temp_v0;
    temp_v1 = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetFileInfo
                      (*(unsigned int *)(param_1 + 0x3c),temp_v0);
    if (temp_v1 == 0) {
      return 0;
    }
    temp_v2 = nw_snd_internal_SoundArchiveFile_FileInfo_GetFileLocationType();
    if (temp_v2 != 0) {
      if (temp_v2 != 1) {
        if (temp_v2 == 2) {
          return 0;
        }
      }
      else {
        nw_snd_internal_SoundArchiveFile_FileInfo_GetExternalFileInfo(temp_v1);
      }
    }
    else {
      temp_v1 = nw_snd_internal_SoundArchiveFile_FileInfo_GetInternalFileInfo(temp_v1);
      temp_v3 = *(unsigned int *)(temp_v1 + 8);
    }
    temp_v0 = 1;
    param_3[1] = temp_v3;
  }
  return temp_v0;
}

} /* extern "C" */
