/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00199d58` (_code @ 0x199d58, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

/* Supplied declaration required: FUN_001a38c8. */


void FUN_00199d58(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    if ((int)(param_2[1] << 10) < 0) {
      (*(romwright_code *)**(unsigned int **)*param_2)((unsigned int *)*param_2,param_4);
    }
    else {
      temp_v0 = param_2[2];
      temp_v1 = param_2[3];
      puVar3 = *(unsigned int **)(*(int *)(temp_v1 + 0x158) + 0xc);
      for (puVar2 = *(unsigned int **)(*(int *)(temp_v1 + 0x158) + 8); puVar2 != puVar3;
          puVar2 = puVar2 + 1) {
        (*(romwright_code *)**(unsigned int **)*puVar2)((unsigned int *)*puVar2,temp_v1,temp_v0,param_4);
      }
      FUN_001a38c8(param_5,temp_v0,temp_v1);
      puVar3 = *(unsigned int **)(*(int *)(temp_v1 + 0x15c) + 0xc);
      for (puVar2 = *(unsigned int **)(*(int *)(temp_v1 + 0x15c) + 8); puVar2 != puVar3;
          puVar2 = puVar2 + 1) {
        (*(romwright_code *)**(unsigned int **)*puVar2)((unsigned int *)*puVar2,temp_v1,temp_v0,param_4);
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
                    /* WARNING: Treating indirect jump as return */
  return;
}
