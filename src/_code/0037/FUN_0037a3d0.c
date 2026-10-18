/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a3d0` (_code @ 0x37a3d0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0037d814(unsigned int *);
extern int FUN_0037f398(int);


int FUN_0037a3d0(unsigned int *param_1,unsigned int param_2)

{
  int temp_v0;
  
  *param_1 = param_2;
  temp_v0 = FUN_0037d814(param_1 + 0x754);
  temp_v0 = FUN_0037f398(temp_v0 - 0x1c5c);
  return temp_v0 - 0xf4;
}
