#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int *);
int jobStop(unsigned int, int);

extern unsigned int *DAT_0043e140; /* 0x43e140 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_002a7890(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043e140;
  jobStop(*DAT_0043e140,0);
  asdMemFree(puVar1);
  DAT_0043e140 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
