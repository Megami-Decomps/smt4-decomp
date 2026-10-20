/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aa67c` (_code @ 0x2aa67c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_004655e8; /* 0x4655e8 */


unsigned int FUN_002aa67c(unsigned int param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  if ((param_1 < 0x20) &&
     (puVar1 = *(unsigned int **)(DAT_004655e8 + param_1 * 4 + 0x828), puVar1 != (unsigned int *)0x0)) {
    temp_v0 = *puVar1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
