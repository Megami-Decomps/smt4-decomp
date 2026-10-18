/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aec20` (_code @ 0x2aec20, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00432fc8; /* 0x432fc8 */

extern int FUN_002a6fa0(unsigned int, int, unsigned int);
extern int FUN_002a704c(unsigned int);
extern int FUN_002a728c(unsigned int);


unsigned int FUN_002aec20(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((param_4 == 0) || (temp_v0 = FUN_002a704c(DAT_00432fc8), temp_v1 = 0, temp_v0 != 0)) {
    temp_v0 = FUN_002a728c(param_2);
    if (temp_v0 == -1) {
      temp_v1 = 0;
    }
    else {
      temp_v0 = FUN_002a6fa0(param_1,temp_v0,param_3);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = 1;
      }
    }
  }
  return temp_v1;
}
