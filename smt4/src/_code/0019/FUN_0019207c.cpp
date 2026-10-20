#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int *);
int jobStop(unsigned int, int);

extern unsigned char DAT_0044de28; /* 0x44de28 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_0019207c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_0044de28 + 0x4));
  if ((*(unsigned int * *)((unsigned char *)&DAT_0044de28 + 0x4)) != (unsigned int *)0x0) {
    *(unsigned char *)(puVar1 + 1) = 1;
    jobStop(*puVar1,0);
    asdMemFree(puVar1);
    (*(unsigned int * *)((unsigned char *)&DAT_0044de28 + 0x4)) = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
