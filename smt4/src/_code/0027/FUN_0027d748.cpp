/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d748` (_code @ 0x27d748, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00433158; /* 0x433158 */

extern unsigned int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


int FUN_0027d748(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0cec(0x23,1);
  temp_v1 = FUN_002c0cc4();
  temp_v2 = FUN_002c0c74(temp_v0);
  if (param_1 < temp_v2) {
    temp_v1 = temp_v1 + param_1 * 0xc;
  }
  else if (param_1 < *(int *)(DAT_00433158 + 0x3ec) + temp_v2) {
    temp_v1 = *(int *)(DAT_00433158 + 0x3f0) + (param_1 - temp_v2) * 0xc;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
