/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139bd8` (_code @ 0x139bd8, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e460; /* 0x44e460 */

extern unsigned int FUN_001468b0(int, unsigned int);


unsigned int FUN_00139bd8(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (DAT_0044e460 != 0) {
    temp_v0 = FUN_001468b0(DAT_0044e460,param_1);
    return temp_v0;
  }
  return 0xc8a0a7f8;
}
