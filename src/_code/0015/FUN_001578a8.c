/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001578a8` (_code @ 0x1578a8, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0015c454(); /* 0x15c454 */

/* Supplied declaration required: FUN_002a22a8. */
/* Supplied declaration required: FUN_002a3418. */
/* Supplied declaration required: FUN_002b4ea0. */
/* Supplied declaration required: FUN_002b4eb8. */
/* Supplied declaration required: FUN_002bf774. */


unsigned int FUN_001578a8(int param_1,int param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = param_1 + param_2 * 0x10;
  if (*(int *)(temp_v0 + 0x30) < *(int *)(temp_v0 + 0x2c)) {
    FUN_002b4eb8(param_1,param_2);
  }
  FUN_002a22a8(temp_v0 + 0x24,0);
  FUN_002a3418();
  param_1 = param_1 + param_2 * 0xc;
  piVar1 = (int *)(param_1 + 100);
  if (*piVar1 == 0) {
    FUN_002b4ea0((int)(char)param_2,FUN_0015c454,param_2);
  }
  FUN_002bf774(piVar1,param_1 + 0x68,param_3 + 4);
  return 1;
}
