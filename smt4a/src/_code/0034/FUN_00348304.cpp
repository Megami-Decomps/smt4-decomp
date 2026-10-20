#include "romwright_types.h"

extern "C" {

int FUN_0014bdb4(unsigned int, unsigned int);

extern unsigned int *DAT_0057f3b0; /* 0x57f3b0 */

/* Supplied declaration required: FUN_0014bdb4. */


void FUN_00348304(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f3b0;
  FUN_0014bdb4(*DAT_0057f3b0,param_1);
  puVar1[0x12] = param_1;
  return;
}

} /* extern "C" */
