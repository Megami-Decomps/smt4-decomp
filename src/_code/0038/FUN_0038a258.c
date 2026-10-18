/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038a258` (_code @ 0x38a258, 0xe8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
} param_1_stack;

extern unsigned char LAB_0038be64; /* 0x38be64 */

/* Supplied declaration required: FUN_00262ac0. */
/* Supplied declaration required: FUN_002a13d0. */
extern int FUN_002a17c0(unsigned int *);
/* Supplied declaration required: FUN_002c5f58. */
/* Supplied declaration required: FUN_0038b8f0. */


void FUN_0038a258(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int uStack_30;
  unsigned int temp_v8;
  unsigned int uStack_28;
  unsigned int uStack_24;
  int temp_v9;
  unsigned int uStack_1c;
  unsigned int temp_v10;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  FUN_002a13d0(&temp_v7,0);
  temp_v5 = *(int *)(param_1 + 0x310);
  puVar1 = (unsigned int *)(temp_v5 * 0x50 + 8);
  FUN_00262ac0();
  puVar2 = (unsigned int *)0x0;
  if (puVar1 != (unsigned int *)0x0) {
    puVar2 = puVar1 + 2;
    *puVar1 = 0x50;
    puVar1[1] = temp_v5;
    FUN_002c5f58(puVar2,&LAB_0038be64,0x50,temp_v5);
  }
  *(unsigned int **)(param_1 + 0x318) = puVar2;
  temp_v5 = 0;
  temp_v1 = temp_v8;
  temp_v2 = uStack_28;
  temp_v3 = temp_v7;
  temp_v4 = uStack_30;
  temp_v6 = uStack_24;
  if (0 < *(int *)(param_1 + 0x310)) {
    do {
      FUN_0038b8f0(&temp_v9,*(int *)(param_1 + 0x318) + temp_v5 * 0x50,param_1 + temp_v5 * 0x18 + 0x10)
      ;
      temp_v0 = FUN_002a17c0((unsigned int *)&temp_v9);
      temp_v1 = temp_v10;
      temp_v2 = uStack_14;
      temp_v3 = temp_v9;
      temp_v4 = uStack_1c;
      temp_v6 = uStack_10;
      if (temp_v0 != 0) break;
      temp_v5 = temp_v5 + 1;
      temp_v1 = temp_v8;
      temp_v2 = uStack_28;
      temp_v3 = temp_v7;
      temp_v4 = uStack_30;
      temp_v6 = uStack_24;
    } while (temp_v5 < *(int *)(param_1 + 0x310));
  }
  *(unsigned int *)(param_1 + 0x324) = temp_v1;
  *(unsigned int *)(param_1 + 0x328) = temp_v2;
  *(unsigned int *)(param_1 + 0x32c) = temp_v6;
  *(unsigned int *)(param_1 + 0x31c) = temp_v3;
  *(unsigned int *)(param_1 + 800) = temp_v4;
  return;
}
