/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a444` (_code @ 0x22a444, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00254db0(void);


int FUN_0022a444(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00254db0();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(int *)(temp_v0 + 0x208);
  }
  if (temp_v0 != 0 && temp_v1 != 0) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
