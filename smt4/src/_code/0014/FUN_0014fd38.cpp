#include "romwright_types.h"

extern "C" {

int FUN_00153374(unsigned char *, unsigned int);

extern unsigned char g_nnSndMasterManager; /* 0x4e6f14 */

/* Supplied declaration required: FUN_00153374. */


void FUN_0014fd38(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00153374(&g_nnSndMasterManager,param_1);
  return;
}

} /* extern "C" */
