/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e99f8` (_code @ 0x2e99f8, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(...);
int FUN_003103e0(int *, int, int);
int FUN_003103fa(int *, int *, int *, int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_003103e0. */
/* Supplied declaration required: FUN_003103fa. */


unsigned long long FUN_002e99f8(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int uStack_10;
  
  temp_v1 = param_1[4];
  temp_v0 = param_2;
  if (temp_v1 != 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 8);
    uStack_10 = param_4;
    FUN_003103fa(&uStack_10,param_1,&temp_v0,&temp_v1);
    FUN_003103e0(param_1,param_1[4],0);
    while (piVar1 = (int *)*param_1, piVar1 != (int *)0x0) {
      *param_1 = *piVar1;
      asdOperatorDeleteArray(piVar1[2]);
      asdOperatorDeleteArray(piVar1);
    }
  }
  return romwright_piece_4_4(temp_v0,param_1);
}

} /* extern "C" */
