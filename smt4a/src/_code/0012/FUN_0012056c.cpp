/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012056c` (_code @ 0x12056c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055ad7c; /* 0x55ad7c */

extern int FUN_003106d0(unsigned int *);


int FUN_0012056c(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ad7c;
  temp_v0 = FUN_003106d0(param_1 + 4);
  return temp_v0 - 0x10;
}

} /* extern "C" */
