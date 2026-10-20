/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveFileReader_ReadSequenceSoundInfo` (_code @ 0x1a8ecc, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetBankIds(int, int *);
int nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetChannelPriority(void);
int nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetStartOffset(void);
int nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_IsReleasePriorityFix(void);

extern int FUN_001b3c84(int);
extern int nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(unsigned int);
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetBankIds. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetChannelPriority. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_GetStartOffset. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SequenceSoundInfo_IsReleasePriorityFix. */
extern int nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(void);


unsigned int nw_snd_internal_SoundArchiveFileReader_ReadSequenceSoundInfo(int param_1,unsigned int param_2,int *param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo
                    (*(unsigned int *)(param_1 + 0x3c));
  temp_v2 = 0;
  if (temp_v0 != 0) {
    temp_v1 = nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType();
    if (temp_v1 != 1) {
      temp_v2 = 0;
    }
    else {
      temp_v1 = FUN_001b3c84(temp_v0);
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

} /* extern "C" */
