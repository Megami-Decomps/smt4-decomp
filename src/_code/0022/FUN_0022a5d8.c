/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a5d8` (_code @ 0x22a5d8, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00254ff0(void);


int FUN_0022a5d8(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00254ff0();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(int *)(temp_v0 + 0x208);
  }
  if (temp_v0 != 0 && temp_v1 != 0) {
    temp_v1 = 1;
  }
  return temp_v1;
}
