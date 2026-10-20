/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cfd8c` (_code @ 0x4cfd8c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_00164af0(unsigned int);


unsigned int FUN_004cfd8c(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00164af0(6);
  if (param_1 != 0) {
    temp_v1 = FUN_00164af0(0xf);
    temp_v0 = temp_v0 | temp_v1;
  }
  return temp_v0;
}

} /* extern "C" */
