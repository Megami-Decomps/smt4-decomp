/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7f00` (_code @ 0x2f7f00, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00115560(int, unsigned int);
int _ZN9Obj55b28cC1EPv(int *, int);
int _ZN9Obj55b28cD1Ev(int *);

extern unsigned char g_listenerTable; /* 0x594ad8 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00115560. */
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */


unsigned long long FUN_002f7f00(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  _ZN9Obj55b28cC1EPv(&uStack_18,param_1 + 4);
  temp_v1 = 0;
  while ((temp_v0 = *(int *)(temp_v1 * 4 + param_1 + 0x34), temp_v0 == 0 ||
         (*(char *)(temp_v0 + 0x34) != '\x02'))) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 8) {
      _ZN9Obj55b28cD1Ev(&uStack_18);
      temp_v0 = 0;
      if ((*(int *)((unsigned char *)&g_listenerTable + 0x48)) != 0) {
        FUN_00115560(param_1,param_2);
        temp_v0 = param_1;
      }
      return romwright_piece_4_4(uStack_18,temp_v0);
    }
  }
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return romwright_piece_4_4(uStack_18,1);
}

} /* extern "C" */
