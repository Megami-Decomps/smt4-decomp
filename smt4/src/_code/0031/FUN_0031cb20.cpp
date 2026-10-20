/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cb20` (_code @ 0x31cb20, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int btlGetMainState(void);
extern int scrGetArg(void);


unsigned int FUN_0031cb20(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  temp_v2 = *(unsigned int *)(temp_v1 + 0x44a0);
  if (temp_v0 >= 1) {
    temp_v2 = temp_v2 | 0x80000;
  }
  else {
    temp_v2 = temp_v2 & 0xfff7ffff;
  }
  *(unsigned int *)(temp_v1 + 0x44a0) = temp_v2;
  return 1;
}

} /* extern "C" */
