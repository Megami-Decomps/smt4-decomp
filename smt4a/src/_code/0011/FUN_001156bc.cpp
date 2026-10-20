/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001156bc` (_code @ 0x1156bc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(void);
int FUN_002e6e34(int *, int);
int FUN_002e6e5c(int *);
int FUN_003014a8(void);

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_003014a8. */


void FUN_001156bc(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int iStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  iStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&iStack_18,param_1 + 4);
  temp_v0 = 0;
  do {
    if (*(int *)(temp_v0 * 4 + param_1 + 0x34) == param_2) break;
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 8);
  param_1 = temp_v0 * 4 + param_1;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_003014a8();
    FUN_002e6e14();
  }
  *(unsigned int *)(param_1 + 0x34) = 0;
  FUN_002e6e5c(&iStack_18);
  return;
}

} /* extern "C" */
