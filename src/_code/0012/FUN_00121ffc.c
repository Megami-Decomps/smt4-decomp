/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121ffc` (_code @ 0x121ffc, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00141fb4(unsigned int);


int FUN_00121ffc(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_00141fb4(param_2);
  return temp_v0 * 4 + 4;
}
