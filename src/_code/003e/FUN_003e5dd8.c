/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5dd8` (_code @ 0x3e5dd8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0036a5a8(unsigned int);
extern unsigned int FUN_003e4478(void);


unsigned int FUN_003e5dd8(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_003e4478();
  temp_v1 = FUN_0036a5a8(param_2);
  return temp_v1 & temp_v0;
}
