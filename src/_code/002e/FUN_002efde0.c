/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efde0` (_code @ 0x2efde0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */

extern int FUN_0029f0f4(int);


int FUN_002efde0(void)

{
  int temp_v0;
  
  if (DAT_0044e190 == 0) {
    return 0;
  }
  temp_v0 = FUN_0029f0f4(DAT_0044e190 + 0x4d4);
  return temp_v0 - 1;
}
