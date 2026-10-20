/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002292cc` (_code @ 0x2292cc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588124; /* 0x588124 */


unsigned char FUN_002292cc(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_00588124 != 0) {
    temp_v0 = *(int *)(DAT_00588124 + 0xf0);
  }
  return DAT_00588124 == 0 || temp_v0 == 7;
}

} /* extern "C" */
