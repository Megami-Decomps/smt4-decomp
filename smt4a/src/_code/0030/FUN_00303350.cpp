/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303350` (_code @ 0x303350, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001326f6(int);
int FUN_003101ae(int *, int, int *, unsigned int **);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001326f6. */
/* Supplied declaration required: FUN_003101ae. */


unsigned long long FUN_00303350(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *temp_v1;
  int uStack_10;
  
  temp_v1 = *(unsigned int **)(param_1 + 0x10);
  temp_v0 = param_2;
  if (temp_v1 != (unsigned int *)0x0) {
    temp_v0 = *temp_v1;
    uStack_10 = param_4;
    FUN_003101ae(&uStack_10,param_1,&temp_v0,&temp_v1);
    puVar1 = *(unsigned int **)(param_1 + 0x10);
    *puVar1 = *(unsigned int *)(param_1 + 4);
    *(unsigned int **)(param_1 + 4) = puVar1;
    FUN_001326f6(param_1);
  }
  return romwright_piece_4_4(temp_v0,param_1);
}

} /* extern "C" */
