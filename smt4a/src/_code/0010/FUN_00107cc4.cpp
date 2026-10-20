/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107cc4` (_code @ 0x107cc4, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned int);
int _ZN9Obj55b28cD1Ev(int *);
int FUN_002efbd8(int);
int FUN_002f02e0(int);

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int onlineGetActiveLock(void);
/* Supplied declaration required: FUN_002efbd8. */
/* Supplied declaration required: FUN_002f02e0. */


void FUN_00107cc4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v0 = onlineGetActiveLock();
  FUN_002e6e34(&uStack_20,temp_v0);
  *(unsigned int *)(param_1 + 0xb8) = param_2;
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_002efbd8(param_1);
  }
  FUN_002f02e0(param_1);
  _ZN9Obj55b28cD1Ev(&uStack_20);
  return;
}

} /* extern "C" */
