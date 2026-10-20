/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveFileReader_ReadPlayerInfo` (_code @ 0x194ff4, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a8c20(void);

/* Supplied declaration required: FUN_001a8c20. */
extern unsigned int *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetPlayerInfo(unsigned int);


unsigned char nw_snd_internal_SoundArchiveFileReader_ReadPlayerInfo(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char temp_v0;
  
  puVar1 = (unsigned int *)
           nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetPlayerInfo
                     (*(unsigned int *)(param_1 + 0x3c));
  temp_v0 = puVar1 != (unsigned int *)0x0;
  if (temp_v0) {
    *param_3 = *puVar1;
    FUN_001a8c20();
    param_3[1] = (unsigned int)puVar1;
  }
  return temp_v0;
}

} /* extern "C" */
