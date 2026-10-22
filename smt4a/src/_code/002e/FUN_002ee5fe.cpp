/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee5fe` (_code @ 0x2ee5fe, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(unsigned int *, int);
int _ZN9Obj55b28cD1Ev(unsigned int *);
int FUN_002ee5b8(unsigned int, int);
int FUN_002fe1b8(int, unsigned int);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int onlineContextGetInstance(void);
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002ee5b8. */
/* Supplied declaration required: FUN_002fe1b8. */
extern int wstrNotEqualById(int, unsigned int);


long long FUN_002ee5fe(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v0 = onlineContextGetInstance();
  _ZN9Obj55b28cC1EPv(&uStack_20,temp_v0 + 0x58);
  param_1 = param_1 + 0x50;
  FUN_002fe1b8(param_1,param_2);
  if (param_1 != 0) {
    temp_v0 = wstrNotEqualById(param_1 + 4,param_2);
    if (temp_v0 != 0) {
      FUN_002ee5b8(param_3,param_1 + 4);
      _ZN9Obj55b28cD1Ev(&uStack_20);
      return romwright_piece_4_4(uStack_20,1);
    }
  }
  _ZN9Obj55b28cD1Ev(&uStack_20);
  return (unsigned long long)uStack_20 << 0x20;
}

} /* extern "C" */
