/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2af4` (_code @ 0x3f2af4, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;


void FUN_003f2af4(int param_1,int param_2)

{
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  short temp_v7;
  short temp_v8;
  int temp_v9;
  int temp_v10;
  
  do {
    temp_v3 = param_1 + param_2 * 2;
    temp_v2 = param_2;
    if (-1 < *(short *)(temp_v3 + 0x3006)) {
      while (temp_v2 = temp_v2 + 1, temp_v2 < 0xc) {
        temp_v4 = param_1 + temp_v2 * 2;
        temp_v0 = *(short *)(temp_v4 + 0x3006);
        temp_v5 = (int)temp_v0;
        if (-1 < temp_v5) {
          temp_v1 = *(short *)(temp_v3 + 0x3006);
          temp_v10 = *(int *)(param_1 + 0x1ffc);
          temp_v9 = temp_v10 + temp_v1 * 0x408 + 0x164;
          temp_v6 = temp_v5 * 0x408 + 0x164 + temp_v10;
          temp_v7 = *(short *)(temp_v9 + 0x10a) + *(short *)(temp_v9 + 0x22c);
          temp_v8 = *(short *)(temp_v6 + 0x10a) + *(short *)(temp_v6 + 0x22c);
          if ((temp_v7 < temp_v8) ||
             ((temp_v7 == temp_v8 &&
              (*(short *)(temp_v10 + temp_v5 * 0x408 + 8) < *(short *)(temp_v10 + temp_v1 * 0x408 + 8))))) {
            *(short *)(temp_v3 + 0x3006) = temp_v0;
            *(short *)(temp_v4 + 0x3006) = temp_v1;
          }
        }
      }
    }
    param_2 = param_2 + 1;
  } while (param_2 < 0xb);
  return;
}
