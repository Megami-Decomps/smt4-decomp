#include "romwright_types.h"

extern "C" {

int FUN_001b5c60(unsigned char *, unsigned int);

extern unsigned char g_nnSndMasterManager; /* 0x643380 */

/* Supplied declaration required: FUN_001b5c60. */


void FUN_001afd84(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001b5c60(&g_nnSndMasterManager,param_1);
  return;
}

} /* extern "C" */
