/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321988` (_code @ 0x321988, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00432cc8; /* 0x432cc8 */

extern int FUN_002896bc(void);


void FUN_00321988(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002896bc();
  if (temp_v0 != 0) {
    *(unsigned int *)(DAT_00432cc8 + 0x14c) = 5;
  }
  return;
}
