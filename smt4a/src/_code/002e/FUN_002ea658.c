/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea658` (_code @ 0x2ea658, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558630; /* 0x558630 */

extern unsigned int *FUN_002ea6e8(void);


void FUN_002ea658(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002ea6e8();
  *puVar1 = (unsigned int)&DAT_00558630;
  return;
}
