/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030e6a4` (_code @ 0x30e6a4, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055ae08; /* 0x55ae08 */

extern unsigned int *FUN_003024c4(unsigned int, unsigned int);


void FUN_0030e6a4(unsigned int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_003024c4(param_1,1);
  *puVar1 = (unsigned int)&DAT_0055ae08;
  return;
}
