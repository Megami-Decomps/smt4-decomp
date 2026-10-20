/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023eb7c` (_code @ 0x23eb7c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a8764(void);


int FUN_0023eb7c(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  if (param_1 != 0) {
    temp_v0 = FUN_002a8764();
    temp_v0 = temp_v0 + 0x90;
    temp_v1 = 0;
    do {
      if (temp_v0 == param_1) {
        return temp_v1;
      }
      if (*(char *)(temp_v0 + 0x4a) == *(char *)(param_1 + 0x4a)) {
        return temp_v1;
      }
      temp_v1 = temp_v1 + 1;
      temp_v0 = temp_v0 + 0x604;
    } while (temp_v1 < 0x18);
  }
  return -1;
}

} /* extern "C" */
