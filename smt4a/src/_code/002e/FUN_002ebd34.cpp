/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebd34` (_code @ 0x2ebd34, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned int *, int);
int _ZN9Obj55b28cD1Ev(unsigned int *);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */


long long FUN_002ebd34(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002e6e34(&uStack_20,param_1 + 4);
  for (temp_v0 = 0;
      (temp_v0 < *(unsigned short *)(param_1 + 0x40) &&
      (*(unsigned int *)(*(int *)(param_1 + 0x38) + temp_v0 * 4) != param_2)); temp_v0 = temp_v0 + 1) {
  }
  if (*(unsigned short *)(param_1 + 0x40) == temp_v0) {
    _ZN9Obj55b28cD1Ev(&uStack_20);
    return (unsigned long long)uStack_20 << 0x20;
  }
  _ZN9Obj55b28cD1Ev(&uStack_20);
  return romwright_piece_4_4(uStack_20,temp_v0);
}

} /* extern "C" */
