/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c9f4` (_code @ 0x34c9f4, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0023adc4. */


void FUN_0034c9f4(int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  
  *(unsigned int *)(param_1 + 0x34) = *param_2;
  *(unsigned int *)(param_1 + 0x38) = param_2[1];
  *(unsigned int *)(param_1 + 0x3c) = param_2[2];
  if (*(int *)(param_1 + 4) != 0) {
    FUN_0023adc4(*(int *)(param_1 + 4),&temp_v5);
    temp_v2 = *(float *)(param_1 + 0x34);
    temp_v3 = *(float *)(param_1 + 0x38);
    temp_v4 = *(float *)(param_1 + 0x3c);
    if (*(int *)(param_1 + 8) != 0) {
      temp_v1 = 0;
      do {
        temp_v0 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + temp_v1 * 4);
        temp_v1 = temp_v1 + 1;
        *(float *)(temp_v0 + 0x58) = temp_v5 + temp_v2;
        *(float *)(temp_v0 + 0x68) = temp_v6 + temp_v3;
        *(float *)(temp_v0 + 0x78) = temp_v7 + temp_v4;
        *(unsigned int *)(temp_v0 + 0x88) = *(unsigned int *)(temp_v0 + 0x88) | 0x800;
      } while (temp_v1 < 3);
    }
  }
  return;
}
