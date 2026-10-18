/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab2d4` (_code @ 0x3ab2d4, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_0029e8c0. */
/* Supplied declaration required: FUN_0029e8e8. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_003aaef0. */
extern int FUN_003ad554(void);


void FUN_003ab2d4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_003ad554();
  if (temp_v0 != 0) {
    temp_v0 = *(int *)(param_1 + 0x598);
    FUN_002972f8(temp_v0,*(unsigned int *)(param_1 + 0x59c));
    *(int *)(param_1 + 0x5a0) = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 1;
    FUN_003aaef0();
    FUN_002b8b78(0x3e);
    temp_v0 = FUN_002337a0(param_1 + 0x20);
    temp_v0 = *(int *)(param_1 + temp_v0 * 0x20 + 0x5b4);
    FUN_0029e8e8(1,0);
    FUN_0029e8c0(-temp_v0,0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}
