/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e4d40` (_code @ 0x1e4d40, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int jobGetWork(void);


unsigned int FUN_001e4d40(void)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  
  temp_v0 = jobGetWork();
  piVar2 = (int *)(temp_v0 + 0x1ea0);
  temp_v0 = *piVar2;
  temp_v1 = temp_v0 + 1;
  *piVar2 = temp_v1;
  if (temp_v1 >= 0x1e) {
    *piVar2 = temp_v0 - 0x1d;
  }
  return 0;
}

} /* extern "C" */
