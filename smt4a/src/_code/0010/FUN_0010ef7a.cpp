/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010ef7a` (_code @ 0x10ef7a, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(int *, int *);
int _ZN9Obj55b28cD1Ev(int *);
int ringPop(void);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: ringPop. */


unsigned long long FUN_0010ef7a(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  temp_v1 = 0;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  _ZN9Obj55b28cC1EPv(&uStack_18,param_1 + 1);
  temp_v0 = *param_1;
  if (*(int *)(temp_v0 + 0x18) != 0) {
    temp_v1 = *(int *)(*(int *)(temp_v0 + 4) + *(int *)(temp_v0 + 0x14) * 4);
    ringPop();
    *(unsigned int *)(temp_v1 + 0x10) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = 0;
  }
  else {
    param_1[0xd] = param_1[0xd] + 1;
  }
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return romwright_piece_4_4(uStack_18,temp_v1);
}

} /* extern "C" */
