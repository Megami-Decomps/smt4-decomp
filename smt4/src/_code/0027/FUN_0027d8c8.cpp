/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d8c8` (_code @ 0x27d8c8, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e2ac; /* 0x43e2ac */

extern int FUN_002c09d0(unsigned int);


unsigned int FUN_0027d8c8(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((*(int *)(DAT_0043e2ac + 0x1f4dc) != 0) ||
     (temp_v0 = FUN_002c09d0(0x528), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
