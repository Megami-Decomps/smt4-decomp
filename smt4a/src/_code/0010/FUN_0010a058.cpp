/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a058` (_code @ 0x10a058, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned int);
int FUN_002e6e5c(int *);

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002ea714(void);


void FUN_0010a058(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = FUN_002ea714();
  FUN_002e6e34(&uStack_18,temp_v0);
  *(unsigned int *)(param_1 + 0xbc) = 0;
  FUN_002e6e5c(&uStack_18);
  return;
}

} /* extern "C" */
