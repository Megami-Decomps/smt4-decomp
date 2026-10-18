/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c7f14` (_code @ 0x1c7f14, 0x334 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001c7f14_arg1 fn_001c7f14_arg1;
struct fn_001c7f14_arg1 {
    unsigned char pad_0x0[0x28];
    int field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    int field_0x30; /* +0x30 */
    int field_0x34; /* +0x34 */
    int field_0x38; /* +0x38 */
    int field_0x3c; /* +0x3c */
    int field_0x40; /* +0x40 */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_001cf1a0. */
/* Supplied declaration required: nw_gfx_ParticleUtil_GetMemorySizeForDuplicateResParticleInitializerInternal. */
/* Supplied declaration required: nw_gfx_ParticleUtil_GetMemorySizeForDuplicateResParticleUpdaterInternal. */


void FUN_001c7f14(int *param_1,fn_001c7f14_arg1 *param_2,unsigned short *param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int *unaff_r4;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  
  temp_v1 = *(int *)(param_3 + 8);
  if (*(int *)(param_3 + 8) < param_2->field_0x34) {
    temp_v1 = param_2->field_0x34;
  }
  temp_v4 = param_1[1];
  temp_v2 = *(int *)(param_3 + 10);
  if (*(int *)(param_3 + 10) < param_2->field_0x3c) {
    temp_v2 = param_2->field_0x3c;
  }
  param_1[1] = 4;
  temp_v7 = 0;
  temp_v3 = 4;
  if ((unsigned int)param_1[2] >= 4) {
    temp_v3 = param_1[2];
  }
  param_1[2] = temp_v3;
  *param_1 = ((*param_1 + 3U) & 0xfffffffc) + 0x90;
  param_1[1] = temp_v4;
  temp_v3 = param_1[2];
  if ((unsigned int)param_1[2] < temp_v4) {
    temp_v3 = temp_v4;
  }
  param_1[2] = temp_v3;
  temp_v4 = param_1[1];
  if (temp_v3 < 4) {
    temp_v3 = 4;
  }
  param_1[1] = 4;
  param_1[2] = temp_v3;
  param_1[1] = temp_v4;
  if (temp_v4 <= temp_v3) {
    temp_v4 = temp_v3;
  }
  *param_1 = ((*param_1 + 3U) & 0xfffffffc) + temp_v1 * 0x18;
  param_1[2] = temp_v4;
  temp_v3 = param_1[1];
  param_1[1] = 4;
  temp_v4 = 4;
  if ((unsigned int)param_1[2] >= 4) {
    temp_v4 = param_1[2];
  }
  param_1[2] = temp_v4;
  param_1[1] = temp_v3;
  if (temp_v4 < temp_v3) {
    temp_v4 = temp_v3;
  }
  *param_1 = ((*param_1 + 3U) & 0xfffffffc) + temp_v2 * 0x1c;
  param_1[2] = temp_v4;
  temp_v1 = param_2->field_0x38;
  if (temp_v1 != 0) {
    unaff_r4 = (int *)((int)&param_2->field_0x38 + temp_v1);
  }
  temp_v2 = param_2->field_0x34;
  if (temp_v1 == 0) {
    unaff_r4 = (int *)0x0;
  }
  piVar8 = unaff_r4;
  while (piVar8 != unaff_r4 + temp_v2) {
    piVar7 = piVar8 + 1;
    if (*piVar8 != 0) {
      temp_v9 = (int)piVar8 + *piVar8;
    }
    else {
      temp_v9 = 0;
    }
    param_4 = temp_v9;
    piVar8 = piVar7;
    if (*(char *)(temp_v9 + 4) != '\0') {
      nw_gfx_ParticleUtil_GetMemorySizeForDuplicateResParticleInitializerInternal(param_1,&temp_v9)
      ;
      param_4 = temp_v9;
    }
  }
  temp_v1 = param_2->field_0x40;
  if (temp_v1 != 0) {
    piVar8 = (int *)((int)&param_2->field_0x40 + temp_v1);
  }
  temp_v2 = param_2->field_0x3c;
  if (temp_v1 == 0) {
    piVar8 = (int *)0x0;
  }
  piVar7 = piVar8;
  temp_v9 = param_4;
  while (piVar7 != piVar8 + temp_v2) {
    piVar9 = piVar7 + 1;
    if (*piVar7 != 0) {
      temp_v9 = (int)piVar7 + *piVar7;
    }
    else {
      temp_v9 = 0;
    }
    piVar7 = piVar9;
    if (*(char *)(temp_v9 + 4) != '\0') {
      nw_gfx_ParticleUtil_GetMemorySizeForDuplicateResParticleUpdaterInternal(param_1,&temp_v9);
    }
  }
  temp_v0 = *param_3;
  temp_v2 = *(int *)(param_3 + 2);
  temp_v1 = *(int *)(param_3 + 4);
  temp_v3 = *(unsigned int *)(param_3 + 6);
  temp_v4 = param_1[1];
  param_1[1] = 0x20;
  temp_v6 = param_1[2];
  if (temp_v6 < 0x20) {
    temp_v6 = 0x20;
  }
  param_1[2] = temp_v6;
  param_1[1] = temp_v4;
  if (temp_v4 <= temp_v6) {
    temp_v4 = temp_v6;
  }
  *param_1 = ((*param_1 + 0x1fU) & 0xffffffe0) + temp_v1 * 4;
  param_1[2] = temp_v4;
  if (temp_v2 != 0) {
    temp_v4 = param_1[1] - 1;
    temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~temp_v4) + 0x14;
    *param_1 = temp_v1;
    temp_v1 = (((temp_v1 + param_1[1]) - 1U) & ~temp_v4) + temp_v2 * 4;
  }
  else {
    temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x14;
  }
  *param_1 = temp_v1;
  temp_v8 = (int)((unsigned int)temp_v0 << 0x10) >> 0x18 != 0;
  if (temp_v8 && param_2 != (fn_001c7f14_arg1 *)0x0) {
    temp_v1 = param_2->field_0x28;
  }
  if ((temp_v8 && param_2 != (fn_001c7f14_arg1 *)0x0) && temp_v1 != 0) {
    temp_v2 = temp_v1 * temp_v3;
    temp_v5 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x2c;
    *param_1 = temp_v5;
    temp_v1 = (((temp_v5 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + temp_v1 * 4;
    *param_1 = temp_v1;
    temp_v3 = param_1[1] - 1;
    *param_1 = (((temp_v1 + param_1[1]) - 1U) & ~temp_v3) + temp_v2 * 4;
  }
  temp_v1 = param_2->field_0x30;
  if (temp_v1 != 0) {
    temp_v7 = temp_v1 + (int)&param_2->field_0x30;
  }
  FUN_001cf1a0(param_1,temp_v7,temp_v3,temp_v9);
  return;
}
