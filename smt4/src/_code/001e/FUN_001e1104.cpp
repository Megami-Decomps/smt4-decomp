/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e1104` (_code @ 0x1e1104, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int pairSetSecondResetFirst(int, int);
int pairSetFirstResetSecond(...);
int timerStart(...);
int FUN_002bee58(int, int);

/* Supplied declaration required: pairSetSecondResetFirst. */
/* Supplied declaration required: pairSetFirstResetSecond. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bee58. */


void FUN_001e1104(int param_1,int param_2,unsigned char param_3,unsigned char param_4)

{
/* irregular: 4 native warning(s); review required */
  *(int *)(param_1 + 600) = param_2;
  *(unsigned char *)(param_1 + 0x25e) = 1;
  *(unsigned char *)(param_1 + 0x25c) = param_4;
  *(unsigned char *)(param_1 + 0x25d) = param_3;
  if (param_2 != 0) {
    if (param_2 == 1) {
      pairSetFirstResetSecond(param_1 + 0x20,0x2a);
      FUN_002bee58(param_1 + 0x20,0);
      pairSetSecondResetFirst(param_1 + 0x138,3);
      FUN_002bee58(param_1 + 0x138,2);
      pairSetSecondResetFirst(param_1 + 0xac,1);
      FUN_002bee58(param_1 + 0xac,1);
      pairSetFirstResetSecond(param_1 + 0x1c4,10);
      timerStart(param_1 + 0x1c4,2,0);
    }
  }
  else {
    pairSetFirstResetSecond(param_1 + 0x20,0x29);
    FUN_002bee58(param_1 + 0x20,0);
    pairSetSecondResetFirst(param_1 + 0x138,2);
    FUN_002bee58(param_1 + 0x138,2);
    pairSetSecondResetFirst(param_1 + 0xac,0);
    FUN_002bee58(param_1 + 0xac,1);
    pairSetFirstResetSecond(param_1 + 0x1c4,9);
    timerStart(param_1 + 0x1c4,2,0);
  }
  *(unsigned int *)(param_1 + 0x250) = 0;
  *(unsigned int *)(param_1 + 0x254) = 2;
  return;
}

} /* extern "C" */
