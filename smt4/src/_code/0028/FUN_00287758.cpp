/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00287758` (_code @ 0x287758, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044cf60; /* 0x44cf60 */

extern int FUN_002a60b4(unsigned int, unsigned int);


unsigned int FUN_00287758(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (((((*(int *)((unsigned char *)&DAT_0044cf60 + 0x4)) != 0x65) || (temp_v0 = FUN_002a60b4(0x1c,6), temp_v1 = 0, temp_v0 != 0)) &&
      (((*(int *)((unsigned char *)&DAT_0044cf60 + 0x4)) != 0x66 || (temp_v0 = FUN_002a60b4(0x1c,7), temp_v1 = 0, temp_v0 != 0)))) &&
     (((*(int *)((unsigned char *)&DAT_0044cf60 + 0x4)) != 0x67 || (temp_v0 = FUN_002a60b4(0x1c,8), temp_v1 = 0, temp_v0 != 0)))) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
