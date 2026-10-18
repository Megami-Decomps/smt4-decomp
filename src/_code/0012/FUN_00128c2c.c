/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128c2c` (_code @ 0x128c2c, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00138f34(void);


unsigned char FUN_00128c2c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00138f34();
  return temp_v0 == 4;
}
