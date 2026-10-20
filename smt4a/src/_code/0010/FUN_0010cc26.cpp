/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010cc26` (_code @ 0x10cc26, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010cbe8(int);
int FUN_002e6e34(int *, unsigned int);
int _ZN9Obj55b28cD1Ev(int *);

/* Supplied declaration required: FUN_0010cbe8. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int onlineGetActiveLock(void);


void FUN_0010cc26(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int iStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  iStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = onlineGetActiveLock();
  FUN_002e6e34(&iStack_18,temp_v0);
  FUN_0010cbe8(param_2);
  temp_v0 = *(unsigned int *)(param_2 + 0x14);
  *param_1 = *(unsigned int *)(param_2 + 0x10);
  param_1[1] = temp_v0;
  _ZN9Obj55b28cD1Ev(&iStack_18);
  return;
}

} /* extern "C" */
