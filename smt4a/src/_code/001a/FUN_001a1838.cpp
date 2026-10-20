#include "romwright_types.h"

extern "C" {

int FUN_001a1664(unsigned char *, unsigned int, unsigned int, unsigned int);

extern unsigned char g_nnSndMasterManager; /* 0x643380 */

/* Supplied declaration required: FUN_001a1664. */


void FUN_001a1838(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_001a1664(&g_nnSndMasterManager,param_1,param_2,param_3);
  return;
}

} /* extern "C" */
