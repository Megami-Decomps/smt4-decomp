/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fba4c` (_code @ 0x3fba4c, 0x66c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int renderCtxSelectTexture(...);
int mtx44Copy(float *, unsigned int *);
int nn_math_ARMv6_MTX44MultAsm(...);
int nn_math_ARMv6_MTX34MultTranslateAsm_1B4A20(float *, float *, int *);
int FUN_001d3de0(...);
int FUN_002371b0(void);
int gpuSubmitFloatVectorsOrDefault(...);
int FUN_0032c808(void);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(unsigned int, int);

typedef struct fn_003fba4c_arg0 fn_003fba4c_arg0;
struct fn_003fba4c_arg0 {
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
/* stack frame of param_6: 36 slot(s), 144 byte(s) */
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

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern float g_spriteDrawYOffset; /* 0x570d5c */
extern int g_renderCtx; /* 0x59dbb4 */
extern unsigned int _ZGVZN2nw4math5MTX448IdentityEvE8identity; /* 0x5c4c30 */
extern unsigned int _ZZN2nw4math5MTX448IdentityEvE8identity; /* 0x64c084 */
extern unsigned int DAT_0064c088; /* 0x64c088 */
extern unsigned int DAT_0064c08c; /* 0x64c08c */
extern unsigned int DAT_0064c090; /* 0x64c090 */
extern unsigned int DAT_0064c094; /* 0x64c094 */
extern unsigned int DAT_0064c098; /* 0x64c098 */
extern unsigned int DAT_0064c09c; /* 0x64c09c */
extern unsigned int DAT_0064c0a0; /* 0x64c0a0 */
extern unsigned int DAT_0064c0a4; /* 0x64c0a4 */
extern unsigned int DAT_0064c0a8; /* 0x64c0a8 */
extern unsigned int DAT_0064c0ac; /* 0x64c0ac */
extern unsigned int DAT_0064c0b0; /* 0x64c0b0 */
extern unsigned int DAT_0064c0b4; /* 0x64c0b4 */
extern unsigned int DAT_0064c0b8; /* 0x64c0b8 */
extern unsigned int DAT_0064c0bc; /* 0x64c0bc */
extern unsigned int DAT_0064c0c0; /* 0x64c0c0 */

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
/* Supplied declaration required: renderCtxSelectTexture. */
/* Supplied declaration required: mtx44Copy. */
/* Supplied declaration required: nn_math_ARMv6_MTX44MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultTranslateAsm_1B4A20. */
/* Supplied declaration required: FUN_001d3de0. */
/* Supplied declaration required: FUN_002371b0. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: gpuSubmitFloatVectorsOrDefault. */
/* Supplied declaration required: FUN_0032c808. */


/* WARNING: Removing unreachable block (ram,0x003fbd28) */
/* WARNING: Removing unreachable block (ram,0x003fbd3c) */
/* WARNING: Removing unreachable block (ram,0x003fbc64) */

void FUN_003fba4c(fn_003fba4c_arg0 *param_1,int param_2,int param_3,unsigned int *param_4,unsigned int param_5
                 ,int param_6)

{
/* irregular: irregular input(s): in_fpscr, in_s1; 16 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float *pfVar4;
  int temp_v3;
  float *pfVar6;
  int temp_v4;
  int *piVar8;
  int temp_v5;
  unsigned int unaff_r6;
  int unaff_r9;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  float in_s1;
  float temp_v8;
  unsigned int temp_v9;
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
  float fStack_dc;
  float temp_v33;
  unsigned int temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  unsigned int temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  unsigned int temp_v42;
  unsigned int temp_v43;
  unsigned int temp_v44;
  unsigned int temp_v45;
  unsigned int temp_v46;
  int temp_v47;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  float temp_v48;
  int temp_v49;
  float temp_v50;
  unsigned int temp_v51;
  unsigned char temp_v52 [12];
  float afStack_78 [21];
  
  if (param_1->field_0x10 != 0) {
    temp_v49 = *param_4;
    temp_v51 = param_4[2];
    temp_v50 = (float)param_4[1] + g_spriteDrawYOffset;
    temp_v0 = (unsigned int)*(unsigned short *)(param_1->field_0x24 + param_2 * 4);
    temp_v4 = (temp_v0 - 1) + (unsigned int)*(unsigned short *)(param_1->field_0x24 + param_2 * 4 + 2);
    temp_v1 = temp_v0;
    if ((int)temp_v0 <= temp_v4) {
      do {
        if (param_3 <= *(int *)(param_1->field_0x30 + temp_v1 * 0xc)) {
          if (*(int *)(param_1->field_0x30 + temp_v1 * 0xc) != param_3 && temp_v0 != temp_v1) {
            temp_v1 = temp_v1 - 1;
          }
          break;
        }
        temp_v1 = temp_v1 + 1;
      } while ((int)temp_v1 <= temp_v4);
    }
    if (param_6 != 0) {
      if (param_6 != 1) {
        if (param_6 == 2 || param_6 == 3) {
          unaff_r6 = (unsigned int)*(unsigned short *)(param_1->field_0x30 + temp_v1 * 0xc + 4);
          unaff_r9 = (unsigned int)*(unsigned short *)(param_1->field_0x30 + temp_v1 * 0xc + 6) + (unaff_r6 - 1);
        }
      }
      else {
        temp_v4 = param_1->field_0x30;
        unaff_r6 = (unsigned int)*(unsigned short *)(temp_v4 + temp_v1 * 0xc + 6) +
                   (unsigned int)*(unsigned short *)(temp_v4 + temp_v1 * 0xc + 4);
        unaff_r9 = (unsigned int)*(unsigned short *)(temp_v4 + temp_v1 * 0xc + 8) + (unaff_r6 - 1);
      }
    }
    else {
      temp_v4 = param_1->field_0x30;
      unaff_r6 = (unsigned int)*(unsigned short *)(temp_v4 + temp_v1 * 0xc + 4);
      unaff_r9 = (unsigned int)*(unsigned short *)(temp_v4 + temp_v1 * 0xc + 8) +
                 (unsigned int)*(unsigned short *)(temp_v4 + temp_v1 * 0xc + 6) + (unaff_r6 - 1);
    }
    temp_v16 = (float)VectorUnsignedToFloat(param_5 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v14 = (float)VectorUnsignedToFloat((param_5 & 0xff0000) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3)
    ;
    temp_v12 = (float)VectorUnsignedToFloat((param_5 & 0xff00) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorUnsignedToFloat(param_5 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = 0;
    temp_v18 = CONCAT44(temp_v14 * 0.003921569f,temp_v16 * 0.003921569f);
    temp_v19 = CONCAT44(temp_v8 * 0.003921569f,temp_v12 * 0.003921569f);
    temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= in_s1 * 0.7111111f) << 0x1d);
    for (temp_v8 = romwright_fabs_4(in_s1 * 0.7111111f); (int)temp_v8 >= 0x47800000; temp_v8 = temp_v8 - 65536.0f) {
    }
    temp_v9 = VectorFloatToUnsigned(0,3);
    temp_v10 = VectorFloatToUnsigned(temp_v8,3);
    temp_v11 = VectorFloatToUnsigned(0,3);
    temp_v0 = temp_v10 & 0xff;
    temp_v15 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
    temp_v10 = temp_v9 & 0xff;
    temp_v6 = temp_v11;
    temp_v12 = (float)VectorUnsignedToFloat(temp_v9 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
    temp_v16 = (float)VectorUnsignedToFloat(temp_v11 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
    temp_v13 = (float)(&DAT_00536d14)[temp_v10 * 4] +
             (0.0f - temp_v12) * (float)(&DAT_00536d1c)[temp_v10 * 4];
    temp_v14 = (float)(&DAT_00536d14)[temp_v0 * 4] +
             (temp_v8 - temp_v15) * (float)(&DAT_00536d1c)[temp_v0 * 4];
    temp_v12 = (float)(&DAT_00536d18)[temp_v10 * 4] +
             (0.0f - temp_v12) * (float)(&DAT_00536d20)[temp_v10 * 4];
    temp_v41 = (float)(&DAT_00536d18)[temp_v0 * 4] +
               (temp_v8 - temp_v15) * (float)(&DAT_00536d20)[temp_v0 * 4];
    temp_v8 = (float)(&DAT_00536d14)[temp_v6 * 4] +
             (0.0f - temp_v16) * (float)(&DAT_00536d1c)[temp_v6 * 4];
    temp_v16 = (float)(&DAT_00536d18)[temp_v6 * 4] +
             (0.0f - temp_v16) * (float)(&DAT_00536d20)[temp_v6 * 4];
    if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
      temp_v14 = -temp_v14;
    }
    temp_v32 = temp_v16 * temp_v41;
    temp_v39 = -temp_v14;
    temp_v35 = temp_v8 * temp_v41;
    temp_v40 = temp_v13 * temp_v41;
    temp_v41 = temp_v12 * temp_v41;
    fStack_dc = temp_v13 * temp_v16 * temp_v14 - temp_v12 * temp_v8;
    temp_v37 = temp_v12 * temp_v8 * temp_v14 - temp_v13 * temp_v16;
    temp_v33 = temp_v13 * temp_v8 + temp_v12 * temp_v16 * temp_v14;
    temp_v36 = temp_v12 * temp_v16 + temp_v13 * temp_v8 * temp_v14;
    temp_v34 = 0;
    temp_v46 = 0x3f800000;
    temp_v38 = 0;
    temp_v42 = 0;
    temp_v43 = 0;
    temp_v44 = 0;
    temp_v45 = 0;
    temp_v17 = 0x3f800000;
    if (((_ZGVZN2nw4math5MTX448IdentityEvE8identity & 1) == 0) && (temp_v4 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX448IdentityEvE8identity), temp_v4 != 0)) {
      _ZZN2nw4math5MTX448IdentityEvE8identity = (unsigned int)temp_v17;
      DAT_0064c088 = temp_v7;
      DAT_0064c08c = temp_v7;
      DAT_0064c090 = temp_v7;
      DAT_0064c094 = temp_v7;
      DAT_0064c098 = _ZZN2nw4math5MTX448IdentityEvE8identity;
      DAT_0064c09c = temp_v7;
      DAT_0064c0a0 = temp_v7;
      DAT_0064c0a4 = temp_v7;
      DAT_0064c0a8 = temp_v7;
      DAT_0064c0ac = _ZZN2nw4math5MTX448IdentityEvE8identity;
      DAT_0064c0b0 = temp_v7;
      DAT_0064c0b4 = temp_v7;
      DAT_0064c0b8 = temp_v7;
      DAT_0064c0bc = temp_v7;
      DAT_0064c0c0 = _ZZN2nw4math5MTX448IdentityEvE8identity;
    }
    mtx44Copy(&temp_v20,&_ZZN2nw4math5MTX448IdentityEvE8identity);
    nn_math_ARMv6_MTX34MultTranslateAsm_1B4A20(&temp_v20,&temp_v20,&temp_v49);
    FUN_001d3de0(&temp_v20,&temp_v20,temp_v52);
    nn_math_ARMv6_MTX44MultAsm(&temp_v20,&temp_v20,&temp_v32);
    renderCtxSelectTexture(g_renderCtx,*(unsigned int *)((int)param_1->field_0x14 + 0x18));
    temp_v4 = g_renderCtx;
    temp_v5 = unaff_r6 * 0x58 + 0x54;
    piVar8 = (int *)(g_renderCtx + 0x12b8);
    temp_v2 = *(int *)(param_1->field_0x2c + temp_v5);
    temp_v3 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v2;
    if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v3 != temp_v2) {
      (**(romwright_code **)(temp_v4 + 0x12d4))();
      *(unsigned char *)(temp_v4 + 0x12d0) = 0;
    }
    temp_v4 = *(int *)(param_1->field_0x2c + temp_v5);
    for (; temp_v2 = g_renderCtx, (int)unaff_r6 <= unaff_r9; unaff_r6 = unaff_r6 + 1) {
      temp_v5 = unaff_r6 * 0x58 + 0x54;
      temp_v3 = *(int *)(param_1->field_0x2c + temp_v5);
      if (temp_v3 != temp_v4) {
        piVar8 = (int *)(g_renderCtx + 0x12b8);
        temp_v4 = piVar8[*piVar8 + 2];
        piVar8[*piVar8 + 2] = temp_v3;
        if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
          (**(romwright_code **)(temp_v2 + 0x12d4))();
          *(unsigned char *)(temp_v2 + 0x12d0) = 0;
        }
        temp_v4 = *(int *)(param_1->field_0x2c + temp_v5);
      }
      pfVar4 = (float *)(param_1->field_0x2c + unaff_r6 * 0x58);
      temp_v47 = (unsigned int)temp_v18;
      uStack_9c = (unsigned int)((unsigned long long)temp_v18 >> 0x20);
      uStack_98 = (unsigned int)temp_v19;
      temp_v1 = 0;
      temp_v48 = (float)((unsigned long long)temp_v19 >> 0x20) * pfVar4[0x14];
      pfVar6 = afStack_78;
      do {
        temp_v16 = pfVar4[1];
        temp_v8 = pfVar4[2];
        temp_v14 = *pfVar4;
        temp_v12 = (float)temp_v17;
        temp_v17 = CONCAT44(temp_v29,temp_v12);
        temp_v1 = temp_v1 + 1;
        pfVar4 = pfVar4 + 3;
        temp_v12 = temp_v12 / ((float)temp_v30 * temp_v16 + (float)((unsigned long long)temp_v30 >> 0x20) * temp_v8
                          + temp_v31 + temp_v29 * temp_v14);
        *pfVar6 = (temp_v21 * temp_v16 + fStack_118 * temp_v8 + temp_v22 + temp_v20 * temp_v14) *
                  temp_v12;
        pfVar6[1] = (temp_v24 * temp_v16 + fStack_108 * temp_v8 + temp_v25 + temp_v23 * temp_v14) *
                    temp_v12;
        pfVar6[2] = (temp_v27 * temp_v16 + fStack_f8 * temp_v8 + temp_v28 + temp_v26 * temp_v14) *
                    temp_v12;
        pfVar6 = pfVar6 + 3;
      } while (temp_v1 < 4);
      FUN_0032c808();
      temp_v2 = 0;
      do {
        gpuSubmitFloatVectorsOrDefault(&temp_v47);
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      FUN_002371b0();
    }
  }
  return;
}

} /* extern "C" */
