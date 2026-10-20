/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122230` (_code @ 0x122230, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055b1d0; /* 0x55b1d0 */

extern unsigned int *FUN_0030fc48(void);


void FUN_00122230(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0030fc48();
  *puVar1 = (unsigned int)&DAT_0055b1d0;
  *(unsigned char *)(puVar1 + 4) = 2;
  *(unsigned char *)((int)puVar1 + 0x11) = 0;
  return;
}

} /* extern "C" */
