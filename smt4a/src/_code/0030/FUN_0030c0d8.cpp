/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c0d8` (_code @ 0x30c0d8, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002f34ac(int, int);
extern int FUN_00307eb0(int, int);


unsigned int FUN_0030c0d8(unsigned int param_1,int param_2,int param_3)

{
  int temp_v0;
  
  temp_v0 = FUN_00307eb0(param_2,param_3);
  if (temp_v0 != 0 || (temp_v0 = FUN_002f34ac(param_2,param_3), temp_v0 != 0 &&
      *(unsigned char *)(param_2 + 0x20) < *(unsigned char *)(param_3 + 0x20))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
