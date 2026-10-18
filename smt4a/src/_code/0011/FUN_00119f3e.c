/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119f3e` (_code @ 0x119f3e, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00306d18(unsigned int, int, unsigned int, int);


unsigned int FUN_00119f3e(int param_1,unsigned int param_2,unsigned char *param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00306d18(*(unsigned int *)(param_1 + 0xc),param_1,param_2,param_1 + 0x10);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    if (param_3 != (unsigned char *)0x0) {
      *param_3 = *(unsigned char *)(param_1 + 0x10);
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
