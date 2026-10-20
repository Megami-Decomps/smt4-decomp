/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6e26` (_code @ 0x2e6e26, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002ea4bc(void);


unsigned int FUN_002e6e26(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002ea4bc();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 0xc);
  }
  return temp_v1;
}

} /* extern "C" */
