/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8e90` (_code @ 0x1a8e90, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundGroupInfo(unsigned int);


unsigned char FUN_001a8e90(int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)
           nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundGroupInfo
                     (*(unsigned int *)(param_1 + 0x3c));
  if (puVar1 != (unsigned int *)0x0) {
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[2] = (int)puVar1 + puVar1[3];
  }
  return puVar1 != (unsigned int *)0x0;
}
