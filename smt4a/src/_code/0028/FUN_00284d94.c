/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00284d94` (_code @ 0x284d94, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00588124; /* 0x588124 */


unsigned char FUN_00284d94(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_00588124 != 0) {
    temp_v0 = *(int *)(DAT_00588124 + 0xf0);
  }
  return DAT_00588124 != 0 && temp_v0 != 7;
}
