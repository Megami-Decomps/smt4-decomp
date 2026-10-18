/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00420e4c` (_code @ 0x420e4c, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_00401b50. */
/* Supplied declaration required: FUN_0040619c. */


void FUN_00420e4c(int param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  
  *(unsigned int *)(param_1 + 0x34) = *param_2;
  *(unsigned int *)(param_1 + 0x38) = param_2[1];
  *(unsigned int *)(param_1 + 0x3c) = param_2[2];
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00401b50(*(int *)(param_1 + 4),&temp_v3);
    temp_v3 = temp_v3 + *(float *)(param_1 + 0x34);
    temp_v4 = temp_v4 + *(float *)(param_1 + 0x38);
    temp_v5 = temp_v5 + *(float *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 8) != 0) {
      temp_v1 = 0;
      temp_v2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x10);
      if (0 < temp_v2) {
        do {
          temp_v0 = *(int *)(*(int *)(param_1 + 8) + 8);
          FUN_0040619c(temp_v0,temp_v1);
          if (temp_v0 != 0) {
            FUN_003fd76c();
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < temp_v2);
      }
    }
  }
  return;
}
