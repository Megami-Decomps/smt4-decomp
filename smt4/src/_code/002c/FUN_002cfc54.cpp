/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cfc54` (_code @ 0x2cfc54, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002939f4(void);
extern int FUN_00296cc8(void);


unsigned int FUN_002cfc54(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002939f4();
    temp_v1 = 0xb;
  }
  else {
    temp_v0 = FUN_002939f4();
    temp_v1 = 0xc;
  }
  *(unsigned int *)(temp_v0 + 0x88) = temp_v1;
  return 1;
}

} /* extern "C" */
