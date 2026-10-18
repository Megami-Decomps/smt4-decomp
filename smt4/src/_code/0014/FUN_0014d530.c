/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d530` (_code @ 0x14d530, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001522a0(int);
extern int nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(unsigned int);
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetBankIds. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetChannelPriority. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetStartOffset. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_IsReleasePriorityFix. */
extern int nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(void);


unsigned int FUN_0014d530(int param_1,unsigned int param_2,int *param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo
                    (*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType();
    if (temp_v1 != 1) {
      temp_v2 = 0;
    }
    else {
      temp_v1 = FUN_001522a0(temp_v0);
      temp_v0 = temp_v1;
      nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetStartOffset();
      *param_3 = temp_v0;
      param_3[5] = *(int *)(temp_v1 + 8);
      temp_v0 = temp_v1;
      nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetChannelPriority();
      *(char *)(param_3 + 6) = (char)temp_v0;
      temp_v0 = temp_v1;
      nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_IsReleasePriorityFix();
      *(char *)((int)param_3 + 0x19) = (char)temp_v0;
      nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetBankIds(temp_v1,param_3 + 1);
      temp_v2 = 1;
    }
  }
  return temp_v2;
}
