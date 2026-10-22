/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001239f2` (_code @ 0x1239f2, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(unsigned int *, int);
int _ZN9Obj55b28cD1Ev(unsigned int *);

typedef int romwright_code(...);
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int onlineContextGetInstance(void);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int *FUN_0030f044(int, unsigned int);


long long FUN_001239f2(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = onlineContextGetInstance();
  _ZN9Obj55b28cC1EPv(&uStack_18,temp_v0 + 0x58);
  if (*(int *)(param_1 + 8) != 0) {
    piVar2 = (int *)FUN_0030f044(param_1,0xb);
    if ((piVar2 == (int *)0x0) || (temp_v0 = (**(romwright_code **)(*piVar2 + 0x2c))(), temp_v0 == 0)) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = 1;
    }
    _ZN9Obj55b28cD1Ev(&uStack_18);
    return romwright_piece_4_4(uStack_18,temp_v1);
  }
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return (unsigned long long)uStack_18 << 0x20;
}

} /* extern "C" */
