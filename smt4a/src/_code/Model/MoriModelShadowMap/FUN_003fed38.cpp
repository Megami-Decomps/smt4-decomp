/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fed38` (_code @ 0x3fed38, 0x428 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00158bf8(unsigned char *);
int FUN_0015fcec(unsigned char *, unsigned int);
int FUN_001630d4(int, int, int, int);
int FUN_0016d1f4(unsigned char [24]);
int FUN_00177abc(float *, unsigned char *);
int FUN_00177cdc(unsigned char *, unsigned char *, int);
int FUN_0018a924(float *, unsigned int **);
int FUN_0019d4d8(...);
int FUN_0045af48(unsigned int, unsigned int, unsigned int, int);
int FUN_005015b0(unsigned char *, unsigned int *);
int FUN_00501660(unsigned int *, int);

typedef struct fn_003fed38_arg1 fn_003fed38_arg1;
struct fn_003fed38_arg1 {
    unsigned char pad_0x0[0x49];
    undefined1 field_0x49; /* +0x49 */
    unsigned char pad_0x4a[0x2];
    float field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    float field_0x60; /* +0x60 */
    float field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    undefined4 field_0x78; /* +0x78 */
    unsigned char pad_0x7c[0x30];
    undefined4 field_0xac; /* +0xac */
    undefined4 field_0xb0; /* +0xb0 */
    unsigned char pad_0xb4[0x20];
    undefined4 field_0xd4; /* +0xd4 */
};

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of param_2: 35 slot(s), 98 byte(s) */
typedef struct {
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned char spB0; /* 0xb0: local_b0 */
    unsigned char spC9; /* 0xc9: local_c9 */
    unsigned char spCA; /* 0xca: local_ca */
    unsigned char spCB; /* 0xcb: local_cb */
    unsigned char spCC; /* 0xcc: local_cc */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned char sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned char sp19B; /* 0x19b: local_19b */
    unsigned char sp19E; /* 0x19e: local_19e */
    unsigned char sp1A3; /* 0x1a3: local_1a3 */
    unsigned char sp1A6; /* 0x1a6: local_1a6 */
    unsigned char sp1A7; /* 0x1a7: local_1a7 */
    unsigned char sp1AC; /* 0x1ac: local_1ac */
    unsigned char sp1AF; /* 0x1af: local_1af */
    unsigned char sp1B0; /* 0x1b0: local_1b0 */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
} param_2_stack;

extern unsigned int DAT_0056fcc4; /* 0x56fcc4 */

/* Supplied declaration required: FUN_00158bf8. */
/* Supplied declaration required: FUN_0015fcec. */
/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_0016d1f4. */
/* Supplied declaration required: FUN_00177abc. */
/* Supplied declaration required: FUN_00177cdc. */
/* Supplied declaration required: FUN_0018a924. */
/* Supplied declaration required: FUN_0019d4d8. */
extern unsigned int FUN_001a04e0(unsigned int, unsigned int);
extern int FUN_001af0d0(float *, unsigned int);
extern unsigned int FUN_0042cbd8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0045af48. */
extern unsigned int FUN_00500994(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_005015b0. */
/* Supplied declaration required: FUN_00501660. */


/* WARNING: Removing unreachable block (ram,0x003fedd8) */

void FUN_003fed38(int param_1,fn_003fed38_arg1 *param_2)

{
/* irregular: 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  float *pfVar6;
  float *pfVar7;
  unsigned int temp_v2;
  int temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  unsigned int *temp_v10;
  float temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  unsigned char temp_v18;
  unsigned char temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned char temp_v24 [4];
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  int temp_v31;
  int temp_v32;
  int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int uStack_d0;
  unsigned char temp_v38;
  char temp_v39;
  char temp_v40;
  unsigned char temp_v41;
  unsigned char temp_v42 [24];
  unsigned char temp_v43 [4];
  float temp_v44;
  float temp_v45 [17];
  
  temp_v8 = 0;
  temp_v9 = 1.0f;
  uStack_d0 = 0x3f800000;
  temp_v38 = 0;
  temp_v40 = '\0';
  temp_v41 = 3;
  temp_v31 = DAT_0056fcc4;
  temp_v32 = 0x200;
  temp_v33 = 0x200;
  temp_v34 = 0x3f800000;
  temp_v35 = 0x3f800000;
  temp_v36 = 0x3f800000;
  temp_v37 = 0x3f800000;
  temp_v39 = '\x01';
  temp_v0 = 0x10000;
  temp_v11 = 1.4013e-45f;
  temp_v10 = (unsigned int *)0x10;
  FUN_0019d4d8(0x10000,0x100,0);
  *(unsigned int *)(param_1 + 8) = temp_v0;
  if ((temp_v40 == '\0') || (temp_v39 != '\0')) {
    temp_v1 = temp_v32 * temp_v33 * 4;
  }
  else {
    temp_v1 = temp_v32 * temp_v33 * 2;
  }
  temp_v0 = 0x30000;
  temp_v10 = (unsigned int *)0x1;
  FUN_001630d4(0x30000,0x100,0,temp_v1);
  *(unsigned int *)(param_1 + 0xc) = temp_v0;
  temp_v10 = (unsigned int *)&temp_v31;
  FUN_0045af48(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),temp_v0,0);
  temp_v5 = 0.5f;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 4) + 0x48;
  temp_v6 = *(float *)(param_1 + 0x34);
  param_2->field_0x49 = 0;
  FUN_0018a924(&temp_v11,&temp_v10);
  temp_v4 = temp_v9 / (temp_v11 / romwright_u2f((unsigned int)(temp_v10)));
  param_2->field_0x4c = (temp_v4 / temp_v6) * temp_v5;
  param_2->field_0x50 = temp_v8;
  param_2->field_0x54 = 0xbf000000;
  param_2->field_0x58 = temp_v8;
  param_2->field_0x5c = temp_v8;
  param_2->field_0x60 = temp_v4 * temp_v5;
  param_2->field_0x64 = -temp_v5;
  param_2->field_0x68 = temp_v8;
  param_2->field_0x6c = temp_v8;
  param_2->field_0x70 = temp_v8;
  param_2->field_0x74 = 0xbf800000;
  param_2->field_0x78 = temp_v8;
  param_2->field_0xac = *(unsigned int *)(param_1 + 0x24);
  param_2->field_0xb0 = *(unsigned int *)(param_1 + 0x28);
  param_2->field_0xd4 = *(unsigned int *)(param_1 + 0x20);
  temp_v1 = 0x10000;
  temp_v11 = 1.4013e-45f;
  temp_v10 = (unsigned int *)0x10;
  FUN_0019d4d8(0x10000,0x100,0,0x250);
  *(int *)(param_1 + 0x18) = temp_v1;
  temp_v7 = *(unsigned long long *)(*(int *)(param_1 + 4) + 0x40);
  temp_v20 = 0;
  temp_v22 = 0xf0;
  temp_v21 = 0;
  temp_v23 = 0x140;
  temp_v24[0] = 1;
  temp_v25 = 0;
  temp_v27 = 0xf0;
  temp_v26 = 0;
  temp_v28 = 0x140;
  temp_v29 = 0x100;
  temp_v30 = 0x140;
  FUN_00158bf8(&temp_v12);
  FUN_0016d1f4(temp_v42);
  temp_v20 = 0;
  temp_v21 = 0;
  temp_v22 = (unsigned int)temp_v7;
  temp_v23 = (unsigned int)((unsigned long long)temp_v7 >> 0x20);
  temp_v25 = 0;
  temp_v26 = 0;
  temp_v12 = 0;
  temp_v14 = 0xe;
  temp_v13 = 4;
  temp_v15 = 0;
  temp_v17 = 0xe;
  temp_v16 = 0;
  temp_v18 = 0;
  temp_v19 = 0;
  puVar3 = (unsigned int *)&temp_v20;
  temp_v44 = (*(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x24)) /
             (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x24));
  temp_v43[0] = 1;
  temp_v45[0] = temp_v9 / *(float *)(param_1 + 0x28);
  temp_v27 = temp_v22;
  temp_v28 = temp_v23;
  temp_v29 = temp_v22;
  temp_v30 = temp_v23;
  FUN_00501660(puVar3,temp_v1);
  puVar4 = temp_v24;
  FUN_005015b0(puVar4,puVar3);
  temp_v0 = FUN_00500994(*(unsigned int *)(param_1 + 4),puVar4,1);
  temp_v0 = FUN_0042cbd8(temp_v0,1);
  temp_v0 = FUN_001a04e0(temp_v0,1);
  puVar4 = &temp_v12;
  FUN_0015fcec(puVar4,temp_v0);
  puVar5 = temp_v43;
  FUN_00177cdc(puVar5,puVar4,1);
  pfVar6 = temp_v45;
  FUN_00177abc(pfVar6,puVar5);
  temp_v2 = (((int)pfVar6 - temp_v1) & 0xfffffffcU) + 8;
  if (((temp_v2 & 0xf) != 0) && (temp_v2 = 4 - ((temp_v2 & 0xf) >> 2), 0 < (int)temp_v2)) {
    pfVar7 = pfVar6 + -1;
    if ((temp_v2 & 1) != 0) {
      *pfVar6 = 0.0f;
      pfVar7 = pfVar6;
    }
    for (temp_v3 = (int)temp_v2 >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
      pfVar7[1] = 0.0f;
      pfVar7 = pfVar7 + 2;
      *pfVar7 = 0.0f;
    }
    pfVar6 = pfVar6 + temp_v2;
  }
  temp_v3 = FUN_001af0d0(pfVar6,1);
  *(int *)(param_1 + 0x14) = (temp_v3 - temp_v1) >> 2;
  *(int *)(param_1 + 0x10) = temp_v1;
  *(unsigned char *)(param_1 + 0xc4) = 1;
  return;
}

} /* extern "C" */
