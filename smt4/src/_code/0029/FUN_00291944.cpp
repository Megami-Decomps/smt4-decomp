/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291944` (_code @ 0x291944, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int *);
int jobStop(unsigned int, int);
int uiFadeClose(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern signed char DAT_0043dc20; /* 0x43dc20 */
extern unsigned int *DAT_0043dc24; /* 0x43dc24 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: uiFadeClose. */


void FUN_00291944(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_0043dc24;
  DAT_0043dc20 = DAT_0043dc20 - '\x01';
  if (DAT_0043dc20 < '\x01') {
    jobStop(*DAT_0043dc24,0);
    asdMemFree(puVar1);
    DAT_0043dc24 = (unsigned int *)0x0;
    DAT_0043dc20 = 0;
    uiFadeClose();
    return;
  }
  return;
}

} /* extern "C" */
