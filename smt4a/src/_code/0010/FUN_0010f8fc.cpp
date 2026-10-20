/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f8fc` (_code @ 0x10f8fc, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea41e(int *, int);
int FUN_002fa474(int, int *);

/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002fa474. */


void FUN_0010f8fc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  *(unsigned int *)(param_1 + 0x6c) = 0;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002ea41e(&uStack_18,param_1 + 0x1d0);
  FUN_002fa474(param_1,&uStack_18);
  return;
}

} /* extern "C" */
