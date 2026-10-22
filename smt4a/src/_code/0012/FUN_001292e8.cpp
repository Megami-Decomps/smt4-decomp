/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001292e8` (_code @ 0x1292e8, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(int *, int);
int _ZN9Obj55b28cD1Ev(int *);
int FUN_0030cd24(int, int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_0030cd24. */


unsigned long long FUN_001292e8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int iStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  int temp_v0;
  
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  temp_v0 = param_4;
  _ZN9Obj55b28cC1EPv(&iStack_18,param_1 + 0x10);
  while (*(int *)(param_1 + 0x54) != 0) {
    temp_v0 = *(unsigned int *)(*(int *)(param_1 + 0x50) + 8);
    FUN_0030cd24(param_1 + 0x40,&temp_v0);
  }
  _ZN9Obj55b28cD1Ev(&iStack_18);
  return romwright_piece_4_4(uStack_14,iStack_18);
}

} /* extern "C" */
