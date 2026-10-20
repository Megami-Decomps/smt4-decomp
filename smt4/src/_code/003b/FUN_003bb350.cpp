/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb350` (_code @ 0x3bb350, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a60b4(unsigned int, unsigned int);


unsigned char FUN_003bb350(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002a60b4(0x2a,0);
  return temp_v0 != 0;
}

} /* extern "C" */
