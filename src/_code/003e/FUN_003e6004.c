/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6004` (_code @ 0x3e6004, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0036a7b8(unsigned int);
extern unsigned int FUN_003e46a4(void);


unsigned int FUN_003e6004(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_003e46a4();
  temp_v1 = FUN_0036a7b8(param_2);
  return temp_v1 & temp_v0;
}
