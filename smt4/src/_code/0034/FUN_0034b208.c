/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034b208` (_code @ 0x34b208, 0x33c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0034b208_arg0 fn_0034b208_arg0;
struct fn_0034b208_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    void *field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    void *field_0x1c; /* +0x1c */
};

typedef int romwright_code();
/* stack frame of param_1: 25 slot(s), 100 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_0023b5e0. */
/* Supplied declaration required: FUN_00241d44. */
/* Supplied declaration required: FUN_0025b750. */
/* Supplied declaration required: FUN_002b011c. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5d80(unsigned int, unsigned int);


void FUN_0034b208(fn_0034b208_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  int temp_v1;
  int temp_v2;
  float *pfVar5;
  void *pvVar6;
  unsigned int temp_v3;
  int *piVar8;
  int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  float temp_v11;
  float fStack_e0;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float fStack_d0;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float fStack_c0;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float fStack_a4;
  float temp_v24;
  unsigned int temp_v25;
  unsigned int uStack_98;
  float temp_v26;
  unsigned int temp_v27;
  unsigned int uStack_8c;
  float temp_v28;
  unsigned int temp_v29;
  unsigned int uStack_80;
  float temp_v30;
  float afStack_78 [12];
  int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  
  temp_v8 = -11.0f;
  FUN_002c1b64(DAT_0044ea00,*(unsigned int *)((int)param_1->field_0x8 + 8));
  temp_v4 = DAT_0044ea00;
  piVar8 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v0 = *(int *)((int)param_1->field_0x1c + 0x18);
  temp_v1 = *piVar8;
  temp_v2 = piVar8[temp_v1 + 2];
  *piVar8 = temp_v1 + 1;
  piVar8[temp_v1 + 3] = temp_v0;
  if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v4 + 0x12c8))();
    *(unsigned char *)(temp_v4 + 0x12c4) = 0;
  }
  temp_v4 = DAT_0044ea00;
  temp_v0 = FUN_002c5d80(1,0);
  piVar8 = (int *)(temp_v4 + 0x124c);
  temp_v1 = *piVar8;
  temp_v2 = piVar8[temp_v1 + 2];
  *piVar8 = temp_v1 + 1;
  piVar8[temp_v1 + 3] = temp_v0;
  if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v4 + 0x1268))();
    *(unsigned char *)(temp_v4 + 0x1264) = 0;
  }
  temp_v9 = CONCAT44(temp_v8,0x3f800000);
  temp_v4 = 0;
  temp_v34 = *(unsigned int *)((int)param_1->field_0x14 + 8);
  temp_v31 = 0x3f800000;
  temp_v32 = 0x3f800000;
  temp_v33 = 0x3f800000;
  pfVar5 = param_1->field_0x4;
  temp_v23 = *pfVar5;
  fStack_a4 = pfVar5[1];
  temp_v24 = pfVar5[2] + temp_v8;
  pvVar6 = param_1->field_0x4;
  temp_v25 = *(unsigned int *)((int)pvVar6 + 0x14);
  uStack_98 = *(unsigned int *)((int)pvVar6 + 0x18);
  temp_v26 = *(float *)((int)pvVar6 + 0x1c) + temp_v8;
  pvVar6 = param_1->field_0x4;
  temp_v27 = *(unsigned int *)((int)pvVar6 + 0x28);
  uStack_8c = *(unsigned int *)((int)pvVar6 + 0x2c);
  temp_v28 = *(float *)((int)pvVar6 + 0x30) + temp_v8;
  pvVar6 = param_1->field_0x4;
  temp_v29 = *(unsigned int *)((int)pvVar6 + 0x3c);
  uStack_80 = *(unsigned int *)((int)pvVar6 + 0x40);
  temp_v30 = *(float *)((int)pvVar6 + 0x44) + temp_v8;
  if (0 < *(int *)((int)param_1->field_0x1c + 0x2c)) {
    do {
      FUN_0023b5e0(param_1,&temp_v10,param_1->field_0x18 + temp_v4 * 0x50);
      pfVar2 = &temp_v23;
      temp_v3 = 0;
      pfVar5 = afStack_78;
      do {
        temp_v8 = pfVar2[1];
        temp_v6 = pfVar2[2];
        temp_v7 = *pfVar2;
        temp_v5 = (float)temp_v9;
        temp_v9 = CONCAT44(temp_v16,temp_v5);
        temp_v3 = temp_v3 + 1;
        pfVar2 = pfVar2 + 3;
        temp_v5 = temp_v5 / (temp_v20 * temp_v8 + temp_v21 * temp_v6 + temp_v22 + temp_v19 * temp_v7);
        pfVar5[2] = (temp_v17 * temp_v8 + fStack_c0 * temp_v6 + temp_v18 + temp_v16 * temp_v7) * temp_v5
        ;
        *pfVar5 = (temp_v11 * temp_v8 + fStack_e0 * temp_v6 + temp_v12 + temp_v10 * temp_v7) * temp_v5;
        pfVar5[1] = (temp_v14 * temp_v8 + fStack_d0 * temp_v6 + temp_v15 + temp_v13 * temp_v7) * temp_v5
        ;
        pfVar5 = pfVar5 + 3;
      } while (temp_v3 < 4);
      FUN_002b011c();
      temp_v0 = 0;
      do {
        FUN_00241d44(&temp_v31);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 4);
      FUN_0025b750();
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)((int)param_1->field_0x1c + 0x2c));
  }
  temp_v4 = DAT_0044ea00;
  piVar8 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v0 = *piVar8;
  temp_v1 = piVar8[temp_v0 + 2];
  *piVar8 = temp_v0 - 1;
  if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v1 != piVar8[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x1268))();
    *(unsigned char *)(temp_v4 + 0x1264) = 0;
  }
  temp_v4 = DAT_0044ea00;
  piVar8 = (int *)(DAT_0044ea00 + 0x12ac);
  temp_v0 = *piVar8;
  temp_v1 = piVar8[temp_v0 + 2];
  *piVar8 = temp_v0 - 1;
  if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v1 != piVar8[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x12c8))();
    *(unsigned char *)(temp_v4 + 0x12c4) = 0;
  }
  return;
}
