/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd454` (_code @ 0x2fd454, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002fd444(void);


unsigned int FUN_002fd454(void)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_002fd444();
  return (temp_v0 & 3) >> 1;
}
