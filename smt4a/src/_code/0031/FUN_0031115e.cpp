/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031115e` (_code @ 0x31115e, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned char *);
int _ZN9Obj55b28cD1Ev(int *);
int ringAdvance(unsigned char *);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int *FUN_002fea6a(unsigned char *);
/* Supplied declaration required: ringAdvance. */


unsigned long long FUN_0031115e(unsigned char *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&uStack_18,param_1 + 0x4c);
  temp_v1 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar2 = (unsigned int *)FUN_002fea6a(param_1 + 4);
    temp_v1 = *puVar2;
    ringAdvance(param_1 + 4);
    if (*(int *)(param_1 + 0x1c) != 0) {
      temp_v0 = 0;
      *param_1 = temp_v0 ^ 1;
      param_1[1] = *(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x20);
      _ZN9Obj55b28cD1Ev(&uStack_18);
      return romwright_piece_4_4(uStack_18,temp_v1);
    }
  }
  temp_v0 = 1;
  *param_1 = temp_v0 ^ 1;
  param_1[1] = *(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x20);
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return romwright_piece_4_4(uStack_18,temp_v1);
}

} /* extern "C" */
