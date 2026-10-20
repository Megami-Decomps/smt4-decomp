/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001111f8` (_code @ 0x1111f8, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, int);
int _ZN9Obj55b28cD1Ev(int *);
int FUN_002fbe90(unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002fbe90. */
extern unsigned int FUN_002fbfac(int);


void FUN_001111f8(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int iStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  iStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&iStack_18,param_2 + 0x105c);
  *(unsigned char *)(param_2 + 0x108d) = 1;
  temp_v0 = FUN_002fbfac(param_2 + 0x38);
  FUN_002fbe90(param_1,temp_v0);
  _ZN9Obj55b28cD1Ev(&iStack_18);
  return;
}

} /* extern "C" */
