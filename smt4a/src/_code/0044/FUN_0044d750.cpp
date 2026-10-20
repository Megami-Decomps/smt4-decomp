/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044d750` (_code @ 0x44d750, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0044d750_arg0 fn_0044d750_arg0;
struct fn_0044d750_arg0 {
    unsigned char pad_0x0[0x10];
    void *field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x8];
    uint field_0x20; /* +0x20 */
    uint field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x8];
    uint field_0x30; /* +0x30 */
    uint field_0x34; /* +0x34 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void FUN_0044d750(fn_0044d750_arg0 *param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v0 = param_1->field_0x24;
  temp_v4 = param_1->field_0x20;
  temp_v1 = temp_v0;
  if (temp_v4 < temp_v0) {
    temp_v1 = (temp_v0 - temp_v4) * 0x10000000;
  }
  temp_v5 = ((int)(temp_v0 - temp_v4) >> 3) + 1;
  if (temp_v4 < temp_v0) {
    temp_v1 = temp_v1 >> 0x1f;
  }
  else {
    temp_v1 = 0;
  }
  for (temp_v2 = temp_v1 + 1; temp_v2 < (int)temp_v5; temp_v2 = temp_v2 + 2) {
  }
  param_1->field_0x24 = temp_v4;
  temp_v1 = param_1->field_0x34;
  temp_v0 = param_1->field_0x30;
  if (temp_v0 < temp_v1) {
    temp_v5 = temp_v1 - temp_v0;
  }
  if (temp_v0 < temp_v1) {
    temp_v5 = temp_v5 << 0x1c;
  }
  if (temp_v0 < temp_v1) {
    temp_v5 = temp_v5 >> 0x1f;
  }
  else {
    temp_v5 = 0;
  }
  for (temp_v2 = temp_v5 + 1; temp_v2 < ((int)(temp_v1 - temp_v0) >> 3) + 1; temp_v2 = temp_v2 + 2) {
  }
  param_1->field_0x34 = temp_v0;
  temp_v2 = 1;
  temp_v6 = param_1->field_0x14 - (int)param_1->field_0x10;
  if (temp_v6 / 0xc + 1 >= 2) {
    puVar1 = (unsigned int *)param_1->field_0x10;
    do {
      temp_v3 = puVar1[1];
      temp_v2 = temp_v2 + 1;
      *(unsigned int *)(temp_v3 + 0xc) = 0;
      *(unsigned int *)(temp_v3 + 0x10) = 0;
      *(unsigned int *)(temp_v3 + 0x1c) = *(unsigned int *)(temp_v3 + 0x18);
      *(unsigned int *)(temp_v3 + 0x48) = *(unsigned int *)(temp_v3 + 0x44);
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 3;
    } while (temp_v2 < temp_v6 / 0xc + 1);
  }
  return;
}

} /* extern "C" */
