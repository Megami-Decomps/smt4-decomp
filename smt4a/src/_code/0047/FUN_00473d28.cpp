/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00473d28` (_code @ 0x473d28, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0047d754(int);


unsigned char FUN_00473d28(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0047d754(param_1 + 0x88);
  return temp_v0 != 0;
}

} /* extern "C" */
