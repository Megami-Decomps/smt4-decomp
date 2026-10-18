/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b0cf4` (_code @ 0x3b0cf4, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_003faab4. */


void FUN_003b0cf4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  unsigned char temp_v5 [4];
  
  temp_v4 = *(int *)(*(int *)(param_1 + 0x1428) + 8);
  while (temp_v4 != *(int *)(param_1 + 0x1428)) {
    temp_v0 = *(int *)(temp_v4 + 0xc);
    if (*(int *)(temp_v4 + 0xc) != 0) {
      do {
        temp_v2 = temp_v0;
        temp_v0 = *(int *)(temp_v2 + 8);
      } while (*(int *)(temp_v2 + 8) != 0);
    }
    else {
      temp_v0 = *(int *)(temp_v4 + 4);
      temp_v2 = temp_v4;
      if (temp_v4 == *(int *)(temp_v0 + 0xc)) {
        do {
          temp_v2 = temp_v0;
          temp_v0 = *(int *)(temp_v2 + 4);
        } while (temp_v2 == *(int *)(temp_v0 + 0xc));
      }
      if (*(int *)(temp_v2 + 0xc) != temp_v0) {
        temp_v2 = temp_v0;
      }
    }
    temp_v0 = *(int *)(*(int *)(temp_v4 + 0x18) + 0x10);
    temp_v1 = (unsigned int)*(unsigned char *)(temp_v0 + 0x70);
    temp_v3 = temp_v1 == 0;
    if (temp_v3) {
      temp_v1 = *(unsigned int *)(temp_v0 + 0x48);
    }
    if (!(temp_v3 && temp_v1 == 0)) {
      *(unsigned char *)(temp_v0 + 0x70) = 0;
      temp_v4 = temp_v2;
    }
    else {
      FUN_003faab4(temp_v5,param_1 + 0x1414,&temp_v4);
      temp_v4 = temp_v2;
    }
  }
  return;
}
