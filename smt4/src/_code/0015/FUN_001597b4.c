/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001597b4` (_code @ 0x1597b4, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004eac5c; /* 0x4eac5c */

extern unsigned int nn_os_AddressSpaceManager_Allocate(unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_001597b4(unsigned int param_1,unsigned int param_2)

{
  nn_os_AddressSpaceManager_Allocate((unsigned int)&DAT_004eac5c,param_1,param_2,0x1000);
  return;
}
