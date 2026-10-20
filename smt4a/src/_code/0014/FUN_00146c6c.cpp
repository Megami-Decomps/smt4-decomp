/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146c6c` (_code @ 0x146c6c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(unsigned char *, int, int);

extern unsigned char DAT_00647660; /* 0x647660 */

/* Supplied declaration required: nnosAddressSpaceManagerInitialize. */


void FUN_00146c6c(void)

{
/* irregular: 1 native warning(s); review required */
  nnosAddressSpaceManagerInitialize(&DAT_00647660,0x10000000,0x4000000);
  return;
}

} /* extern "C" */
