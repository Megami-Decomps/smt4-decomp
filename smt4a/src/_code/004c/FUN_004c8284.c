/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c8284` (_code @ 0x4c8284, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_004c571c. */


int FUN_004c8284(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  if (param_2 == 0 || param_2 == 3) {
    temp_v1 = FUN_004c571c(param_1,7);
    if (temp_v1 < 0) {
      temp_v1 = -temp_v1;
    }
    FUN_004c571c(param_1,8,param_3,param_4);
  }
  if (param_2 == 1 || param_2 == 3) {
    temp_v0 = FUN_004c571c(param_1,10,param_3,param_4);
    if (temp_v0 < 0) {
      temp_v0 = -temp_v0;
    }
    temp_v1 = temp_v1 + temp_v0;
  }
  if (param_2 == 2 || param_2 == 3) {
    temp_v0 = FUN_004c571c(param_1,0xb,param_3,param_4);
    if (temp_v0 < 0) {
      temp_v0 = -temp_v0;
    }
    temp_v1 = temp_v1 + temp_v0;
    FUN_004c571c(param_1,9,param_3,param_4);
  }
  return temp_v1;
}
