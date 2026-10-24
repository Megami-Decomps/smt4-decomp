/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103ab8` (_code @ 0x103ab8, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55aff4D1Ev(int *);
int FUN_002e9510(int, unsigned int);
int FUN_002e954a(int, unsigned int);
int _ZN9Obj55aff4aSERKS_(void);

extern unsigned char DAT_00538b28; /* 0x538b28 */

extern unsigned int _ZN9Obj55aff4C1EPKt(unsigned int *, unsigned char *);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: FUN_002e9510. */
/* Supplied declaration required: FUN_002e954a. */
/* Supplied declaration required: _ZN9Obj55aff4aSERKS_. */


void FUN_00103ab8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  temp_v0 = _ZN9Obj55aff4C1EPKt((unsigned int *)&uStack_18,&DAT_00538b28);
  FUN_002e9510(param_1 + 0x28,temp_v0);
  _ZN9Obj55aff4D1Ev(&uStack_18);
  temp_v0 = _ZN9Obj55aff4C1EPKt((unsigned int *)&uStack_18,&DAT_00538b28);
  FUN_002e954a(param_1 + 0x28,temp_v0);
  _ZN9Obj55aff4aSERKS_();
  _ZN9Obj55aff4D1Ev(&uStack_18);
  return;
}

} /* extern "C" */
