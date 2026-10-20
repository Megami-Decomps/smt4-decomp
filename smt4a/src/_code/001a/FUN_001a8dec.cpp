#include "romwright_types.h"

extern "C" {

extern unsigned int *nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetBankInfo(unsigned int);


unsigned char FUN_001a8dec(int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)
           nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetBankInfo
                     (*(unsigned int *)(param_1 + 0x3c));
  if (puVar1 != (unsigned int *)0x0) {
    *param_3 = *puVar1;
  }
  return puVar1 != (unsigned int *)0x0;
}

} /* extern "C" */
