/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b8768` (_code @ 0x1b8768, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nnnstdMemCpy(int, unsigned char *, int);

extern int DAT_005b40e0; /* 0x5b40e0 */
extern unsigned char DAT_005c0b50; /* 0x5c0b50 */

/* Supplied declaration required: nnnstdMemCpy. */


void FUN_001b8768(void)

{
/* irregular: 1 native warning(s); review required */
  nnnstdMemCpy(DAT_005b40e0,&DAT_005c0b50,0x170);
  DAT_005b40e0 = DAT_005b40e0 + 0x170;
  return;
}

} /* extern "C" */
