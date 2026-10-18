/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e808` (_code @ 0x15e808, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bb5b4(void);


unsigned int FUN_0015e808(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bb5b4();
  if (temp_v0 == 0) {
    temp_v1 = 0xffffffff;
  }
  else {
    temp_v1 = (unsigned int)*(unsigned short *)
                   (*(int *)(param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x131c) * 4 + 0x10a8) + 2);
  }
  return temp_v1;
}
