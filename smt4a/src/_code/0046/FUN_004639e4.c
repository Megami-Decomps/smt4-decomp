/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004639e4` (_code @ 0x4639e4, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
} param_2_stack;

extern int FUN_00508d50(int, unsigned int *, unsigned int);


void FUN_004639e4(int param_1,unsigned int param_2)

{
  int temp_v0;
  unsigned short *puVar2;
  unsigned short *puVar3;
  unsigned short *puVar4;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned short uStack_110;
  unsigned short uStack_10e;
  unsigned short temp_v5 [124];
  
  temp_v0 = FUN_00508d50(param_1,(unsigned int *)&temp_v3,param_2);
  if (temp_v0 != 0) {
    *(unsigned int *)(param_1 + 0x5c) = temp_v3;
    *(unsigned int *)(param_1 + 0x60) = temp_v4;
    if (*(char *)(param_1 + 0xb94) == '\x03') {
      temp_v0 = *(int *)(param_1 + 0x20);
      if (temp_v0 != 0) {
        temp_v2 = 0;
        puVar2 = &uStack_110;
        puVar3 = &uStack_10e;
        puVar4 = temp_v5;
        do {
          temp_v1 = param_1 + temp_v2 * 6;
          *(unsigned short *)(temp_v1 + 0xcfc) = *puVar2;
          temp_v0 = temp_v0 - 1;
          temp_v2 = temp_v2 + 1;
          *(unsigned short *)(temp_v1 + 0xcfe) = *puVar3;
          *(unsigned short *)(temp_v1 + 0xd00) = *puVar4;
          puVar2 = puVar2 + 3;
          puVar3 = puVar3 + 3;
          puVar4 = puVar4 + 3;
        } while (temp_v0 != 0);
      }
      *(unsigned int *)(param_1 + 0xcf8) = temp_v3;
    }
    return;
  }
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x10);
  return;
}
