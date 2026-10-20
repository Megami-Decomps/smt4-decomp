/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5928` (_code @ 0x2f5928, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559bf8; /* 0x559bf8 */

extern unsigned int *FUN_002e7168(void);


void FUN_002f5928(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002e7168();
  *puVar1 = (unsigned int)&DAT_00559bf8;
  *(unsigned char *)(puVar1 + 0xb) = 2;
  return;
}

} /* extern "C" */
