/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033e160` (_code @ 0x33e160, 0x664 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_0023e400(...);
int FUN_00241d44(...);
int FUN_0025b750(void);
int FUN_002a3504(float *, float *, int *);
int FUN_002b011c(void);
int mtx44Copy(float *, unsigned int *);
int FUN_002c1b64(...);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_MTX44MultAsm(...);

typedef struct fn_0033e160_arg0 fn_0033e160_arg0;
struct fn_0033e160_arg0 {
    unsigned char pad_0x0[0x10];
    int field_0x10; /* +0x10 */
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0xc];
    int field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x4];
    int field_0x2c; /* +0x2c */
    int field_0x30; /* +0x30 */
};

typedef int romwright_code(...);
/* stack frame of param_6: 37 slot(s), 148 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
} param_6_stack;

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */
extern float DAT_00433d98; /* 0x433d98 */
extern int g_titleScene; /* 0x44ea00 */
extern unsigned int DAT_00476638; /* 0x476638 */
extern unsigned int DAT_004efd9c; /* 0x4efd9c */
extern unsigned int DAT_004efda0; /* 0x4efda0 */
extern unsigned int DAT_004efda4; /* 0x4efda4 */
extern unsigned int DAT_004efda8; /* 0x4efda8 */
extern unsigned int DAT_004efdac; /* 0x4efdac */
extern unsigned int DAT_004efdb0; /* 0x4efdb0 */
extern unsigned int DAT_004efdb4; /* 0x4efdb4 */
extern unsigned int DAT_004efdb8; /* 0x4efdb8 */
extern unsigned int DAT_004efdbc; /* 0x4efdbc */
extern unsigned int DAT_004efdc0; /* 0x4efdc0 */
extern unsigned int DAT_004efdc4; /* 0x4efdc4 */
extern unsigned int DAT_004efdc8; /* 0x4efdc8 */
extern unsigned int DAT_004efdcc; /* 0x4efdcc */
extern unsigned int DAT_004efdd0; /* 0x4efdd0 */
extern unsigned int DAT_004efdd4; /* 0x4efdd4 */
extern unsigned int DAT_004efdd8; /* 0x4efdd8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0023e400. */
/* Supplied declaration required: FUN_00241d44. */
/* Supplied declaration required: FUN_0025b750. */
/* Supplied declaration required: FUN_002a3504. */
/* Supplied declaration required: FUN_002b011c. */
/* Supplied declaration required: mtx44Copy. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: nn_math_ARMv6_MTX44MultAsm. */


/* WARNING: Removing unreachable block (ram,0x0033e438) */
/* WARNING: Removing unreachable block (ram,0x0033e448) */
/* WARNING: Removing unreachable block (ram,0x0033e374) */

void FUN_0033e160(fn_0033e160_arg0 *param_1,int param_2,int param_3,unsigned int *param_4,unsigned int param_5
                 ,int param_6)

{
/* irregular: irregular input(s): in_fpscr, in_s1; 16 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  float *pfVar7;
  int temp_v5;
  int *piVar9;
  int temp_v6;
  unsigned int unaff_r6;
  int unaff_r9;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  float in_s1;
  float temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  float temp_v21;
  float fStack_118;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float fStack_108;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float fStack_f8;
  float temp_v28;
  float temp_v29;
  unsigned long long temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  unsigned int temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  unsigned int temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  unsigned int temp_v43;
  unsigned int temp_v44;
  unsigned int temp_v45;
  unsigned int temp_v46;
  unsigned int temp_v47;
  int temp_v48;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  float temp_v49;
  int temp_v50;
  float temp_v51;
  unsigned int temp_v52;
  unsigned char temp_v53 [12];
  float afStack_78 [21];
  
  if (param_1->field_0x10 != 0) {
    temp_v50 = *param_4;
    temp_v52 = param_4[2];
    temp_v51 = (float)param_4[1] + DAT_00433d98;
    temp_v1 = (unsigned int)*(unsigned short *)(param_1->field_0x24 + param_2 * 4);
    temp_v5 = (temp_v1 - 1) + (unsigned int)*(unsigned short *)(param_1->field_0x24 + param_2 * 4 + 2);
    temp_v2 = temp_v1;
    if ((int)temp_v1 <= temp_v5) {
      do {
        if (param_3 <= *(int *)(param_1->field_0x30 + temp_v2 * 0xc)) {
          if (*(int *)(param_1->field_0x30 + temp_v2 * 0xc) != param_3 && temp_v1 != temp_v2) {
            temp_v2 = temp_v2 - 1;
          }
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while ((int)temp_v2 <= temp_v5);
    }
    if (param_6 != 0) {
      if (param_6 != 1) {
        if (param_6 == 2 || param_6 == 3) {
          unaff_r6 = (unsigned int)*(unsigned short *)(param_1->field_0x30 + temp_v2 * 0xc + 4);
          unaff_r9 = (unsigned int)*(unsigned short *)(param_1->field_0x30 + temp_v2 * 0xc + 6) + (unaff_r6 - 1);
        }
      }
      else {
        temp_v5 = param_1->field_0x30;
        unaff_r6 = (unsigned int)*(unsigned short *)(temp_v5 + temp_v2 * 0xc + 6) +
                   (unsigned int)*(unsigned short *)(temp_v5 + temp_v2 * 0xc + 4);
        unaff_r9 = (unsigned int)*(unsigned short *)(temp_v5 + temp_v2 * 0xc + 8) + (unaff_r6 - 1);
      }
    }
    else {
      temp_v5 = param_1->field_0x30;
      unaff_r6 = (unsigned int)*(unsigned short *)(temp_v5 + temp_v2 * 0xc + 4);
      unaff_r9 = (unsigned int)*(unsigned short *)(temp_v5 + temp_v2 * 0xc + 8) +
                 (unsigned int)*(unsigned short *)(temp_v5 + temp_v2 * 0xc + 6) + (unaff_r6 - 1);
    }
    temp_v16 = (float)VectorUnsignedToFloat(param_5 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = (float)VectorUnsignedToFloat((param_5 & 0xff0000) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3)
    ;
    temp_v12 = (float)VectorUnsignedToFloat((param_5 & 0xff00) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorUnsignedToFloat(param_5 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = 0;
    temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= in_s1) << 0x1d);
    temp_v18 = CONCAT44(temp_v14 * 0.003921569f,temp_v16 * 0.003921569f);
    temp_v19 = CONCAT44(temp_v9 * 0.003921569f,temp_v12 * 0.003921569f);
    for (temp_v9 = romwright_fabs_4(in_s1); (int)temp_v9 >= 0x47800000; temp_v9 = temp_v9 - 65536.0f) {
    }
    temp_v1 = VectorFloatToUnsigned(0,3);
    temp_v10 = VectorFloatToUnsigned(temp_v9,3);
    temp_v11 = VectorFloatToUnsigned(0,3);
    temp_v3 = temp_v1;
    temp_v7 = temp_v11;
    temp_v16 = (float)VectorUnsignedToFloat(temp_v1 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v1 = temp_v10 & 0xff;
    temp_v15 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v12 = (float)VectorUnsignedToFloat(temp_v11 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
    temp_v13 = (float)(&DAT_00407ed0)[temp_v3 * 4] + (0.0f - temp_v16) * (float)(&DAT_00407ed8)[temp_v3 * 4];
    temp_v14 = (float)(&DAT_00407ed0)[temp_v1 * 4] +
             (temp_v9 - temp_v15) * (float)(&DAT_00407ed8)[temp_v1 * 4];
    temp_v16 = (float)(&DAT_00407ed4)[temp_v3 * 4] + (0.0f - temp_v16) * (float)(&DAT_00407edc)[temp_v3 * 4];
    temp_v42 = (float)(&DAT_00407ed4)[temp_v1 * 4] +
               (temp_v9 - temp_v15) * (float)(&DAT_00407edc)[temp_v1 * 4];
    temp_v9 = (float)(&DAT_00407ed0)[temp_v7 * 4] +
             (0.0f - temp_v12) * (float)(&DAT_00407ed8)[temp_v7 * 4];
    temp_v12 = (float)(&DAT_00407ed4)[temp_v7 * 4] +
             (0.0f - temp_v12) * (float)(&DAT_00407edc)[temp_v7 * 4];
    if (!romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) {
      temp_v14 = -temp_v14;
    }
    temp_v32 = temp_v12 * temp_v42;
    temp_v40 = -temp_v14;
    temp_v36 = temp_v9 * temp_v42;
    temp_v41 = temp_v13 * temp_v42;
    temp_v42 = temp_v16 * temp_v42;
    temp_v34 = temp_v13 * temp_v9 + temp_v16 * temp_v12 * temp_v14;
    temp_v37 = temp_v16 * temp_v12 + temp_v13 * temp_v9 * temp_v14;
    temp_v33 = temp_v13 * temp_v12 * temp_v14 - temp_v16 * temp_v9;
    temp_v38 = temp_v16 * temp_v9 * temp_v14 - temp_v13 * temp_v12;
    temp_v35 = 0;
    temp_v47 = 0x3f800000;
    temp_v39 = 0;
    temp_v43 = 0;
    temp_v44 = 0;
    temp_v45 = 0;
    temp_v46 = 0;
    temp_v17 = 0x3f800000;
    if (((DAT_00476638 & 1) == 0) && (temp_v5 = __cxa_guard_acquire(&DAT_00476638), temp_v5 != 0)) {
      DAT_004efd9c = (unsigned int)temp_v17;
      DAT_004efda0 = temp_v8;
      DAT_004efda4 = temp_v8;
      DAT_004efda8 = temp_v8;
      DAT_004efdac = temp_v8;
      DAT_004efdb0 = DAT_004efd9c;
      DAT_004efdb4 = temp_v8;
      DAT_004efdb8 = temp_v8;
      DAT_004efdbc = temp_v8;
      DAT_004efdc0 = temp_v8;
      DAT_004efdc4 = DAT_004efd9c;
      DAT_004efdc8 = temp_v8;
      DAT_004efdcc = temp_v8;
      DAT_004efdd0 = temp_v8;
      DAT_004efdd4 = temp_v8;
      DAT_004efdd8 = DAT_004efd9c;
    }
    mtx44Copy(&temp_v20,&DAT_004efd9c);
    FUN_002a3504(&temp_v20,&temp_v20,&temp_v50);
    FUN_0023e400(&temp_v20,&temp_v20,temp_v53);
    nn_math_ARMv6_MTX44MultAsm(&temp_v20,&temp_v20,&temp_v32);
    FUN_002c1b64(g_titleScene,*(unsigned int *)((int)param_1->field_0x14 + 0x18));
    temp_v5 = g_titleScene;
    temp_v6 = unaff_r6 * 0x58 + 0x54;
    piVar9 = (int *)(g_titleScene + 0x12ac);
    temp_v0 = *(int *)(param_1->field_0x2c + temp_v6);
    temp_v4 = piVar9[*piVar9 + 2];
    piVar9[*piVar9 + 2] = temp_v0;
    if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v4 != temp_v0) {
      (**(romwright_code **)(temp_v5 + 0x12c8))();
      *(unsigned char *)(temp_v5 + 0x12c4) = 0;
    }
    temp_v5 = *(int *)(param_1->field_0x2c + temp_v6);
    for (; temp_v0 = g_titleScene, (int)unaff_r6 <= unaff_r9; unaff_r6 = unaff_r6 + 1) {
      temp_v6 = unaff_r6 * 0x58 + 0x54;
      temp_v4 = *(int *)(param_1->field_0x2c + temp_v6);
      if (temp_v4 != temp_v5) {
        piVar9 = (int *)(g_titleScene + 0x12ac);
        temp_v5 = piVar9[*piVar9 + 2];
        piVar9[*piVar9 + 2] = temp_v4;
        if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v5 != temp_v4) {
          (**(romwright_code **)(temp_v0 + 0x12c8))();
          *(unsigned char *)(temp_v0 + 0x12c4) = 0;
        }
        temp_v5 = *(int *)(param_1->field_0x2c + temp_v6);
      }
      pfVar2 = (float *)(param_1->field_0x2c + unaff_r6 * 0x58);
      temp_v48 = (unsigned int)temp_v18;
      uStack_9c = (unsigned int)((unsigned long long)temp_v18 >> 0x20);
      uStack_98 = (unsigned int)temp_v19;
      temp_v2 = 0;
      temp_v49 = (float)((unsigned long long)temp_v19 >> 0x20) * pfVar2[0x14];
      pfVar7 = afStack_78;
      do {
        temp_v16 = pfVar2[1];
        temp_v9 = pfVar2[2];
        temp_v14 = *pfVar2;
        temp_v12 = (float)temp_v17;
        temp_v17 = CONCAT44(temp_v29,temp_v12);
        temp_v2 = temp_v2 + 1;
        pfVar2 = pfVar2 + 3;
        temp_v12 = temp_v12 / ((float)temp_v30 * temp_v16 + (float)((unsigned long long)temp_v30 >> 0x20) * temp_v9
                          + temp_v31 + temp_v29 * temp_v14);
        *pfVar7 = (temp_v21 * temp_v16 + fStack_118 * temp_v9 + temp_v22 + temp_v20 * temp_v14) *
                  temp_v12;
        pfVar7[1] = (temp_v24 * temp_v16 + fStack_108 * temp_v9 + temp_v25 + temp_v23 * temp_v14) *
                    temp_v12;
        pfVar7[2] = (temp_v27 * temp_v16 + fStack_f8 * temp_v9 + temp_v28 + temp_v26 * temp_v14) *
                    temp_v12;
        pfVar7 = pfVar7 + 3;
      } while (temp_v2 < 4);
      FUN_002b011c();
      temp_v0 = 0;
      do {
        FUN_00241d44(&temp_v48);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 4);
      FUN_0025b750();
    }
  }
  return;
}

} /* extern "C" */
