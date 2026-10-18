/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0564` (_code @ 0x3e0564, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002394a4(void);


unsigned int FUN_003e0564(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002394a4();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 4);
  }
  return temp_v1;
}
