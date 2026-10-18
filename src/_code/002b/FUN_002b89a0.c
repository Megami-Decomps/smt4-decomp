/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b89a0` (_code @ 0x2b89a0, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044dc20; /* 0x44dc20 */


unsigned int FUN_002b89a0(void)

{
  unsigned int temp_v0;
  
  if ((DAT_0044dc20 == 0) || (*(int *)(DAT_0044dc20 + 0x352c) == 0x14)) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
