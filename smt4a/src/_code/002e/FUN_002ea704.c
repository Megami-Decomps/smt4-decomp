/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea704` (_code @ 0x2ea704, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002eb5f4(void);


unsigned int FUN_002ea704(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002eb5f4();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 0xa0);
  }
  return temp_v1;
}
