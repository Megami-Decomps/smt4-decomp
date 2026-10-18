/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012094c` (_code @ 0x12094c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055ae90; /* 0x55ae90 */


void FUN_0012094c(unsigned int *param_1,int param_2)

{
  param_1[3] = param_2;
  param_1[1] = param_2 << 3;
  *param_1 = (unsigned int)&DAT_0055ae90;
  param_1[2] = 0;
  return;
}
