#include "romwright_types.h"

extern "C" {

int FUN_001560a0(unsigned char *, unsigned int);

extern unsigned char g_nnSndMasterManager; /* 0x4e6f14 */

/* Supplied declaration required: FUN_001560a0. */


void FUN_002a3178(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_001560a0(&g_nnSndMasterManager,param_1);
  return;
}

} /* extern "C" */
