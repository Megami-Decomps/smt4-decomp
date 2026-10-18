/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f1ad0` (_code @ 0x4f1ad0, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001f5180. */
extern int FUN_0022a00c(int);
/* Supplied declaration required: FUN_003d9174. */


void FUN_004f1ad0(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (-1 < param_2) {
    temp_v0 = FUN_0022a00c(param_1 + 0x44);
    if (temp_v0 == 0) {
      FUN_003d9174(param_1 + 0x44);
    }
    FUN_001f5180(param_1 + 0x44,(int)*(short *)(param_2 * 0xc + 0x57a57c),0);
    *(unsigned int *)(param_1 + 0x64c) = *(unsigned int *)(param_1 + 0x64c) | 0x40000;
    return;
  }
  return;
}
