/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e17c` (_code @ 0x29e17c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int *);
int jobStop(unsigned int, int);

extern signed char g_useCounter; /* 0x43dd20 */
extern unsigned int *DAT_0043dd24; /* 0x43dd24 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_0029e17c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043dd24;
  g_useCounter = g_useCounter - '\x01';
  if (g_useCounter < '\x01') {
    jobStop(*DAT_0043dd24,0);
    asdMemFree(puVar1);
    DAT_0043dd24 = (unsigned int *)0x0;
    g_useCounter = '\0';
  }
  return;
}

} /* extern "C" */
