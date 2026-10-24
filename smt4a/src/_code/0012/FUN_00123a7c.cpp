/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123a7c` (_code @ 0x123a7c, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55aff4D1Ev(int *);
int _ZN9Obj55aff4aSERKS_(int, unsigned int);
int FUN_0030f000(...);

typedef int romwright_code(...);
extern unsigned char LAB_00123ad0; /* 0x123ad0 */

extern unsigned int _ZN9Obj55aff4C1EPKt(unsigned int *, unsigned char *);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: _ZN9Obj55aff4aSERKS_. */
/* Supplied declaration required: FUN_0030f000. */


int FUN_00123a7c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  piVar1 = (int *)FUN_0030f000();
  if (piVar1 != (int *)0x0) {
    temp_v0 = (**(romwright_code **)(*piVar1 + 8))();
    return temp_v0;
  }
  temp_v1 = _ZN9Obj55aff4C1EPKt((unsigned int *)&uStack_18,&LAB_00123ad0);
  piVar1 = (int *)FUN_0030f000(param_1,temp_v1);
  _ZN9Obj55aff4D1Ev(&uStack_18);
  if (piVar1 != (int *)0x0) {
    temp_v0 = (**(romwright_code **)(*piVar1 + 8))(piVar1);
    _ZN9Obj55aff4aSERKS_(temp_v0 + 0x28,param_2);
    *(char *)(temp_v0 + 0x30) = (char)param_3;
    return temp_v0;
  }
  return 0;
}

} /* extern "C" */
