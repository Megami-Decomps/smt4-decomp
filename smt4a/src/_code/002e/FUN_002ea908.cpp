/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea908` (_code @ 0x2ea908, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0030ef8c(int, int);


unsigned int FUN_002ea908(int param_1,int param_2)

{
  int temp_v0;
  
  if ((*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x10)) &&
     (temp_v0 = FUN_0030ef8c(param_2,param_1), temp_v0 == 0)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
