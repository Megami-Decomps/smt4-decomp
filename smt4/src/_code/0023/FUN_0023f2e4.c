/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f2e4` (_code @ 0x23f2e4, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_00152bec. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_002aa568. */


void FUN_0023f2e4(int param_1,int param_2,unsigned int param_3,unsigned short param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  
  temp_v1 = param_1 + param_2 * 0x50;
  *(unsigned short *)(temp_v1 + 0x14) = param_4;
  if (*(int *)(temp_v1 + 0x18) != 0) {
    temp_v0 = temp_v1 + 0x20;
    FUN_002aa568(temp_v0,param_3);
    if (temp_v0 == 0) {
      return;
    }
    if (*(int *)(temp_v1 + 0x18) != 0) {
      *(unsigned int *)(temp_v1 + 0x10) = 2;
      puVar2 = *(unsigned int **)(temp_v1 + 0x18);
      *puVar2 = *puVar2 | 2;
      *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
      if (-1 < *(int *)(*(int *)(*(int *)(temp_v1 + 0x18) + 8) + 0xc)) {
        FUN_00152bec();
      }
    }
  }
  else {
    if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 8) != 0)) {
      FUN_00297468(param_3,temp_v1 + 0x1c,1);
      *(unsigned int *)(temp_v1 + 0x10) = 4;
      return;
    }
    *(unsigned int *)(temp_v1 + 0x10) = 5;
  }
  strncpy(temp_v1 + 0x20,param_3,0x40);
  return;
}
