/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028cab8` (_code @ 0x28cab8, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */


unsigned int FUN_0028cab8(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0044e190 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0044e190 + 0x2384);
  }
  return temp_v0;
}
