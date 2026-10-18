/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00316e2c` (_code @ 0x316e2c, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


unsigned char FUN_00316e2c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2b1c();
  return *(char *)(temp_v0 + 0x1c) == '\x01';
}
