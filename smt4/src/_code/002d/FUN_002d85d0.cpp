#include "romwright_types.h"

extern "C" {

int FUN_002c425c(unsigned int, unsigned int);

extern unsigned int *DAT_0043ded0; /* 0x43ded0 */

/* Supplied declaration required: FUN_002c425c. */


void FUN_002d85d0(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043ded0;
  FUN_002c425c(*DAT_0043ded0,param_1);
  puVar1[0xc] = param_1;
  return;
}

} /* extern "C" */
