/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed0c0` (_code @ 0x2ed0c0, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned char *);
int _ZN9Obj55b28cD1Ev(int *);

extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */


void FUN_002ed0c0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&uStack_18,&DAT_0062e6a0);
  *(unsigned int *)(param_1 + 0xc) = param_2;
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return;
}

} /* extern "C" */
