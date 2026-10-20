#include "romwright_types.h"

extern "C" {

int FUN_001bd604(unsigned char *, unsigned int, unsigned int, unsigned int);

extern unsigned char g_nnSndVoiceManager; /* 0x6449d0 */

/* Supplied declaration required: FUN_001bd604. */


void FUN_001af874(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_001bd604(&g_nnSndVoiceManager,param_1,param_2,param_3);
  return;
}

} /* extern "C" */
