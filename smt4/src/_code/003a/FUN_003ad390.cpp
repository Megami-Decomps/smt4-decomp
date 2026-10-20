/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ad390` (_code @ 0x3ad390, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int *);
int jobStop(unsigned int, int);

extern signed char g_countdown; /* 0x43d9e0 */
extern unsigned int *DAT_0043d9e4; /* 0x43d9e4 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_003ad390(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043d9e4;
  g_countdown = g_countdown - '\x01';
  if (g_countdown < '\x01') {
    jobStop(*DAT_0043d9e4,0);
    asdMemFree(puVar1);
    DAT_0043d9e4 = (unsigned int *)0x0;
    g_countdown = '\0';
  }
  return;
}

} /* extern "C" */
