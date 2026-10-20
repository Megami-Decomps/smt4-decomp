/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001165c0` (_code @ 0x1165c0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, int);
int _ZN9Obj55b28cD1Ev(int *);

typedef int romwright_code(...);
extern unsigned char g_systemTable; /* 0x59935c */

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */


void FUN_001165c0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(&uStack_18,temp_v0 + 0x58);
  piVar1 = (*(int * *)((unsigned char *)&g_systemTable + 0xc));
  if (((*(int * *)((unsigned char *)&g_systemTable + 0xc)) != (int *)0x0) &&
     (temp_v0 = (**(romwright_code **)(*(*(int * *)((unsigned char *)&g_systemTable + 0xc)) + 0x14))((*(int * *)((unsigned char *)&g_systemTable + 0xc))), temp_v0 != 0)) {
    (**(romwright_code **)(*piVar1 + 0x10))(piVar1,param_1);
  }
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return;
}

} /* extern "C" */
