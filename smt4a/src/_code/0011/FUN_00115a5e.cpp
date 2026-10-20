/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115a5e` (_code @ 0x115a5e, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned int);
int FUN_002e6e5c(int *);
int FUN_002eb744(int);

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002eb744. */


void FUN_00115a5e(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&uStack_18,*(unsigned int *)(param_1 + 0x20));
  FUN_002eb744(param_1);
  FUN_002e6e5c(&uStack_18);
  return;
}

} /* extern "C" */
