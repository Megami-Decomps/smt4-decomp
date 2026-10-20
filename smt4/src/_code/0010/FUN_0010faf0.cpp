/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010faf0` (_code @ 0x10faf0, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nnosAddressSpaceManagerInitialize(unsigned char *, int, int);

extern unsigned char DAT_004d4600; /* 0x4d4600 */

/* Supplied declaration required: nnosAddressSpaceManagerInitialize. */


void FUN_0010faf0(void)

{
/* irregular: 1 native warning(s); review required */
  nnosAddressSpaceManagerInitialize(&DAT_004d4600,0xe000000,0x2000000);
  return;
}

} /* extern "C" */
