/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106fee` (_code @ 0x106fee, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00107058(void);
extern int FUN_002eeb24(int);


unsigned char FUN_00106fee(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  int temp_v0;
  
  if (param_4 != 0) {
    temp_v0 = FUN_00107058();
  }
  else {
    temp_v0 = FUN_002eeb24(param_1 + 4);
  }
  return temp_v0 != 0;
}
