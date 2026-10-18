/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b0454` (_code @ 0x3b0454, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162e8c(void);
extern int FUN_00236038(unsigned int);


unsigned int FUN_003b0454(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00162e8c();
  temp_v1 = FUN_00236038(0);
  *(unsigned int *)(temp_v0 + 0x15d0) = (unsigned int)(temp_v1 != 0);
  return 1;
}
