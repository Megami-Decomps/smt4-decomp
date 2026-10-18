/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040de1c` (_code @ 0x40de1c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0040de1c(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  for (temp_v1 = *(int *)(param_1 + 8); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0xc)) {
    if ((*(int *)(temp_v1 + 8) == param_2) && ((*(unsigned char *)(temp_v1 + 5) & 4) == 0)) {
      temp_v0 = temp_v0 + 1;
    }
  }
  return temp_v0;
}
