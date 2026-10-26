#include "romwright_types.h"

extern "C" {

int FUN_0015d19c(unsigned char *, unsigned int, unsigned int);

extern unsigned char g_nnSndMasterManager; /* 0x643310 */

/* Supplied declaration required: FUN_0015d19c. */


void FUN_0015a124(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_0015d19c(&g_nnSndMasterManager,param_1,param_2);
  return;
}

} /* extern "C" */
