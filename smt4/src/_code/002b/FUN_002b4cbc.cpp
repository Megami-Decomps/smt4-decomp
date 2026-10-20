#include "romwright_types.h"

extern "C" {

int FUN_00146e28(unsigned char *, unsigned int, unsigned int, unsigned int);

extern unsigned char g_nnSndMasterManager; /* 0x4e6f14 */

/* Supplied declaration required: FUN_00146e28. */


void FUN_002b4cbc(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_00146e28(&g_nnSndMasterManager,param_1,param_2,param_3);
  return;
}

} /* extern "C" */
