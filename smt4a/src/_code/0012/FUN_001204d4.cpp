/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001204d4` (_code @ 0x1204d4, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055ad6c; /* 0x55ad6c */

extern int FUN_001221bc(unsigned int *);


int FUN_001204d4(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ad6c;
  temp_v0 = FUN_001221bc(param_1 + 2);
  return temp_v0 - 8;
}

} /* extern "C" */
