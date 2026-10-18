/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e707c` (_code @ 0x3e707c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(unsigned int);
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_SoundInfo_GetSound3DInfo. */


void FUN_003e707c(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)
           nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo
                     (*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  if ((puVar1 != (unsigned int *)0x0) &&
     (nw_snd_internal_SoundArchiveFile_SoundInfo_GetSound3DInfo(), puVar1 != (unsigned int *)0x0)) {
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    *(unsigned char *)(param_3 + 2) = *(unsigned char *)(puVar1 + 2);
    *(unsigned char *)((int)param_3 + 9) = *(unsigned char *)((int)puVar1 + 9);
  }
  return;
}
