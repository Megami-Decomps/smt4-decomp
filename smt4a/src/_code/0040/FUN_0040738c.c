/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040738c` (_code @ 0x40738c, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0040738c_arg0 fn_0040738c_arg0;
struct fn_0040738c_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x58c];
    void *field_0x594; /* +0x594 */
    int field_0x598; /* +0x598 */
    unsigned char pad_0x59c[0x18];
    undefined4 field_0x5b4; /* +0x5b4 */
    undefined4 field_0x5b8; /* +0x5b8 */
    undefined4 field_0x5bc; /* +0x5bc */
    undefined4 field_0x5c0; /* +0x5c0 */
    undefined4 field_0x5c4; /* +0x5c4 */
    undefined4 field_0x5c8; /* +0x5c8 */
};

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_001986c4. */
/* Supplied declaration required: FUN_00407598. */


void FUN_0040738c(fn_0040738c_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v7;
  unsigned int uStack_14;
  unsigned int temp_v8;
  
  temp_v0 = param_1->field_0x598;
  if (temp_v0 < 0) {
    temp_v0 = 0;
  }
  temp_v2 = *(int *)((int)param_1->field_0x594 + 0x34);
  temp_v3 = *(int *)(*(int *)(temp_v2 + 0x90) + temp_v0 * 4);
  temp_v0 = *(int *)(*(int *)(temp_v2 + 0x48) + param_1->field_0x4 * 4);
  puVar7 = *(unsigned int **)(temp_v0 + 0x30);
  temp_v6 = *(unsigned int *)(temp_v0 + 4);
  uStack_2c = *(unsigned int *)(temp_v0 + 8);
  uStack_28 = *(unsigned int *)(temp_v0 + 0xc);
  uStack_24 = *(unsigned int *)(temp_v0 + 0x10);
  uStack_20 = *(unsigned int *)(temp_v0 + 0x14);
  uStack_1c = *(unsigned int *)(temp_v0 + 0x18);
  temp_v7 = *(unsigned int *)(temp_v0 + 0x1c);
  uStack_14 = *(unsigned int *)(temp_v0 + 0x20);
  temp_v8 = *(unsigned int *)(temp_v0 + 0x24);
  temp_v1 = (unsigned int)*(unsigned char *)(temp_v3 + 0x1a);
  if (temp_v1 != 0xff) {
    FUN_001986c4(*(unsigned int *)(*(int *)(temp_v3 + 0xc) + temp_v1 * 4),&temp_v6);
  }
  param_1->field_0x5b4 = temp_v7;
  param_1->field_0x5b8 = uStack_14;
  param_1->field_0x5bc = temp_v8;
  temp_v4 = puVar7[1];
  temp_v5 = puVar7[2];
  param_1->field_0x5c0 = *puVar7;
  param_1->field_0x5c4 = temp_v4;
  param_1->field_0x5c8 = temp_v5;
  FUN_00407598(param_1);
  return;
}
