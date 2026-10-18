/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034d67c` (_code @ 0x34d67c, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp170; /* 0x170: local_170 */
} param_2_stack;

/* Supplied declaration required: FUN_0023abd4. */
/* Supplied declaration required: FUN_00310914. */
/* Supplied declaration required: FUN_00323804. */


void FUN_0034d67c(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_s0;
  unsigned char temp_v2 [520];
  unsigned char temp_v3 [8];
  unsigned char *temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [4];
  unsigned char temp_v7 [8];
  unsigned char *temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  *(unsigned int *)(param_1 + 4) = param_2;
  *(unsigned int *)(param_1 + 0x30) = in_s0;
  FUN_0023abd4(param_2,&temp_v10);
  if (*(int *)(param_1 + 8) != 0) {
    temp_v1 = 0;
    do {
      temp_v0 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + temp_v1 * 4);
      *(unsigned int *)(temp_v0 + 0x7c) = temp_v10;
      *(unsigned int *)(temp_v0 + 0x80) = uStack_24;
      *(unsigned int *)(temp_v0 + 0x84) = uStack_20;
      *(unsigned int *)(temp_v0 + 0x88) = *(unsigned int *)(temp_v0 + 0x88) | 0x800;
      temp_v9 = *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + temp_v1 * 4);
      temp_v4 = temp_v6;
      FUN_00310914(temp_v2,temp_v3);
      temp_v5 = *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + temp_v1 * 4);
      temp_v8 = temp_v3;
      FUN_00323804(temp_v7,*(unsigned int *)(param_1 + 4),temp_v2);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 3);
  }
  return;
}
