/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010485a` (_code @ 0x10485a, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(int *, unsigned int);
int _ZN9Obj55b28cD1Ev(int *);
int FUN_002ea774(int, unsigned int, unsigned int, int);
int FUN_002ea82a(void);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_00104d4c(int);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int onlineGetActiveLock(void);
/* Supplied declaration required: FUN_002ea774. */
/* Supplied declaration required: FUN_002ea82a. */


unsigned long long FUN_0010485a(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = onlineGetActiveLock();
  _ZN9Obj55b28cC1EPv(&uStack_18,temp_v0);
  temp_v0 = FUN_00104d4c(param_1);
  FUN_002ea774(param_1,param_2,temp_v0,1);
  if (param_1 != 0) {
    FUN_002ea82a();
  }
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return romwright_piece_4_4(uStack_18,param_1);
}

} /* extern "C" */
