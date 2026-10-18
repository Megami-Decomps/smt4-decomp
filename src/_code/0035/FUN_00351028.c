/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351028` (_code @ 0x351028, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0023a774(int);


unsigned char FUN_00351028(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0023a774(param_1 + 0x158);
  return temp_v0 != 0;
}
