/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cfd0` (_code @ 0x31cfd0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


unsigned short FUN_0031cfd0(unsigned int param_1)

{
  unsigned short temp_v0;
  
  if (param_1 >= 0x501) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned short *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + param_1 * 0x50 + 0x5f40);
  }
  return temp_v0;
}

} /* extern "C" */
