#include "romwright_types.h"

extern "C" {

int FUN_002c415c(unsigned int *);
int FUN_002c43b4(unsigned int, int);

extern unsigned int *DAT_0044d1b0; /* 0x44d1b0 */

/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_00222af8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0044d1b0;
  if (DAT_0044d1b0 != (unsigned int *)0x0) {
    FUN_002c43b4(*DAT_0044d1b0,0);
    FUN_002c415c(puVar1);
    DAT_0044d1b0 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
