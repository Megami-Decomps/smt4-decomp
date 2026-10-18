/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d348` (_code @ 0x30d348, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559504; /* 0x559504 */

extern unsigned int *FUN_002fd284(void);


void FUN_0030d348(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002fd284();
  *puVar1 = (unsigned int)&DAT_00559504;
  return;
}
