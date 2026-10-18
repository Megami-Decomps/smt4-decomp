/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023116c` (_code @ 0x23116c, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0023116c(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x38);
  temp_v1 = temp_v0;
  if (temp_v0 >= 11) {
    temp_v1 = 2;
  }
  if (temp_v0 == 10) {
    temp_v1 = 1;
  }
  if (temp_v0 < 10) {
    temp_v1 = 0;
  }
  return temp_v1;
}
