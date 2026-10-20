/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115a9a` (_code @ 0x115a9a, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned int);
int _ZN9Obj55b28cD1Ev(int *);
int FUN_002f87e8(unsigned int, int, int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002f87e8. */


unsigned long long FUN_00115a9a(unsigned int param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int uStack_20;
  int iStack_1c;
  unsigned int *puStack_18;
  int temp_v0;
  
  uStack_20 = param_1;
  iStack_1c = param_2;
  puStack_18 = param_3;
  temp_v0 = param_4;
  FUN_002e6e34(&uStack_20,*(unsigned int *)(param_2 + 0x20));
  temp_v0 = *param_3;
  FUN_002f87e8(param_1,param_2,&temp_v0);
  _ZN9Obj55b28cD1Ev(&uStack_20);
  return romwright_piece_4_4(iStack_1c,uStack_20);
}

} /* extern "C" */
