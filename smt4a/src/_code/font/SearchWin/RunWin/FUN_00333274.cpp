#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(unsigned int *);

extern unsigned int *DAT_0057f580; /* 0x57f580 */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00333274(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f580;
  FUN_001631d0(*DAT_0057f580,0);
  FUN_0019a5a0(puVar1);
  DAT_0057f580 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
