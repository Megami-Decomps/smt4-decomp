/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124a28` (_code @ 0x124a28, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00124b88(unsigned int *, unsigned int);
extern unsigned int FUN_0030ec2c(void);


int FUN_00124a28(unsigned int *param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  
  *param_1 = 0xffffffff;
  temp_v0 = FUN_0030ec2c();
  temp_v1 = FUN_00124b88(param_1 + 1,temp_v0);
  return temp_v1 - 4;
}

} /* extern "C" */
