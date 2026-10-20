/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9af4` (_code @ 0x2e9af4, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002ea4bc(void);


unsigned int FUN_002e9af4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002ea4bc();
  return *(unsigned int *)(temp_v0 + 0x10);
}

} /* extern "C" */
