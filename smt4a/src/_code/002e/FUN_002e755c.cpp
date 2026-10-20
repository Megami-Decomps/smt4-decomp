/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e755c` (_code @ 0x2e755c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7340(unsigned int, unsigned int, int, unsigned int);

extern int FUN_002e7328(int, int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e7340. */


unsigned char FUN_002e755c(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e7328(param_1,param_3,param_3,param_4,param_4);
  if (temp_v0 == 0) {
    param_3 = *(int *)(*(int *)(param_1 + 8) + 0x10) - *(int *)(param_1 + 0xc);
  }
  if (param_3 != 0) {
    FUN_002e7340(*(unsigned int *)(param_1 + 8),param_2,param_3,*(unsigned int *)(param_1 + 0xc));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
