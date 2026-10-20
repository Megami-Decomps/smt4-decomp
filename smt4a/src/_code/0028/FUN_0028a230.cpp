/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028a230` (_code @ 0x28a230, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0018206c(unsigned int, unsigned int);


unsigned int FUN_0028a230(int param_1)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x78);
  if (temp_v0 != 3) {
    if (temp_v0 != 4) {
      if (temp_v0 != 7 && temp_v0 != 8) {
        return 1;
      }
      temp_v0 = FUN_0018206c(0x2a,0);
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v0 = FUN_0018206c(0x2a,1);
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v0 = FUN_0018206c(0x2a,2);
    }
    else {
      temp_v0 = FUN_0018206c(0x2a,7);
    }
  }
  else {
    temp_v0 = FUN_0018206c(0x2a,6);
  }
  if (temp_v0 != 0) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
