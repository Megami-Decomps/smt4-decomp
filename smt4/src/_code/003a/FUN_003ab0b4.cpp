/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab0b4` (_code @ 0x3ab0b4, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297060(int, unsigned int);
int FUN_0029e620(int, int);
int FUN_0029e648(int, int);
int FUN_002b8838(int);
int FUN_003aacd0(void);

extern int FUN_0023360c(int);
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_0029e620. */
/* Supplied declaration required: FUN_0029e648. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_003aacd0. */
extern int FUN_003ad334(void);


void FUN_003ab0b4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_003ad334();
  if (temp_v0 != 0) {
    temp_v0 = *(int *)(param_1 + 0x598);
    FUN_00297060(temp_v0,*(unsigned int *)(param_1 + 0x59c));
    *(int *)(param_1 + 0x5a0) = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 1;
    FUN_003aacd0();
    FUN_002b8838(0x3e);
    temp_v0 = FUN_0023360c(param_1 + 0x20);
    temp_v0 = *(int *)(param_1 + temp_v0 * 0x20 + 0x5b4);
    FUN_0029e648(1,0);
    FUN_0029e620(-temp_v0,0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
