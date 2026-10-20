/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004931e0` (_code @ 0x4931e0, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00587fdc; /* 0x587fdc */

extern int FUN_0018206c(unsigned int, unsigned int);


unsigned int FUN_004931e0(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (((((*(int *)((unsigned char *)&DAT_00587fdc + 0x4)) != 0x65) || (temp_v0 = FUN_0018206c(0x13,6), temp_v1 = 0, temp_v0 != 0)) &&
      (((*(int *)((unsigned char *)&DAT_00587fdc + 0x4)) != 0x66 || (temp_v0 = FUN_0018206c(0x13,7), temp_v1 = 0, temp_v0 != 0)))) &&
     (((*(int *)((unsigned char *)&DAT_00587fdc + 0x4)) != 0x67 || (temp_v0 = FUN_0018206c(0x13,8), temp_v1 = 0, temp_v0 != 0)))) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
