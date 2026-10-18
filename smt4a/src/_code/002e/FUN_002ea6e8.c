/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea6e8` (_code @ 0x2ea6e8, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005594b4; /* 0x5594b4 */

extern unsigned int *FUN_002fd0e4(void);


void FUN_002ea6e8(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002fd0e4();
  *puVar1 = (unsigned int)&DAT_005594b4;
  *(unsigned char *)(puVar1 + 2) = 0;
  return;
}
