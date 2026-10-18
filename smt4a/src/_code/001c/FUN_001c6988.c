/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c6988` (_code @ 0x1c6988, 0x1ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001c6988_arg0 fn_001c6988_arg0;
struct fn_001c6988_arg0 {
    unsigned char pad_0x0[0xc];
    byte field_0xc; /* +0xc */
    unsigned char pad_0xd[0xa3];
    undefined4 *field_0xb0; /* +0xb0 */
    unsigned char pad_0xb4[0x4];
    undefined4 *field_0xb8; /* +0xb8 */
    int field_0xbc; /* +0xbc */
    void *field_0xc0; /* +0xc0 */
    undefined4 *field_0xc4; /* +0xc4 */
    void *field_0xc8; /* +0xc8 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;


void FUN_001c6988(fn_001c6988_arg0 *param_1)

{
  int *piVar1;
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  *(unsigned int *)param_1->field_0xc0 = 0;
  if (param_1->field_0xc < 2) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = ~(unsigned int)param_1->field_0xc & 1;
    if (temp_v1 == 1) {
      *(unsigned int *)((int)param_1->field_0xc0 + 4) = *param_1->field_0xb8;
    }
  }
  temp_v1 = temp_v1 + 1;
  if (temp_v1 < param_1->field_0xc) {
    do {
      temp_v3 = temp_v1 * 4;
      temp_v4 = *(int *)((int)param_1->field_0xc0 + (temp_v1 * 4 - 4)) + param_1->field_0xb8[temp_v1 - 1];
      *(int *)((int)param_1->field_0xc0 + temp_v1 * 4) = temp_v4;
      piVar1 = param_1->field_0xb8 + temp_v1;
      temp_v1 = temp_v1 + 2;
      *(int *)((int)param_1->field_0xc0 + temp_v3 + 4) = temp_v4 + *piVar1;
    } while ((int)temp_v1 < (int)(unsigned int)param_1->field_0xc);
  }
  temp_v1 = 1;
  temp_v5 = 0;
  *param_1->field_0xc4 = 0;
  temp_v2 = 1;
  if (temp_v2 < param_1->field_0xc + 1) {
    do {
      if (*(char *)(*(int *)(&param_1->field_0xc + temp_v2 * 4) + 6) != '\0') {
        param_1->field_0xc4[temp_v2] = temp_v1;
        temp_v1 = (temp_v1 + 1) & 0xff;
      }
      else {
        param_1->field_0xc4[temp_v2] = temp_v5;
        temp_v5 = param_1->field_0xbc + temp_v5 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < param_1->field_0xc + 1);
  }
  temp_v0 = param_1->field_0xc;
  temp_v3 = param_1->field_0xbc;
  *(unsigned int *)param_1->field_0xc8 = 0;
  temp_v1 = ((unsigned int)temp_v0 - temp_v3) * (temp_v3 + 1);
  if (temp_v1 >= 2) {
    if ((~temp_v1 & 1) == 1) {
      *(unsigned int *)((int)param_1->field_0xc8 + 4) = *param_1->field_0xb0;
    }
    for (temp_v2 = (~temp_v1 & 1) + 1; temp_v2 < temp_v1; temp_v2 = temp_v2 + 2) {
      temp_v3 = *(int *)((int)param_1->field_0xc8 + (temp_v2 * 4 - 4)) + param_1->field_0xb0[temp_v2 - 1];
      *(int *)((int)param_1->field_0xc8 + temp_v2 * 4) = temp_v3;
      *(int *)((int)param_1->field_0xc8 + temp_v2 * 4 + 4) = temp_v3 + param_1->field_0xb0[temp_v2];
    }
  }
  return;
}
