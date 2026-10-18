/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034bcf4` (_code @ 0x34bcf4, 0x3b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0034bcf4_arg0 fn_0034bcf4_arg0;
struct fn_0034bcf4_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0xc];
    void *field_0x14; /* +0x14 */
    void *field_0x18; /* +0x18 */
    void *field_0x1c; /* +0x1c */
};

typedef int romwright_code();
/* stack frame of param_1: 22 slot(s), 88 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_0023b4f4. */
/* Supplied declaration required: FUN_0023b5e0. */
/* Supplied declaration required: FUN_00241d44. */
/* Supplied declaration required: FUN_0025b750. */
/* Supplied declaration required: FUN_002b011c. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5d80(unsigned int, unsigned int);


void FUN_0034bcf4(fn_0034bcf4_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  void *pvVar2;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  int *piVar6;
  int temp_v3;
  float temp_v4;
  int temp_v5;
  unsigned int uStack_d4;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  unsigned int uStack_bc;
  float temp_v11;
  unsigned int temp_v12;
  unsigned int uStack_b0;
  float temp_v13;
  int temp_v14;
  unsigned int uStack_a4;
  float temp_v15;
  unsigned int temp_v16;
  unsigned int uStack_98;
  float temp_v17;
  unsigned int temp_v18;
  unsigned int uStack_8c;
  float temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  float temp_v22;
  unsigned char temp_v23 [64];
  int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  
  temp_v4 = -11.0f;
  FUN_002c1b64(DAT_0044ea00,*(unsigned int *)(*(int *)((int)param_1->field_0x18 + 0x40) + 8));
  temp_v3 = DAT_0044ea00;
  piVar6 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v0 = *(int *)((int)param_1->field_0x1c + 0x18);
  temp_v1 = *piVar6;
  temp_v2 = piVar6[temp_v1 + 2];
  *piVar6 = temp_v1 + 1;
  piVar6[temp_v1 + 3] = temp_v0;
  if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v3 + 0x12c8))();
    *(unsigned char *)(temp_v3 + 0x12c4) = 0;
  }
  temp_v3 = DAT_0044ea00;
  temp_v0 = FUN_002c5d80(1,0);
  piVar6 = (int *)(temp_v3 + 0x124c);
  temp_v1 = *piVar6;
  temp_v2 = piVar6[temp_v1 + 2];
  *piVar6 = temp_v1 + 1;
  piVar6[temp_v1 + 3] = temp_v0;
  if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v3 + 0x1268))(temp_v0);
    *(unsigned char *)(temp_v3 + 0x1264) = 0;
  }
  temp_v27 = *(unsigned int *)((int)param_1->field_0x14 + 8);
  temp_v24 = 0x3f800000;
  temp_v25 = 0x3f800000;
  temp_v26 = 0x3f800000;
  puVar5 = param_1->field_0x4;
  temp_v5 = *puVar5;
  uStack_d4 = puVar5[1];
  temp_v6 = (float)puVar5[2] + temp_v4;
  pvVar2 = param_1->field_0x4;
  temp_v7 = *(unsigned int *)((int)pvVar2 + 0x14);
  temp_v8 = *(unsigned int *)((int)pvVar2 + 0x18);
  temp_v9 = *(float *)((int)pvVar2 + 0x1c) + temp_v4;
  pvVar2 = param_1->field_0x4;
  temp_v10 = *(unsigned int *)((int)pvVar2 + 0x28);
  uStack_bc = *(unsigned int *)((int)pvVar2 + 0x2c);
  temp_v11 = *(float *)((int)pvVar2 + 0x30) + temp_v4;
  pvVar2 = param_1->field_0x4;
  temp_v12 = *(unsigned int *)((int)pvVar2 + 0x3c);
  uStack_b0 = *(unsigned int *)((int)pvVar2 + 0x40);
  temp_v13 = *(float *)((int)pvVar2 + 0x44) + temp_v4;
  pvVar2 = param_1->field_0x4;
  temp_v15 = *(float *)((int)pvVar2 + 0x58) + temp_v4;
  temp_v14 = *(unsigned int *)((int)pvVar2 + 0x50);
  uStack_a4 = *(unsigned int *)((int)pvVar2 + 0x54);
  pvVar2 = param_1->field_0x4;
  temp_v16 = *(unsigned int *)((int)pvVar2 + 100);
  uStack_98 = *(unsigned int *)((int)pvVar2 + 0x68);
  temp_v17 = *(float *)((int)pvVar2 + 0x6c) + temp_v4;
  pvVar2 = param_1->field_0x4;
  temp_v18 = *(unsigned int *)((int)pvVar2 + 0x78);
  uStack_8c = *(unsigned int *)((int)pvVar2 + 0x7c);
  temp_v19 = *(float *)((int)pvVar2 + 0x80) + temp_v4;
  pvVar2 = param_1->field_0x4;
  temp_v20 = *(unsigned int *)((int)pvVar2 + 0x8c);
  temp_v21 = *(unsigned int *)((int)pvVar2 + 0x90);
  temp_v22 = *(float *)((int)pvVar2 + 0x94) + temp_v4;
  FUN_0023b5e0(param_1,temp_v23,param_1->field_0x18);
  FUN_0023b4f4(&temp_v5,temp_v23,&temp_v5,4);
  FUN_002b011c();
  temp_v3 = 0;
  do {
    FUN_00241d44(&temp_v24);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 4);
  FUN_0025b750();
  FUN_002c1b64(DAT_0044ea00,*(unsigned int *)(*(int *)((int)param_1->field_0x18 + 0x84) + 8));
  temp_v3 = DAT_0044ea00;
  piVar6 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v0 = *(int *)((int)param_1->field_0x1c + 0x40);
  temp_v1 = piVar6[*piVar6 + 2];
  piVar6[*piVar6 + 2] = temp_v0;
  if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v1 != temp_v0) {
    (**(romwright_code **)(temp_v3 + 0x12c8))();
    *(unsigned char *)(temp_v3 + 0x12c4) = 0;
  }
  FUN_0023b5e0(param_1,temp_v23,(int)param_1->field_0x18 + 0x44);
  FUN_0023b4f4(&temp_v14,temp_v23,&temp_v14,4);
  FUN_002b011c();
  temp_v3 = 4;
  do {
    FUN_00241d44(&temp_v24);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 8);
  FUN_0025b750();
  temp_v3 = DAT_0044ea00;
  piVar6 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v0 = *piVar6;
  temp_v1 = piVar6[temp_v0 + 2];
  *piVar6 = temp_v0 - 1;
  if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v1 != piVar6[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v3 + 0x1268))();
    *(unsigned char *)(temp_v3 + 0x1264) = 0;
  }
  temp_v3 = DAT_0044ea00;
  piVar6 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v0 = *piVar6;
  temp_v1 = piVar6[temp_v0 + 2];
  *piVar6 = temp_v0 - 1;
  if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v1 != piVar6[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v3 + 0x12c8))();
    *(unsigned char *)(temp_v3 + 0x12c4) = 0;
  }
  return;
}
