/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c5da0` (_code @ 0x1c5da0, 0x208 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;


void FUN_001c5da0(int param_1,int param_2)

{
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar5;
  int *piVar6;
  unsigned char temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int *piVar11;
  
  temp_v5 = 0;
  *(int *)(param_1 + 0x98) = param_2;
  param_2 = param_2 + *(int *)(param_1 + 0x9c) * 4;
  *(int *)(param_1 + 0xb8) = param_2;
  param_2 = param_2 + (unsigned int)*(unsigned char *)(param_1 + 0xc) * 4;
  *(int *)(param_1 + 0xb4) = param_2;
  if (*(unsigned char *)(param_1 + 0xc) != 0) {
    do {
      temp_v3 = 0;
      temp_v1 = *(int *)(param_1 + temp_v5 * 4 + 0x10);
      temp_v2 = 0;
      if (temp_v2 < *(unsigned int *)(temp_v1 + 0x1c)) {
        do {
          temp_v0 = *(short *)(*(int *)(temp_v1 + 0x18) + temp_v1 + temp_v2 * 0x14);
          if (temp_v0 != 0) {
            if (temp_v0 == 1) {
              temp_v3 = temp_v3 + 2;
            }
            else if (temp_v0 == 2) {
              temp_v3 = temp_v3 + 6;
            }
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < *(unsigned int *)(temp_v1 + 0x1c));
      }
      param_2 = param_2 + temp_v3 * 4;
      *(int *)(*(int *)(param_1 + 0xb8) + temp_v5 * 4) = temp_v3;
      temp_v5 = (temp_v5 + 1) & 0xff;
    } while (temp_v5 < *(unsigned char *)(param_1 + 0xc));
  }
  temp_v5 = 0;
  *(unsigned int *)(param_1 + 0xbc) = 0;
  temp_v2 = (unsigned int)*(unsigned char *)(param_1 + 0xc);
  if (temp_v2 != 0) {
    do {
      temp_v1 = temp_v5 * 4;
      temp_v5 = (temp_v5 + 1) & 0xff;
      *(unsigned int *)(param_1 + 0xbc) =
           *(int *)(param_1 + 0xbc) + (unsigned int)*(unsigned char *)(*(int *)(param_1 + temp_v1 + 0x10) + 6);
    } while (temp_v5 < temp_v2);
  }
  *(int *)(param_1 + 0xb0) = param_2;
  temp_v5 = 0;
  temp_v4 = 0;
  temp_v6 = (temp_v2 - *(int *)(param_1 + 0xbc)) * (*(int *)(param_1 + 0xbc) + 1);
  if (temp_v2 != 0) {
    do {
      if (*(char *)(*(int *)(param_1 + temp_v4 * 4 + 0x10) + 6) == '\0') {
        temp_v1 = 0;
        *(unsigned int *)(*(int *)(param_1 + 0xb0) + temp_v5 * 4) = 0x26;
        temp_v2 = (unsigned int)*(unsigned char *)(param_1 + 0xc);
        temp_v5 = (temp_v5 + 1) & 0xff;
        do {
          temp_v3 = *(int *)(param_1 + temp_v1 * 4 + 0x10);
          if (*(char *)(temp_v3 + 6) != '\0') {
            if (*(char *)(temp_v3 + 0x14) == '\x01') {
              temp_v7 = 0x32;
            }
            else {
              temp_v7 = 0x30;
            }
            *(unsigned int *)(*(int *)(param_1 + 0xb0) + temp_v5 * 4) = temp_v7;
            temp_v5 = (temp_v5 + 1) & 0xff;
          }
          temp_v2 = temp_v2 - 1;
          temp_v1 = temp_v1 + 1;
        } while (0 < (int)temp_v2);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(unsigned char *)(param_1 + 0xc));
  }
  param_2 = param_2 + temp_v6 * 4;
  *(int *)(param_1 + 0xac) = param_2;
  if (temp_v6 != 0) {
    piVar5 = *(int **)(param_1 + 0xb0);
    piVar6 = piVar5 + -1;
    if ((temp_v6 & 1) != 0) {
      param_2 = param_2 + *piVar5 * 4;
      piVar6 = piVar5;
    }
    for (temp_v5 = (temp_v6 & 0x1ff) >> 1; temp_v5 != 0; temp_v5 = (temp_v5 - 1) & 0xff) {
      piVar5 = piVar6 + 1;
      piVar11 = piVar6 + 2;
      piVar6 = piVar6 + 2;
      param_2 = param_2 + *piVar5 * 4 + *piVar11 * 4;
    }
  }
  *(int *)(param_1 + 0xc0) = param_2;
  param_2 = param_2 + (unsigned int)*(unsigned char *)(param_1 + 0xc) * 4;
  *(int *)(param_1 + 0xc4) = param_2;
  *(unsigned int *)(param_1 + 200) = param_2 + (unsigned int)*(unsigned char *)(param_1 + 0xc) * 4 + 4;
  return;
}

} /* extern "C" */
