/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eca10` (_code @ 0x2eca10, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005591d8; /* 0x5591d8 */
extern unsigned char DAT_005591e8; /* 0x5591e8 */

extern unsigned int *FUN_002eb77c(void);


void FUN_002eca10(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002eb77c();
  puVar1[0x10] = 0;
  puVar1[0x13] = (unsigned int)&DAT_005591d8;
  puVar1[0x11] = 0;
  *puVar1 = (unsigned int)&DAT_005591e8;
  puVar1[0x16] = 0;
  puVar1[0x12] = 0;
  puVar1[0x18] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x19] = 0;
  return;
}
