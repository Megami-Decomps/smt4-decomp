/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a1c0` (_code @ 0x37a1c0, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0037d604(unsigned int *);
extern int FUN_0037f188(int);


int FUN_0037a1c0(unsigned int *param_1,unsigned int param_2)

{
  int temp_v0;
  
  *param_1 = param_2;
  temp_v0 = FUN_0037d604(param_1 + 0x754);
  temp_v0 = FUN_0037f188(temp_v0 - 0x1c5c);
  return temp_v0 - 0xf4;
}
