/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cbb0c` (_code @ 0x3cbb0c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(unsigned int *);

extern signed char DAT_0057f20a; /* 0x57f20a */
extern unsigned int *DAT_0057f214; /* 0x57f214 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */


void FUN_003cbb0c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0057f214;
  DAT_0057f20a = DAT_0057f20a - '\x01';
  if ((DAT_0057f20a < '\x01') && (DAT_0057f214 != (unsigned int *)0x0)) {
    jobStop(*DAT_0057f214,0);
    asdMemFree(puVar1);
    DAT_0057f214 = (unsigned int *)0x0;
    DAT_0057f20a = '\0';
  }
  return;
}

} /* extern "C" */
