#include "romwright_types.h"

extern "C" {

int FUN_001cd508(unsigned char *, unsigned int, unsigned int);

extern unsigned char g_nnSndMasterManager; /* 0x643310 */

/* Supplied declaration required: FUN_001cd508. */


void FUN_001c7934(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_001cd508(&g_nnSndMasterManager,param_1,param_2);
  return;
}

} /* extern "C" */
