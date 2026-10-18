/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035e778` (_code @ 0x35e778, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00573920; /* 0x573920 */

extern int FUN_00163e40(unsigned int);


unsigned char FUN_0035e778(void)

{
  int temp_v0;
  
  if (DAT_00573920 == 0) {
    return 0;
  }
  temp_v0 = FUN_00163e40(*(unsigned int *)(DAT_00573920 + 0x4c));
  return temp_v0 != 0;
}
