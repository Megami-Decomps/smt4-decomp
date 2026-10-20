#include "romwright_types.h"

extern "C" {

int FUN_002a7218(unsigned int);
int FUN_002c415c(...);
int FUN_002c43b4(unsigned int, int);

extern unsigned int *DAT_0043daf8; /* 0x43daf8 */

/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_00310678(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043daf8;
  FUN_002c415c(DAT_0043daf8[2]);
  FUN_002c415c(puVar1[3]);
  FUN_002a7218(puVar1[1]);
  FUN_002c43b4(*puVar1,0);
  FUN_002c415c(puVar1);
  DAT_0043daf8 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
