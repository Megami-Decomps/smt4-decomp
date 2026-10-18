/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b164` (_code @ 0x11b164, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055a4a0; /* 0x55a4a0 */

extern unsigned int *FUN_0030723c(void);


void FUN_0011b164(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0030723c();
  *puVar1 = (unsigned int)&DAT_0055a4a0;
  return;
}
