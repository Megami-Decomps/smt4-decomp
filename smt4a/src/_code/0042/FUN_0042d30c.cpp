/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042d30c` (_code @ 0x42d30c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a0af4(unsigned char *, unsigned int, unsigned int, int);

extern unsigned char g_nnosAddressSpaceManager; /* 0x643310 */

/* Supplied declaration required: FUN_001a0af4. */


void FUN_0042d30c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_001a0af4(&g_nnosAddressSpaceManager,param_1,param_2,0);
  return;
}

} /* extern "C" */
