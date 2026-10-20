#include "romwright_types.h"

extern "C" {

int FUN_002523f0(void);
int FUN_002a46d8(int);
int asdMemFree(unsigned int *);
int jobStop(unsigned int, int);

extern unsigned int *DAT_0043dd90; /* 0x43dd90 */

/* Supplied declaration required: FUN_002523f0. */
/* Supplied declaration required: FUN_002a46d8. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_002fecfc(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043dd90;
  FUN_002a46d8(0x25);
  FUN_002523f0();
  jobStop(*puVar1,0);
  asdMemFree(puVar1);
  DAT_0043dd90 = (unsigned int *)0x0;
  return;
}

} /* extern "C" */
