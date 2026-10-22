/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001036ec` (_code @ 0x1036ec, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(int *, int);
int _ZN9Obj55b28cD1Ev(int *);
int onlineJobSetStateReady(unsigned int);
int sharedRefRelease(unsigned int);

extern int onlineContextGetInstance(void);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: onlineJobSetStateReady. */
/* Supplied declaration required: sharedRefRelease. */


void FUN_001036ec(unsigned int param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int uStack_18;
  unsigned int *puStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  puStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = onlineContextGetInstance();
  _ZN9Obj55b28cC1EPv(&uStack_18,temp_v0 + 0x58);
  temp_v1 = *param_3;
  onlineJobSetStateReady(temp_v1);
  sharedRefRelease(temp_v1);
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return;
}

} /* extern "C" */
