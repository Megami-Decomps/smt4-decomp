#include "romwright_types.h"

extern "C" {

int FUN_001bd84c(unsigned char *, unsigned int);

extern unsigned char g_nnSndMasterManager; /* 0x643380 */

/* Supplied declaration required: FUN_001bd84c. */


void FUN_001c7714(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001bd84c(&g_nnSndMasterManager,param_1);
  return;
}

} /* extern "C" */
