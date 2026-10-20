/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ae44` (_code @ 0x29ae44, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e140; /* 0x44e140 */


int FUN_0029ae44(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) != 0) {
    temp_v0 = (int)*(char *)((*(int *)((unsigned char *)&DAT_0044e140 + 0x4)) + 0x12ec);
  }
  return temp_v0;
}

} /* extern "C" */
