/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fnd_detail_CreateHeap` (_code @ 0x1285bc, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0013a4f4. */


int nn_fnd_detail_CreateHeap(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = param_2 + 3;
  temp_v2 = temp_v1 & 0xfffffffc;
  temp_v3 = (param_2 + param_3) & 0xfffffffc;
  if (temp_v2 <= temp_v3) {
    temp_v1 = temp_v3 - temp_v2;
  }
  if (!(temp_v2 <= temp_v3 && temp_v1 >= 0x14)) {
    param_1 = 0;
  }
  else {
    FUN_0013a4f4(param_1,0x45585048,temp_v2,temp_v3,param_4);
    *(unsigned short *)(param_1 + 0x34) = 0;
    *(unsigned short *)(param_1 + 0x36) = 0;
    puVar3 = *(unsigned short **)(param_1 + 0x18);
    temp_v0 = *(int *)(param_1 + 0x1c);
    *puVar3 = 0x4652;
    puVar3[1] = 0;
    *(int *)(puVar3 + 2) = (temp_v0 - (int)puVar3) - 0x10;
    *(unsigned int *)(puVar3 + 4) = 0;
    *(unsigned int *)(puVar3 + 6) = 0;
    *(unsigned short **)(param_1 + 0x24) = puVar3;
    *(unsigned short **)(param_1 + 0x28) = puVar3;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    *(unsigned int *)(param_1 + 0x30) = 0;
  }
  return param_1;
}
