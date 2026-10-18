/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002471d8` (_code @ 0x2471d8, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b63ac(void);


unsigned int FUN_002471d8(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002b63ac();
  if (*(short *)(temp_v0 + 0x74) < -8) {
    temp_v1 = 5;
  }
  else if (*(short *)(temp_v0 + 0x74) < 9) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 4;
  }
  return temp_v1;
}
