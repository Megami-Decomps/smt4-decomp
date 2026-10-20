/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012071c` (_code @ 0x12071c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055ad9c; /* 0x55ad9c */

extern int FUN_002e9f64(unsigned int *);


int FUN_0012071c(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ad9c;
  temp_v0 = FUN_002e9f64(param_1 + 2);
  return temp_v0 - 8;
}

} /* extern "C" */
