/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124504` (_code @ 0x124504, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(unsigned int *, int);
int _ZN9Obj55b28cD1Ev(unsigned int *);

extern unsigned char g_flagBlock; /* 0x594958 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */


long long FUN_00124504(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  if ((*(signed char *)((unsigned char *)&g_flagBlock + 0x14)) != '\0') {
    uStack_18 = param_2;
    uStack_14 = param_3;
    uStack_10 = param_4;
    _ZN9Obj55b28cC1EPv(&uStack_18,param_1 + 0xb8);
    temp_v0 = *(unsigned int *)(param_1 + 0x1e8);
    temp_v1 = *(unsigned int *)(param_1 + 0xf8);
    _ZN9Obj55b28cD1Ev(&uStack_18);
    return romwright_piece_4_4(uStack_18,(unsigned int)(temp_v0 < temp_v1));
  }
  if (*(unsigned int *)(param_1 + 0x1e8) < *(unsigned int *)(param_1 + 0xf8)) {
    return romwright_piece_4_4(param_2,1);
  }
  return (unsigned long long)param_2 << 0x20;
}

} /* extern "C" */
