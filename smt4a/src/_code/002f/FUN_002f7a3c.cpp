/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7a3c` (_code @ 0x2f7a3c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55aff4D1Ev(int *);
int _ZN9Obj55aff4aSERKS_(unsigned int, int *);
int FUN_00310e7a(int *, unsigned int, unsigned int);

/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: _ZN9Obj55aff4aSERKS_. */
/* Supplied declaration required: FUN_00310e7a. */


unsigned int FUN_002f7a3c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int uStack_10;
  unsigned int uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_00310e7a(&uStack_10,param_1,param_2);
  _ZN9Obj55aff4aSERKS_(param_1,&uStack_10);
  _ZN9Obj55aff4D1Ev(&uStack_10);
  return param_1;
}

} /* extern "C" */
