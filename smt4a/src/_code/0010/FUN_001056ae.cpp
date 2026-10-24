/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001056ae` (_code @ 0x1056ae, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(int *, int);
int _ZN9Obj55b28cD1Ev(int *);
int FUN_002ebd94(int, unsigned int);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_00120f44(int, int, unsigned int, unsigned int);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int _Znwj(unsigned int);
/* Supplied declaration required: FUN_002ebd94. */


unsigned long long FUN_001056ae(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  _ZN9Obj55b28cC1EPv(&uStack_20,param_1 + 4);
  for (temp_v2 = 0;
      (temp_v2 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x40) &&
      (*(int *)(*(int *)(param_1 + 0x38) + temp_v2 * 4) != 0)); temp_v2 = temp_v2 + 1) {
  }
  temp_v0 = _Znwj(0x14);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_00120f44(temp_v0,param_1,param_2,param_3);
  }
  temp_v2 = temp_v2 * 4;
  *(unsigned int *)(*(int *)(param_1 + 0x38) + temp_v2) = temp_v1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  FUN_002ebd94(param_1,*(unsigned int *)(*(int *)(param_1 + 0x38) + temp_v2));
  temp_v1 = *(unsigned int *)(*(int *)(param_1 + 0x38) + temp_v2);
  _ZN9Obj55b28cD1Ev(&uStack_20);
  return romwright_piece_4_4(uStack_20,temp_v1);
}

} /* extern "C" */
