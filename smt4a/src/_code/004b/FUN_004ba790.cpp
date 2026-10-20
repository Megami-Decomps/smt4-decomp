/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ba790` (_code @ 0x4ba790, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_004cfe4c(void);


unsigned int FUN_004ba790(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_004cfe4c();
  return *(unsigned int *)(param_1 + temp_v0 * 4 + 0x7ec);
}

} /* extern "C" */
