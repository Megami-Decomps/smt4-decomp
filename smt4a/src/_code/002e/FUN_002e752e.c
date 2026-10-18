/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e752e` (_code @ 0x2e752e, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002e7328(int, unsigned int);
extern int FUN_002e76b6(unsigned int);


unsigned int FUN_002e752e(int param_1,unsigned char *param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002e7328(param_1,1);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e76b6(*(unsigned int *)(param_1 + 8));
    *param_2 = *(unsigned char *)(temp_v0 + *(int *)(param_1 + 0xc));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return 1;
  }
  *param_2 = 0;
  return 0;
}
