/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114476` (_code @ 0x114476, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0011b430(int, unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002e6e26(void);
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e78d0. */


void FUN_00114476(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002e760a(0x88);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0011b430(temp_v0,*(unsigned int *)(param_1 + 0x14),param_2,param_3);
  }
  temp_v2 = FUN_002e6e26();
  FUN_002e78d0(temp_v2,temp_v1,0);
  return;
}
