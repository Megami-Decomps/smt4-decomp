/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe22a` (_code @ 0x2fe22a, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002e92e4(unsigned int, unsigned int);
extern unsigned int FUN_002e95ba(unsigned int);


unsigned char FUN_002fe22a(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002e95ba(param_2);
  temp_v1 = FUN_002e95ba(param_1);
  temp_v2 = FUN_002e92e4(temp_v1,temp_v0);
  return temp_v2 != 0;
}

} /* extern "C" */
