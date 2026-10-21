/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e789a` (_code @ 0x2e789a, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103f7c(unsigned int);
int FUN_002e6e34(unsigned int *, int);
int _ZN9Obj55b28cD1Ev(unsigned int *);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_00103f12(unsigned int);
/* Supplied declaration required: FUN_00103f7c. */
extern int onlineContextGetInstance(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */


long long FUN_002e789a(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = onlineContextGetInstance();
  FUN_002e6e34(&uStack_18,temp_v0 + 0x58);
  temp_v0 = FUN_00103f12(param_1);
  if (temp_v0 != 0) {
    FUN_00103f7c(param_1);
    _ZN9Obj55b28cD1Ev(&uStack_18);
    return romwright_piece_4_4(uStack_18,1);
  }
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return (unsigned long long)uStack_18 << 0x20;
}

} /* extern "C" */
