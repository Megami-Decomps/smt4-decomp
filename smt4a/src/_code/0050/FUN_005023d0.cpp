/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005023d0` (_code @ 0x5023d0, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00647630; /* 0x647630 */

extern unsigned int FUN_0043b380(unsigned int, int, int);


unsigned int FUN_005023d0(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_2 == 0) {
    temp_v0 = 0xd8e0a002;
  }
  else if (*(int *)(param_1 + 4) < 1) {
    temp_v0 = 0xd8a0a064;
  }
  else {
    if ((*(signed char *)((unsigned char *)&DAT_00647630 + 0x4)) != '\0') {
      temp_v0 = FUN_0043b380(0x64765c,*(int *)(param_1 + 4),param_2);
      return temp_v0;
    }
    temp_v0 = 0xd8a0a3f8;
  }
  return temp_v0;
}

} /* extern "C" */
