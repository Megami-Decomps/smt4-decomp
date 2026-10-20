/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fb04` (_code @ 0x10fb04, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(unsigned char *, int, int);

extern unsigned char DAT_004eac5c; /* 0x4eac5c */

/* Supplied declaration required: nnosAddressSpaceManagerInitialize. */


void FUN_0010fb04(void)

{
/* irregular: 1 native warning(s); review required */
  nnosAddressSpaceManagerInitialize(&DAT_004eac5c,0x10000000,0x4000000);
  return;
}

} /* extern "C" */
