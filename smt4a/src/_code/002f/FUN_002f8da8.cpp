/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8da8` (_code @ 0x2f8da8, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(int);
int FUN_002e6e34(int *, int *);
int _ZN9Obj55b28cD1Ev(int *);
int ringPop(int);

typedef int romwright_code(...);
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int ptrVectorFree(int);
extern int FUN_002f5966(int *);
/* Supplied declaration required: ringPop. */


unsigned long long FUN_002f8da8(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&uStack_18,param_1 + 1);
  while( 1 ) {
    temp_v0 = *param_1;
    if (*(int *)(temp_v0 + 0x18) == 0) break;
    piVar1 = *(int **)(*(int *)(temp_v0 + 4) + *(int *)(temp_v0 + 0x14) * 4);
    if (piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 4))();
    }
    ringPop(*param_1);
  }
  if (temp_v0 != 0) {
    temp_v0 = ptrVectorFree(temp_v0 + 4);
    asdOperatorDeleteArray(temp_v0 - 4);
  }
  *param_1 = 0;
  _ZN9Obj55b28cD1Ev(&uStack_18);
  temp_v0 = FUN_002f5966(param_1 + 1);
  return romwright_piece_4_4(uStack_18,temp_v0 - 4);
}

} /* extern "C" */
