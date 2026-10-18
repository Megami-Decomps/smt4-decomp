/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cfba8` (_code @ 0x2cfba8, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00293c98(void);
extern int FUN_00296f60(void);


unsigned int FUN_002cfba8(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296f60();
  if (temp_v0 != 0) {
    temp_v0 = FUN_00293c98();
    temp_v1 = 0xb;
  }
  else {
    temp_v0 = FUN_00293c98();
    temp_v1 = 0xc;
  }
  *(unsigned int *)(temp_v0 + 0x88) = temp_v1;
  return 1;
}
