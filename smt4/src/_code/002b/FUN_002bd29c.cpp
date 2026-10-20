#include "romwright_types.h"

extern "C" {

int FUN_00155e54(unsigned char *, unsigned int, unsigned int, unsigned int);

extern unsigned char g_nnSndVoiceManager; /* 0x4e8568 */

/* Supplied declaration required: FUN_00155e54. */


void FUN_002bd29c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_00155e54(&g_nnSndVoiceManager,param_1,param_2,param_3);
  return;
}

} /* extern "C" */
