#include "romwright_types.h"

extern "C" {

int FUN_0015d0f8(unsigned char *, unsigned int, unsigned int);

extern unsigned char g_nnSndMasterManager; /* 0x643310 */

/* Supplied declaration required: FUN_0015d0f8. */


void FUN_0015a110(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_0015d0f8(&g_nnSndMasterManager,param_1,param_2);
  return;
}

} /* extern "C" */
