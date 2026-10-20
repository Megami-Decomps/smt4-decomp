#include "romwright_types.h"

extern "C" {

int FUN_002c415c(unsigned int *);
int FUN_002c43b4(unsigned int, int);

extern unsigned int *DAT_0043e140; /* 0x43e140 */

/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_002a7890(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043e140;
  FUN_002c43b4(*DAT_0043e140,0);
  FUN_002c415c(puVar1);
  DAT_0043e140 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
