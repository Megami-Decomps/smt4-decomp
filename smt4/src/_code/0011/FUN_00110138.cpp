/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110138` (_code @ 0x110138, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0011d2a0(void);


unsigned char FUN_00110138(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0011d2a0();
  return temp_v0 == 1;
}

} /* extern "C" */
