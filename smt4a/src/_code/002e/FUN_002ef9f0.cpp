/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef9f0` (_code @ 0x2ef9f0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_00588e2c; /* 0x588e2c */

extern int FUN_00184e20(unsigned int);


unsigned char FUN_002ef9f0(void)

{
  int temp_v0;
  
  if (DAT_00588e2c == (unsigned int *)0x0) {
    return 0;
  }
  temp_v0 = FUN_00184e20(*DAT_00588e2c);
  return temp_v0 != 0;
}

} /* extern "C" */
