#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(unsigned int *);
int asdTMTexTableFreeEntry(int);

extern unsigned int *DAT_0057f57c; /* 0x57f57c */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */


void FUN_002ef750(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f57c;
  if (DAT_0057f57c != (unsigned int *)0x0) {
    asdTMTexTableFreeEntry(0x34);
    jobStop(*puVar1,0);
    asdMemFree(puVar1);
    DAT_0057f57c = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
