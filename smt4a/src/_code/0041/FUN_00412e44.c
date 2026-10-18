/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00412e44` (_code @ 0x412e44, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00412e44_arg0 fn_00412e44_arg0;
struct fn_00412e44_arg0 {
    uint field_0x0; /* +0x0 */
    uint field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x10];
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x2c];
    undefined4 field_0x48; /* +0x48 */
};

/* stack frame of param_1: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_0042cb68; /* 0x42cb68 */
extern unsigned char LAB_0042cbb0; /* 0x42cbb0 */

/* Supplied declaration required: FUN_001bc2ec. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_00341e80. */
/* Supplied declaration required: FUN_00412678. */
/* Supplied declaration required: FUN_00412b3c. */
/* Supplied declaration required: FUN_00412c54. */
/* Supplied declaration required: FUN_0042cb74. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00412e44(fn_00412e44_arg0 *param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  unsigned char temp_v6 [352];
  unsigned char temp_v7 [1584];
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  
  if (param_1->field_0x18 != 0) {
    puVar1 = temp_v7;
    FUN_002f5020(puVar1,&LAB_0042cbb0,0x70,0xc);
    puVar1 = puVar1 + 0x540;
    FUN_002f5020(puVar1,&LAB_0042cb68,0x14,0xc);
    *(unsigned int *)(puVar1 + -0x6a0) = 0;
    FUN_002e6354(puVar1 + -0x69c,0x150);
    temp_v5 = 0;
    temp_v0 = 0;
    do {
      puVar1[temp_v0 - 0x54c] = 0;
      FUN_0042cb74(puVar1 + (temp_v0 * 0x70 - 0x540));
      temp_v1 = temp_v0 + 1;
      temp_v2 = temp_v0 * 0x14;
      puVar1[temp_v2] = 0;
      temp_v4 = (unsigned int)temp_v5;
      *(unsigned int *)(puVar1 + temp_v2 + 4) = temp_v4;
      *(unsigned int *)(puVar1 + temp_v2 + 8) = temp_v4;
      *(unsigned int *)(puVar1 + temp_v2 + 0xc) = temp_v4;
      *(unsigned int *)(puVar1 + temp_v2 + 0x10) = temp_v4;
      temp_v0 = temp_v1;
    } while (temp_v1 < 0xc);
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v10 = 0;
    if ((param_1->field_0x4 & 0x100) != 0) {
      FUN_00412b3c();
      temp_v2 = param_1->field_0x18;
      temp_v8 = FUN_001bc2ec(param_1->field_0x48);
      temp_v9 = temp_v2;
    }
    else {
      FUN_00412c54(param_1,temp_v6);
      temp_v3 = param_1->field_0x18;
      temp_v2 = temp_v3 << 1;
      FUN_00341e80(temp_v2);
      rt_memcpy();
      temp_v8 = FUN_001bc2ec(temp_v2);
      temp_v9 = temp_v3;
    }
    temp_v10 = 0;
    FUN_00412678(param_1,temp_v6,&temp_v8);
  }
  return;
}
