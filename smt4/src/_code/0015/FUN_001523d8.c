/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001523d8` (_code @ 0x1523d8, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_001558a4(unsigned int);
extern int nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetBankInfo(unsigned int);
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundGroupInfo. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo. */
extern int nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(void);


int FUN_001523d8(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = *(int *)(param_1 + 4);
  temp_v2 = param_2 >> 0x18;
  if (temp_v2 != 1) {
    if (temp_v2 != 2) {
      if (temp_v2 != 3) {
        return 0;
      }
      temp_v0 = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetBankInfo
                        (*(unsigned int *)(temp_v0 + 0x3c));
      temp_v1 = *(int *)(temp_v0 + 8);
    }
    else {
      temp_v0 = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundGroupInfo
                        (*(unsigned int *)(temp_v0 + 0x3c));
      if (*(short *)(temp_v0 + 0x10) == 0x2205) {
        temp_v0 = temp_v0 + *(int *)(temp_v0 + 0x14);
      }
      else {
        temp_v0 = 0;
      }
      temp_v1 = *(int *)(temp_v0 + 4);
    }
    return temp_v0 + temp_v1;
  }
  nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(*(unsigned int *)(temp_v0 + 0x3c));
  temp_v1 = nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType();
  if (temp_v1 == 3) {
    for (temp_v2 = 0; puVar2 = (unsigned int *)FUN_001558a4(*(unsigned int *)(temp_v0 + 0x3c)), temp_v2 < *puVar2;
        temp_v2 = temp_v2 + 1) {
      puVar2 = (unsigned int *)nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundGroupInfo
                                 (*(unsigned int *)(temp_v0 + 0x3c),temp_v2 | 0x2000000);
      temp_v4 = param_2 <= *puVar2;
      temp_v3 = *puVar2 == param_2;
      if (!temp_v4 || temp_v3) {
        temp_v4 = puVar2[1] <= param_2;
        temp_v3 = param_2 == puVar2[1];
      }
      if (!temp_v4 || temp_v3) {
        if ((short)puVar2[4] == 0x2205) {
          temp_v0 = (int)puVar2 + puVar2[5];
        }
        else {
          temp_v0 = 0;
        }
        return temp_v0 + *(int *)(temp_v0 + 4);
      }
    }
  }
  return 0;
}
