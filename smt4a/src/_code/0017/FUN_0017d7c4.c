/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017d7c4` (_code @ 0x17d7c4, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0017d7c4_arg0 fn_0017d7c4_arg0;
struct fn_0017d7c4_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    undefined4 field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    int field_0x20; /* +0x20 */
    unsigned char pad_0x24[0xc];
    undefined4 field_0x30; /* +0x30 */
    void *field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x5];
    byte field_0x3d; /* +0x3d */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern signed char DAT_0061a481; /* 0x61a481 */
extern signed char DAT_0061a482; /* 0x61a482 */
extern fn_0017d7c4_arg0 *DAT_0061a510; /* 0x61a510 */

/* Supplied declaration required: FUN_0018b600. */
/* Supplied declaration required: FUN_0018b610. */
/* Supplied declaration required: FUN_001963e0. */


void FUN_0017d7c4(fn_0017d7c4_arg0 *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = param_1->field_0xc;
  if (param_1->field_0x14 == temp_v0) {
    return;
  }
  puVar3 = (unsigned int *)(param_1->field_0x4 + temp_v0);
  if ((temp_v0 & 8) != 0) {
    param_1->field_0xc = temp_v0 + 0x18;
  }
  else {
    param_1->field_0xc = temp_v0 + 0x20;
    puVar4 = puVar3 + 1;
    *puVar3 = 0;
    puVar3 = puVar3 + 2;
    *puVar4 = 0x8025e;
  }
  *puVar3 = 1;
  puVar3[1] = 0xf0111;
  puVar3[4] = 0x12345678;
  puVar3[5] = 0xf0010;
  puVar3[2] = 1;
  puVar3[3] = 0xf0110;
  puVar2 = (unsigned char *)(param_1->field_0x18 + param_1->field_0x20 * 0x1c);
  *puVar2 = 1;
  temp_v1 = param_1->field_0x4 + param_1->field_0x14;
  *(int *)(puVar2 + 4) = temp_v1;
  if (param_1->field_0x34 != (void *)0x0) {
    temp_v2 = param_1->field_0xc - param_1->field_0x14;
    *(int *)(puVar2 + 8) = temp_v2;
    *(unsigned int *)((int)param_1->field_0x34 + 8) =
         (((temp_v2 + temp_v1) - (int)param_1->field_0x34) - 0x18U) >> 3;
    *(unsigned int *)(puVar2 + 8) = param_1->field_0x30;
    param_1->field_0x34 = (void *)0x0;
    param_1->field_0x30 = 0;
  }
  *(unsigned int *)(puVar2 + 8) = param_2;
  temp_v0 = *(unsigned int *)(puVar2 + 0xc);
  *(unsigned int *)(puVar2 + 0xc) = (temp_v0 & 0xfffffffd) | 4;
  if (param_1->field_0x3d != 0) {
    *(unsigned int *)(puVar2 + 0xc) = (temp_v0 & 0xfffffffd) | 5;
  }
  param_1->field_0x14 = param_1->field_0xc;
  FUN_0018b600();
  param_1->field_0x20 = param_1->field_0x20 + 1;
  if (((DAT_0061a510 == param_1) && (DAT_0061a482 != '\0')) && (DAT_0061a481 == '\0')) {
    DAT_0061a481 = '\x01';
    FUN_001963e0();
  }
  FUN_0018b610();
  return;
}
