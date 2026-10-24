/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6eda` (_code @ 0x2f6eda, 0x6a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineContextGetInstance(void);
int _ZN9Obj55b28cC1EPv(unsigned int *, int);
int _ZN9Obj55b28cD1Ev(unsigned int *);
int sharedRefRelease(void);
int sharedRefAddRef(void);
int FUN_002e78d0(unsigned int, unsigned int, int);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_0011c750(int, unsigned int, int);
/* Supplied declaration required: onlineContextGetInstance. */
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: sharedRefAddRef. */
extern int _Znwj(unsigned int);
/* Supplied declaration required: FUN_002e78d0. */
extern int onlineOwnerHasPendingJob(int);


long long FUN_002f6eda(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = onlineContextGetInstance();
  _ZN9Obj55b28cC1EPv(&uStack_18,temp_v0 + 0x58);
  temp_v0 = onlineOwnerHasPendingJob(param_1);
  if (temp_v0 != 0) {
    _ZN9Obj55b28cD1Ev(&uStack_18);
    return (unsigned long long)uStack_18 << 0x20;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    sharedRefRelease();
    *(unsigned int *)(param_1 + 0x9c) = 0;
  }
  temp_v0 = _Znwj(0xd0);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0011c750(temp_v0,*(unsigned int *)(*(int *)(param_1 + 0x70) + 0x44),param_1);
  }
  *(unsigned int *)(param_1 + 0x9c) = temp_v1;
  sharedRefAddRef();
  temp_v1 = onlineContextGetInstance();
  FUN_002e78d0(temp_v1,*(unsigned int *)(param_1 + 0x9c),0);
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return romwright_piece_4_4(uStack_18,1);
}

} /* extern "C" */
