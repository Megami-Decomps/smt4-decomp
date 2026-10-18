/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8e24` (_code @ 0x1a8e24, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_001b3c78(int);
extern int nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(unsigned int);
extern int nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(void);
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_WaveSoundInfo_GetChannelPriority. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_WaveSoundInfo_GetIsReleasePriorityFix. */


unsigned int FUN_001a8e24(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  temp_v0 = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo
                    (*(unsigned int *)(param_1 + 0x3c));
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType();
    if (temp_v1 != 3) {
      temp_v2 = 0;
    }
    else {
      puVar4 = (unsigned int *)FUN_001b3c78(temp_v0);
      *param_3 = *puVar4;
      param_3[1] = puVar4[1];
      puVar5 = puVar4;
      nw_snd_internal_SoundArchiveFile_WaveSoundInfo_GetChannelPriority();
      *(char *)(param_3 + 2) = (char)puVar5;
      nw_snd_internal_SoundArchiveFile_WaveSoundInfo_GetIsReleasePriorityFix();
      *(unsigned char *)((int)param_3 + 9) = puVar4 != (unsigned int *)0x0;
      temp_v2 = 1;
    }
  }
  return temp_v2;
}
