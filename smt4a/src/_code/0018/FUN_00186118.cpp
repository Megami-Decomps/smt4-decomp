/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00186118` (_code @ 0x186118, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0030ef8c(int, char *, unsigned int);


int FUN_00186118(int param_1,unsigned int *param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_0030ef8c(param_1,"ATBC",4);
  if ((temp_v0 == 0) || (temp_v0 = FUN_0030ef8c(param_1,"ABCH",4), temp_v0 == 0)) {
    temp_v0 = *(int *)(param_1 + 0x14);
    if (temp_v0 == 0) {
      temp_v0 = *(int *)(param_1 + 0x10);
    }
    param_1 = param_1 + temp_v0;
    temp_v0 = FUN_0030ef8c(param_1,"MDLSIGN",7);
    if (temp_v0 == 0) {
      *param_2 = *(unsigned int *)(param_1 + 8);
      return param_1 + 0x80;
    }
    param_1 = 0;
  }
  *param_2 = 0;
  return param_1;
}

} /* extern "C" */
