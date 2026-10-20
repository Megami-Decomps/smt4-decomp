/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00178a90` (_code @ 0x178a90, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_SoundArchiveFile_SoundInfo_GetActorPlayerId(void);
int nw_snd_internal_SoundArchiveFile_SoundInfo_GetPanCurve(void);
int nw_snd_internal_SoundArchiveFile_SoundInfo_GetPanMode(void);
int nw_snd_internal_SoundArchiveFile_SoundInfo_GetPlayerPriority(void);
int nw_snd_internal_SoundArchiveFile_SoundInfo_IsFrontBypass(void);

extern unsigned int *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(unsigned int);
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SoundInfo_GetActorPlayerId. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SoundInfo_GetPanCurve. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SoundInfo_GetPanMode. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SoundInfo_GetPlayerPriority. */
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SoundInfo_IsFrontBypass. */


unsigned char FUN_00178a90(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char temp_v0;
  
  puVar1 = (unsigned int *)
           nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo
                     (*(unsigned int *)(param_1 + 0x3c));
  temp_v0 = puVar1 != (unsigned int *)0x0;
  if (temp_v0) {
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[4] = (unsigned int)*(unsigned char *)(puVar1 + 2);
    puVar2 = puVar1;
    nw_snd_internal_SoundArchiveFile_SoundInfo_GetPanMode();
    *(char *)(param_3 + 5) = (char)(int)puVar2;
    puVar2 = puVar1;
    nw_snd_internal_SoundArchiveFile_SoundInfo_GetPanCurve();
    *(char *)((int)param_3 + 0x15) = (char)(int)puVar2;
    puVar2 = puVar1;
    nw_snd_internal_SoundArchiveFile_SoundInfo_GetPlayerPriority();
    param_3[3] = (unsigned int)puVar2;
    puVar2 = puVar1;
    nw_snd_internal_SoundArchiveFile_SoundInfo_GetActorPlayerId();
    param_3[2] = (unsigned int)puVar2;
    nw_snd_internal_SoundArchiveFile_SoundInfo_IsFrontBypass();
    *(char *)((int)param_3 + 0x16) = (char)(int)puVar1;
  }
  return temp_v0;
}

} /* extern "C" */
