/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031113e` (_code @ 0x31113e, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(int *, int);
int _ZN9Obj55b28cD1Ev(int *);
int resourceRetireAndQueueTarget(int, unsigned int);

/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: resourceRetireAndQueueTarget. */


void FUN_0031113e(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  _ZN9Obj55b28cC1EPv(&uStack_18,param_1 + 0x4c);
  resourceRetireAndQueueTarget(param_1,param_2);
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return;
}

} /* extern "C" */
