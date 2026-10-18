/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae98c` (_code @ 0x2ae98c, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00432fc8; /* 0x432fc8 */

extern int FUN_002a6c5c(unsigned int, int, unsigned int);
extern int FUN_002a6d08(unsigned int);
extern int FUN_002a6f48(unsigned int);


unsigned int FUN_002ae98c(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((param_4 == 0) || (temp_v0 = FUN_002a6d08(DAT_00432fc8), temp_v1 = 0, temp_v0 != 0)) {
    temp_v0 = FUN_002a6f48(param_2);
    if (temp_v0 == -1) {
      temp_v1 = 0;
    }
    else {
      temp_v0 = FUN_002a6c5c(param_1,temp_v0,param_3);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = 1;
      }
    }
  }
  return temp_v1;
}
