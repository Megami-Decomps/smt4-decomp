/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003054c0` (_code @ 0x3054c0, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00305696(void);


unsigned int FUN_003054c0(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00305696();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 0x10);
  }
  return temp_v1;
}

} /* extern "C" */
