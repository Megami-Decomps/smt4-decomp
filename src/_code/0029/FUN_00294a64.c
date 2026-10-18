/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294a64` (_code @ 0x294a64, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00294a84; /* 0x294a84 */

extern unsigned int FUN_0029a2d0(unsigned char *);


void FUN_00294a64(int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_0029a2d0(&LAB_00294a84);
  *(unsigned int *)(param_1 + 4) = 1;
  *(unsigned int *)(param_1 + 8) = temp_v0;
  return;
}
