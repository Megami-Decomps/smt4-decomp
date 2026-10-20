/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010cf68` (_code @ 0x10cf68, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012e414(int *, int *, int *, int *);
int asdOperatorDeleteArray(...);
int FUN_002f6e54(int *, int *, int *, int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0012e414. */
/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_002f6e54. */


unsigned long long FUN_0010cf68(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int uStack_10;
  
  temp_v2 = *(int *)(param_1 + 0x30);
  piVar3 = (int *)(param_1 + 0x20);
  temp_v1 = param_2;
  uStack_10 = param_4;
  if (temp_v2 != 0) {
    temp_v1 = *(unsigned int *)(temp_v2 + 8);
    FUN_0012e414(&uStack_10,piVar3,&temp_v1,&temp_v2);
    temp_v0 = *(int *)(param_1 + 0x30);
    *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = temp_v0;
    while (piVar2 = (int *)*piVar3, piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      asdOperatorDeleteArray(piVar2[2]);
      asdOperatorDeleteArray(piVar2);
    }
  }
  piVar3 = (int *)(param_1 + 4);
  temp_v2 = *(int *)(param_1 + 0x14);
  if (temp_v2 != 0) {
    temp_v1 = *(unsigned int *)(temp_v2 + 8);
    FUN_002f6e54(&uStack_10,piVar3,&temp_v1,&temp_v2);
    temp_v0 = *(int *)(param_1 + 0x14);
    *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(param_1 + 8);
    *(int *)(param_1 + 8) = temp_v0;
    while (piVar2 = (int *)*piVar3, piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      asdOperatorDeleteArray(piVar2[2]);
      asdOperatorDeleteArray(piVar2);
    }
  }
  return romwright_piece_4_4(temp_v1,param_1);
}

} /* extern "C" */
