/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab058` (_code @ 0x3ab058, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_002356d4. */
/* Supplied declaration required: FUN_0028ccb0. */
/* Supplied declaration required: FUN_00295ea8. */
/* Supplied declaration required: FUN_0029c0fc. */
extern int FUN_0029c68c(void);
extern int FUN_002a0f88(void);


void FUN_003ab058(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002a0f88();
  if ((temp_v0 != 0) && (temp_v0 = FUN_0029c68c(), temp_v0 == 1)) {
    FUN_002356d4(0);
    temp_v0 = FUN_002337a0(param_1 + 0x20);
    FUN_0028ccb0(*(unsigned short *)(param_1 + temp_v0 * 0x20 + 0x5ac));
    temp_v0 = FUN_002337a0(param_1 + 0x20);
    temp_v0 = *(int *)(param_1 + temp_v0 * 0x20 + 0x5b4);
    FUN_00295ea8(-temp_v0);
    FUN_0029c0fc(1,temp_v0);
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}
