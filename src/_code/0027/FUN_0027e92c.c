/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027e92c` (_code @ 0x27e92c, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0027e92c(int param_1,int param_2)

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
