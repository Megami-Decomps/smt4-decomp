/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001597a4` (_code @ 0x1597a4, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004eac5c; /* 0x4eac5c */

extern void nn_os_AddressSpaceManager_Free(unsigned int, unsigned int);


void FUN_001597a4(unsigned int param_1)

{
  nn_os_AddressSpaceManager_Free((unsigned int)&DAT_004eac5c,param_1);
  return;
}

} /* extern "C" */
