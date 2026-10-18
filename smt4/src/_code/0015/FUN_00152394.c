/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152394` (_code @ 0x152394, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetWaveArchiveInfo(unsigned int);
/* Supplied declaration required: nw_snd_internal_SoundArchiveFile_WaveArchiveInfo_GetWaveCount. */


unsigned char FUN_00152394(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = (unsigned int *)
           nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetWaveArchiveInfo
                     (*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  if (puVar1 != (unsigned int *)0x0) {
    *param_3 = *puVar1;
    puVar2 = puVar1;
    nw_snd_internal_SoundArchiveFile_WaveArchiveInfo_GetWaveCount();
    param_3[1] = (unsigned int)puVar2;
    *(unsigned char *)(param_3 + 2) = *(unsigned char *)(puVar1 + 1);
  }
  return puVar1 != (unsigned int *)0x0;
}
