/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124662` (_code @ 0x124662, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0030ec2c(void);
extern int *FUN_0030ecc4(void);


int FUN_00124662(unsigned int param_1,int param_2)

{
  int *piVar1;
  int temp_v0;
  
  piVar1 = (int *)FUN_0030ecc4();
  if (param_2 < piVar1[1]) {
    return *piVar1 + param_2 * 8 + 4;
  }
  temp_v0 = FUN_0030ec2c();
  return temp_v0;
}

} /* extern "C" */
