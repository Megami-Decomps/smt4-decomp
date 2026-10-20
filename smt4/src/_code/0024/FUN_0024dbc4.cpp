/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024dbc4` (_code @ 0x24dbc4, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int aeabi_idivmod(int, int);


int FUN_0024dbc4(int param_1,int param_2,int param_3,int param_4)

{
  int temp_v0;
  int temp_v1;
  
  if (0 < param_3) {
    if (param_4 < 1) {
      return param_1;
    }
    if (param_4 < param_3) {
      temp_v0 = aeabi_idivmod(param_1 * param_4,param_3);
      temp_v1 = aeabi_idivmod(param_2 * param_4,param_3);
      return temp_v1 + (param_1 - temp_v0);
    }
  }
  return param_2;
}

} /* extern "C" */
