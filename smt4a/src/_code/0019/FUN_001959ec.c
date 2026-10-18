/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001959ec` (_code @ 0x1959ec, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005b4428; /* 0x5b4428 */


unsigned int FUN_001959ec(unsigned int param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  if ((param_1 < 0x20) &&
     (puVar1 = *(unsigned int **)(DAT_005b4428 + param_1 * 4 + 0x828), puVar1 != (unsigned int *)0x0)) {
    temp_v0 = *puVar1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
