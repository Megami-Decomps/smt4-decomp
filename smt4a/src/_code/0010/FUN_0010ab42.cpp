/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ab42` (_code @ 0x10ab42, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned int *, int);
int _ZN9Obj55b28cD1Ev(unsigned int *);

typedef int romwright_code(...);
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_0010aafa(int *, unsigned int);
extern int onlineContextGetInstance(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */


long long FUN_0010ab42(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = onlineContextGetInstance();
  FUN_002e6e34(&uStack_18,temp_v0 + 0x58);
  temp_v0 = FUN_0010aafa(param_1,param_2);
  if (temp_v0 != 0) {
    (**(romwright_code **)(*param_1 + 0x1c))(param_1);
    _ZN9Obj55b28cD1Ev(&uStack_18);
    return romwright_piece_4_4(uStack_18,1);
  }
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return (unsigned long long)uStack_18 << 0x20;
}

} /* extern "C" */
