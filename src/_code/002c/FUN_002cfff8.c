/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cfff8` (_code @ 0x2cfff8, 0x1d4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;


unsigned int FUN_002cfff8(int param_1,short *param_2)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  puVar2 = (unsigned int *)(param_1 + 0x5758);
  temp_v2 = *puVar2;
  if (0 < (int)temp_v2) {
    temp_v0 = temp_v2 & 1;
    if (temp_v0 == 1) {
      *(unsigned char *)(param_1 + 0x5788) = 0;
    }
    temp_v1 = (unsigned int)(temp_v0 == 1);
    if ((int)temp_v0 < (int)temp_v2) {
      do {
        temp_v3 = temp_v1 + 1;
        *(unsigned char *)(param_1 + temp_v1 * 0x2c + 0x5788) = 0;
        temp_v1 = temp_v1 + 2;
        *(unsigned char *)(param_1 + temp_v3 * 0x2c + 0x5788) = 0;
        temp_v0 = temp_v0 + 2;
      } while ((int)temp_v0 < (int)*puVar2);
    }
  }
  temp_v2 = *puVar2;
  temp_v3 = 0;
  if (temp_v3 < (int)temp_v2) {
    do {
      temp_v4 = param_1 + temp_v3 * 0x2c;
      if ((((*(short *)(temp_v4 + 0x5760) == *param_2) &&
           (*(float *)(temp_v4 + 0x5768) == *(float *)(param_2 + 4))) &&
          (*(float *)(temp_v4 + 0x576c) == *(float *)(param_2 + 6))) &&
         (*(float *)(temp_v4 + 0x5770) == *(float *)(param_2 + 8))) {
        *(unsigned char *)(param_1 + temp_v3 * 0x2c + 0x5778) = 1;
        *(short *)(temp_v4 + 0x5766) = param_2[3];
        return *(unsigned int *)(temp_v4 + 0x577c);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < (int)temp_v2);
  }
  param_1 = param_1 + temp_v2 * 0x2c;
  *(short *)(param_1 + 0x5760) = *param_2;
  *(short *)(param_1 + 0x5762) = param_2[1];
  *(short *)(param_1 + 0x5764) = param_2[2];
  *(short *)(param_1 + 0x5766) = param_2[3];
  *(unsigned int *)(param_1 + 0x5768) = *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(param_1 + 0x576c) = *(unsigned int *)(param_2 + 6);
  *(unsigned int *)(param_1 + 0x5770) = *(unsigned int *)(param_2 + 8);
  *(unsigned int *)(param_1 + 0x5774) = *(unsigned int *)(param_2 + 10);
  *(unsigned char *)(param_1 + 0x5778) = 1;
  *(unsigned char *)(param_1 + 0x5788) = 0;
  *(unsigned int *)(param_1 + 0x577c) = temp_v2;
  temp_v2 = *puVar2;
  *puVar2 = temp_v2 + 1;
  return temp_v2;
}
