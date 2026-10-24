/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e5004` (_code @ 0x3e5004, 0xca4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_00236288(float *);
int FUN_0036a474(int, unsigned int, float *);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_MTX34CopyAsm(float *, float *);
int nw_gfx_CalculatedTransform_UpdateRotateFlagsStrictly(float *);
int nw_gfx_CalculatedTransform_UpdateTranslateFlags(float *);

typedef struct fn_003e5004_arg0 fn_003e5004_arg0;
struct fn_003e5004_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    int field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x8];
    int field_0x24; /* +0x24 */
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0xb];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0xb];
    byte field_0x40; /* +0x40 */
};

typedef int romwright_code(...);
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
/* stack frame of param_3: 36 slot(s), 144 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp138; /* 0x138: local_138 */
} param_3_stack;

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */
extern unsigned int _ZGVZN2nw4math5MTX348IdentityEvE8identity; /* 0x476634 */
extern float _ZZN2nw4math5MTX348IdentityEvE8identity; /* 0x4efd6c */
extern float DAT_004efd70; /* 0x4efd70 */
extern float DAT_004efd74; /* 0x4efd74 */
extern float DAT_004efd78; /* 0x4efd78 */
extern float DAT_004efd7c; /* 0x4efd7c */
extern float DAT_004efd80; /* 0x4efd80 */
extern float DAT_004efd84; /* 0x4efd84 */
extern float DAT_004efd88; /* 0x4efd88 */
extern float DAT_004efd8c; /* 0x4efd8c */
extern float DAT_004efd90; /* 0x4efd90 */
extern float DAT_004efd94; /* 0x4efd94 */
extern float DAT_004efd98; /* 0x4efd98 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00236288. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: FUN_0036a474. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateRotateFlagsStrictly. */
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateTranslateFlags. */


int FUN_003e5004(fn_003e5004_arg0 *param_1,int param_2,int param_3)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr; 8 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  float *pfVar5;
  int temp_v3;
  unsigned char temp_v4;
  int *piVar8;
  int temp_v5;
  int *piVar10;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  unsigned int temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  unsigned int temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  int *temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  unsigned int temp_v39;
  int temp_v40;
  unsigned int temp_v41;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  float temp_v46;
  float temp_v47;
  float temp_v48;
  unsigned int temp_v49;
  float temp_v50;
  unsigned int uStack_ac;
  int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int temp_v51;
  float fStack_8c;
  float fStack_88;
  float temp_v52;
  float temp_v53;
  float fStack_7c;
  float temp_v54;
  int *piStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float temp_v55;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  fn_003e5004_arg0 *pfStack_30;
  int temp_v56;
  int temp_v57;
  
  temp_v7 = 0.0f;
  piVar8 = (int *)(*(int *)((int)param_1->field_0x8 + 8) + 0x14);
  temp_v5 = *piVar8;
  if (temp_v5 != 0) {
    temp_v5 = (int)piVar8 + temp_v5;
  }
  else {
    temp_v5 = 0;
  }
  if (temp_v5 == 0) {
    temp_v5 = 0;
  }
  else {
    piVar8 = (int *)(temp_v5 + param_3 * 0x10 + 0x28);
    temp_v5 = *piVar8;
    if (temp_v5 != 0) {
      temp_v5 = (int)piVar8 + temp_v5;
    }
    else {
      temp_v5 = 0;
    }
  }
  temp_v19 = 0x3f800000;
  temp_v18 = 1.0f;
  temp_v3 = param_1->field_0x14;
  piVar8 = *(int **)(*(int *)((int)param_1->field_0x8 + 0x10) + *(int *)(temp_v5 + 0xc) * 4);
  temp_v20 = 0.0f;
  temp_v5 = (param_1->field_0x18 - temp_v3) >> 2;
  pfStack_30 = param_1;
  temp_v56 = param_2;
  temp_v57 = param_3;
  if (param_1->field_0x40 != 0) {
    temp_v8 = 0.0f;
    temp_v6 = 0.0f;
    temp_v3 = 0;
    if (0 < temp_v5) {
      do {
        piVar10 = *(int **)(param_1->field_0x14 + temp_v3 * 4);
        if (((piVar10 != (int *)0x0) &&
            (temp_v18 = *(float *)(param_1->field_0x24 + temp_v3 * 4), (int)romwright_fabs_4(temp_v18) >= 0x3a831270))
           && (temp_v5 = (**(romwright_code **)(*piVar10 + 0x1c))(piVar10,temp_v57), temp_v5 != 0)) {
          temp_v27 = (int *)0x44e870;
          piVar2 = (int *)(**(romwright_code **)(*piVar10 + 8))(piVar10);
          do {
            if (piVar2 == temp_v27) {
              if (piVar10 != (int *)0x0) {
                if (*(char *)((int)piVar10 + 0x5b) == '\0') {
                  temp_v8 = temp_v8 + temp_v18;
                }
                if ((char)piVar10[0x17] == '\0') {
                  temp_v6 = temp_v6 + temp_v18;
                }
                if (*(char *)((int)piVar10 + 0x5d) != '\0') goto LAB_003e5188;
                goto LAB_003e517c;
              }
              break;
            }
            piVar2 = (int *)*piVar2;
          } while (piVar2 != (int *)0x0);
          temp_v8 = temp_v8 + temp_v18;
          temp_v6 = temp_v6 + temp_v18;
LAB_003e517c:
          temp_v7 = temp_v7 + temp_v18;
        }
LAB_003e5188:
        temp_v18 = (float)temp_v19;
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < (param_1->field_0x18 - param_1->field_0x14) >> 2);
    }
    temp_v5 = temp_v56;
    if ((((int)romwright_fabs_4(temp_v8) >= 0x3a831270) || ((int)romwright_fabs_4(temp_v6) >= 0x3a831270)) ||
       ((int)romwright_fabs_4(temp_v7) >= 0x3a831270)) {
      temp_v21 = romwright_fabs_4(temp_v8 - temp_v18);
      if ((int)romwright_fabs_4(temp_v8 - temp_v18) >= 0x3a831270) {
        temp_v21 = romwright_fabs_4(temp_v8);
      }
      temp_v13 = temp_v18;
      if ((int)temp_v21 >= 0x3a831270) {
        temp_v13 = temp_v18 / temp_v8;
      }
      temp_v8 = temp_v18;
      if (((int)romwright_fabs_4(temp_v6 - temp_v18) >= 0x3a831270) && ((int)romwright_fabs_4(temp_v6) >= 0x3a831270)) {
        temp_v8 = temp_v18 / temp_v6;
      }
      temp_v6 = temp_v18;
      if (((int)romwright_fabs_4(temp_v7 - temp_v18) >= 0x3a831270) && ((int)romwright_fabs_4(temp_v7) >= 0x3a831270)) {
        temp_v6 = temp_v18 / temp_v7;
      }
      temp_v19 = CONCAT44(temp_v8,temp_v6);
      temp_v28 = *(float *)(temp_v56 + 0x3c);
      temp_v10 = (~(unsigned int)temp_v28 & 0x40000000) == 0;
      *(unsigned int *)(temp_v56 + 0x3c) = (unsigned int)temp_v28 | 0x4000001c;
      if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v3 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v3 != 0)) {
        _ZZN2nw4math5MTX348IdentityEvE8identity = temp_v18;
        DAT_004efd70 = temp_v20;
        DAT_004efd74 = temp_v20;
        DAT_004efd78 = temp_v20;
        DAT_004efd7c = temp_v20;
        DAT_004efd80 = temp_v18;
        DAT_004efd84 = temp_v20;
        DAT_004efd88 = temp_v20;
        DAT_004efd8c = temp_v20;
        DAT_004efd90 = temp_v20;
        DAT_004efd94 = temp_v18;
        DAT_004efd98 = temp_v20;
      }
      nn_math_ARMv6_MTX34CopyAsm(&temp_v38,&_ZZN2nw4math5MTX348IdentityEvE8identity);
      temp_v49 = 0x801;
      temp_v36 = 0.0f;
      temp_v23 = 0x7e0;
      temp_v9 = 1;
      temp_v3 = (param_1->field_0x18 - param_1->field_0x14) >> 2;
      temp_v46 = temp_v18;
      temp_v47 = temp_v18;
      temp_v48 = temp_v18;
      while (temp_v3 = temp_v3 - 1, -1 < temp_v3) {
        piVar10 = *(int **)(param_1->field_0x14 + temp_v3 * 4);
        if (piVar10 != (int *)0x0) {
          temp_v34 = *(float *)(param_1->field_0x24 + temp_v3 * 4);
          temp_v32 = temp_v13 * temp_v34;
          temp_v33 = (float)((unsigned long long)temp_v19 >> 0x20) * temp_v34;
          temp_v34 = (float)temp_v19 * temp_v34;
          piVar2 = (int *)(**(romwright_code **)(*piVar10 + 8))(piVar10);
          do {
            if (piVar2 == (int *)0x44e870) {
              if (piVar10 != (int *)0x0) {
                if (*(char *)((int)piVar10 + 0x5b) != '\0') {
                  temp_v32 = -1.0f;
                }
                if ((char)piVar10[0x17] != '\0') {
                  temp_v33 = -1.0f;
                }
                if (*(char *)((int)piVar10 + 0x5d) != '\0') {
                  temp_v34 = -1.0f;
                }
              }
              break;
            }
            piVar2 = (int *)*piVar2;
          } while (piVar2 != (int *)0x0);
          if ((((int)romwright_fabs_4(temp_v32) >= 0x3a831270) || ((int)romwright_fabs_4(temp_v33) >= 0x3a831270)) ||
             ((int)romwright_fabs_4(temp_v34) >= 0x3a831270)) {
            if (temp_v10) {
              temp_v49 = temp_v49 | 0x40000000;
            }
            else {
              temp_v49 = temp_v49 & 0xbfffffff;
            }
            temp_v30 = (float)(**(romwright_code **)(*piVar10 + 0x18))(piVar10,&temp_v38,temp_v57);
            if (temp_v30 != 0.0f) {
              temp_v36 = 1.4013e-45f;
              if (piVar10 != (int *)0x0) {
                piVar2 = (int *)(**(romwright_code **)(*piVar10 + 8))(piVar10);
                do {
                  if (piVar2 == (int *)0x44e870) {
                    if (piVar10 != (int *)0x0) {
                      temp_v1 = 1;
                      goto LAB_003e54d4;
                    }
                    break;
                  }
                  piVar2 = (int *)*piVar2;
                } while (piVar2 != (int *)0x0);
              }
              temp_v1 = 0;
LAB_003e54d4:
              if (((temp_v1 & temp_v9) != 0) && ((~temp_v49 & 0x10) != 0)) {
                temp_v50 = temp_v38;
                uStack_ac = temp_v39;
                uStack_a8 = temp_v40;
                uStack_a4 = temp_v41;
                uStack_a0 = uStack_e0;
                uStack_9c = uStack_dc;
                uStack_98 = uStack_d8;
                uStack_94 = uStack_d4;
                temp_v9 = 0;
                temp_v51 = temp_v42;
                fStack_8c = temp_v43;
                fStack_88 = temp_v44;
                temp_v52 = temp_v45;
              }
              temp_v2 = (**(romwright_code **)(*piVar8 + 8))(piVar8,temp_v5,0,temp_v30,&temp_v32);
              if (temp_v2 == 0) break;
              temp_v23 = temp_v49 & temp_v23;
            }
          }
        }
      }
      if (!temp_v10) {
        *(unsigned int *)(temp_v5 + 0x3c) = *(unsigned int *)(temp_v5 + 0x3c) & 0xbfffffff;
      }
      if (temp_v36 != 0.0f) {
        if (((!temp_v10) && (*(char *)((int)piVar8 + 5) != '\0')) &&
           (temp_v3 = (**(romwright_code **)(*piVar8 + 0xc))(piVar8,temp_v5,0), temp_v3 == 0)) {
          FUN_0036a474(temp_v5,temp_v9 ^ 1,&temp_v50);
        }
        *(unsigned int *)(temp_v5 + 0x3c) = temp_v23 | (*(unsigned int *)(temp_v5 + 0x3c) & 0xfffff81f);
        return temp_v56;
      }
      *(unsigned int *)(temp_v5 + 0x3c) = ((unsigned int)temp_v28 & 0x1c) | (*(unsigned int *)(temp_v5 + 0x3c) & 0xffffffe3);
      return 0;
    }
  }
  else {
    temp_v2 = 0;
    if (0 < temp_v5) {
      do {
        piVar10 = *(int **)(temp_v3 + temp_v2 * 4);
        if (piVar10 != (int *)0x0) {
          temp_v5 = (**(romwright_code **)(*piVar10 + 0x1c))(piVar10,temp_v57);
          temp_v7 = (float)temp_v19;
          if (temp_v5 != 0) {
            temp_v10 = *(char *)((int)param_1 + 0x41) != '\0';
            temp_v0 = '\0';
            if (temp_v10) {
              temp_v0 = *(char *)((int)param_1 + 0x42);
            }
            if (temp_v10 && temp_v0 != '\0') {
              temp_v3 = 0;
              temp_v5 = (*(int *)&param_1->field_0x28 - param_1->field_0x24) >> 2;
              temp_v18 = temp_v20;
              if (0 < temp_v5) {
                do {
                  temp_v2 = temp_v3 * 4;
                  temp_v3 = temp_v3 + 1;
                  temp_v18 = *(float *)(param_1->field_0x24 + temp_v2) + temp_v18;
                } while (temp_v3 < (*(int *)&param_1->field_0x28 - param_1->field_0x24) >> 2);
              }
              temp_v6 = temp_v7;
              if (((int)romwright_fabs_4(temp_v18 - temp_v7) >= 0x3a831270) && ((int)romwright_fabs_4(temp_v18) >= 0x3a831270)) {
                temp_v6 = temp_v7 / temp_v18;
              }
              temp_v3 = 0;
              if (0 < temp_v5) {
                do {
                  temp_v5 = temp_v3 + 1;
                  *(float *)(*(int *)&param_1->field_0x34 + temp_v3 * 4) =
                       *(float *)(param_1->field_0x24 + temp_v3 * 4) * temp_v6;
                  temp_v3 = temp_v5;
                } while (temp_v5 < (*(int *)&param_1->field_0x28 - param_1->field_0x24) >> 2);
              }
              *(unsigned char *)((int)param_1 + 0x41) = 0;
            }
            temp_v40 = temp_v56;
            temp_v52 = (float)(unsigned int)((~*(unsigned int *)(temp_v56 + 0x3c) & 0x40000000) == 0);
            *(unsigned int *)(temp_v56 + 0x3c) = *(unsigned int *)(temp_v56 + 0x3c) | 0x4000001c;
            if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v5 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v5 != 0)) {
              _ZZN2nw4math5MTX348IdentityEvE8identity = temp_v7;
              DAT_004efd70 = temp_v20;
              DAT_004efd74 = temp_v20;
              DAT_004efd78 = temp_v20;
              DAT_004efd7c = temp_v20;
              DAT_004efd80 = temp_v7;
              DAT_004efd84 = temp_v20;
              DAT_004efd88 = temp_v20;
              DAT_004efd8c = temp_v20;
              DAT_004efd90 = temp_v20;
              DAT_004efd94 = temp_v7;
              DAT_004efd98 = temp_v20;
            }
            nn_math_ARMv6_MTX34CopyAsm(&temp_v24,&_ZZN2nw4math5MTX348IdentityEvE8identity);
            temp_v39 = 0x801;
            temp_v42 = 1;
            temp_v41 = 0x7e0;
            temp_v5 = ((param_1->field_0x18 - param_1->field_0x14) >> 2) - 1;
            temp_v36 = temp_v7;
            temp_v37 = temp_v7;
            temp_v38 = temp_v7;
            if (-1 < temp_v5) {
              temp_v22 = 0x4222f983;
              temp_v19 = CONCAT44(temp_v20,0x47800000);
              do {
                temp_v43 = *(float *)(*(int *)&param_1->field_0x34 + temp_v5 * 4);
                piVar10 = *(int **)(param_1->field_0x14 + temp_v5 * 4);
                temp_v44 = temp_v43;
                temp_v45 = temp_v43;
                if ((int)romwright_fabs_4(temp_v43) >= 0x3a831270) {
                  if (temp_v52 != 0.0f) {
                    temp_v39 = temp_v39 | 0x40000000;
                  }
                  else {
                    temp_v39 = temp_v39 & 0xbfffffff;
                  }
                  if ((piVar10 == (int *)0x0) ||
                     (pfVar5 = (float *)(**(romwright_code **)(*piVar10 + 0x18))(piVar10,&temp_v24),
                     pfVar5 == (float *)0x0)) {
                    pfVar5 = *(float **)(*(int *)((int)param_1->field_0x8 + 0x54) + temp_v57 * 4);
                    temp_v36 = *pfVar5;
                    temp_v37 = pfVar5[1];
                    temp_v38 = pfVar5[2];
                    temp_v21 = (float)temp_v22;
                    temp_v8 = (float)((unsigned long long)temp_v19 >> 0x20);
                    temp_v9 = in_fpscr & 0xfffffff;
                    temp_v20 = romwright_fabs_4(pfVar5[4] * temp_v21);
                    in_fpscr = temp_v9 | ((unsigned int)(temp_v8 <= pfVar5[5] * temp_v21) << 0x1d);
                    temp_v48 = (float)(unsigned int)(pfVar5[4] * temp_v21 < temp_v8);
                    temp_v18 = romwright_fabs_4(pfVar5[5] * temp_v21);
                    temp_v50 = (float)(unsigned int)!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
                    temp_v6 = (float)temp_v19;
                    for (temp_v7 = romwright_fabs_4(pfVar5[3] * temp_v21); (int)temp_v7 >= 0x47800000;
                        temp_v7 = temp_v7 - temp_v6) {
                    }
                    for (; (int)temp_v20 >= 0x47800000; temp_v20 = temp_v20 - temp_v6) {
                    }
                    for (; (int)temp_v18 >= 0x47800000; temp_v18 = temp_v18 - temp_v6) {
                    }
                    temp_v11 = VectorFloatToUnsigned(temp_v7,3);
                    temp_v1 = VectorFloatToUnsigned(temp_v20,3);
                    temp_v12 = VectorFloatToUnsigned(temp_v18,3);
                    temp_v4 = temp_v11;
                    temp_v17 = (float)VectorUnsignedToFloat
                                              (temp_v11 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v16 = (float)VectorUnsignedToFloat
                                              (temp_v1 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v1 = temp_v1 & 0xff;
                    temp_v15 = (float)VectorUnsignedToFloat
                                              (temp_v12 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v12 = temp_v12 & 0xff;
                    temp_v13 = (float)(&DAT_00407ed0)[temp_v4 * 4] +
                             (temp_v7 - temp_v17) * (float)(&DAT_00407ed8)[temp_v4 * 4];
                    temp_v6 = (float)(&DAT_00407ed0)[temp_v1 * 4] +
                             (temp_v20 - temp_v16) * (float)*(unsigned long long *)(&DAT_00407ed8 + temp_v1 * 4);
                    temp_v14 = (float)(&DAT_00407ed0)[temp_v12 * 4] +
                             (temp_v18 - temp_v15) * (float)(&DAT_00407ed8)[temp_v12 * 4];
                    temp_v7 = (float)(&DAT_00407ed4)[temp_v4 * 4] +
                             (temp_v7 - temp_v17) * (float)(&DAT_00407edc)[temp_v4 * 4];
                    temp_v18 = (float)(&DAT_00407ed4)[temp_v12 * 4] +
                             (temp_v18 - temp_v15) * (float)(&DAT_00407edc)[temp_v12 * 4];
                    if (pfVar5[3] * temp_v21 < temp_v8) {
                      temp_v13 = -temp_v13;
                    }
                    if (temp_v48 != 0.0f) {
                      temp_v6 = -temp_v6;
                    }
                    temp_v34 = (float)(&DAT_00407ed4)[temp_v1 * 4] +
                                (temp_v20 - temp_v16) *
                                (float)((unsigned long long)*(unsigned long long *)(&DAT_00407ed8 + temp_v1 * 4) >>
                                       0x20);
                    if (temp_v50 != 0.0f) {
                      temp_v14 = -temp_v14;
                    }
                    temp_v24 = temp_v18 * temp_v34;
                    temp_v28 = temp_v14 * temp_v34;
                    temp_v33 = temp_v13 * temp_v34;
                    temp_v34 = temp_v7 * temp_v34;
                    temp_v32 = -temp_v6;
                    temp_v26 = temp_v13 * temp_v14 + temp_v7 * temp_v18 * temp_v6;
                    temp_v29 = temp_v7 * temp_v18 + temp_v13 * temp_v14 * temp_v6;
                    temp_v25 = temp_v13 * temp_v18 * temp_v6 - temp_v7 * temp_v14;
                    temp_v30 = temp_v7 * temp_v14 * temp_v6 - temp_v13 * temp_v18;
                    temp_v27 = (int *)romwright_f2u((float)(pfVar5[6]));
                    temp_v31 = pfVar5[7];
                    temp_v35 = pfVar5[8];
                    temp_v1 = temp_v39 | 0x800;
                    if ((temp_v39 & 8) == 0) {
                      temp_v39 = temp_v39 & 0xfffff9ff;
                      in_fpscr = temp_v9 | ((unsigned int)(temp_v36 == temp_v37) << 0x1e);
                      temp_v1 = temp_v39 | 0x800;
                      if (((romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) &&
                          (in_fpscr = temp_v9 | ((unsigned int)(temp_v36 == temp_v38) << 0x1e),
                          romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0))) && (temp_v1 = temp_v39 | 0xc00, temp_v36 == 1.0f)
                         ) {
                        temp_v1 = temp_v39 | 0xe00;
                      }
                    }
                    temp_v39 = temp_v1;
                    nw_gfx_CalculatedTransform_UpdateRotateFlagsStrictly(&temp_v24);
                    nw_gfx_CalculatedTransform_UpdateTranslateFlags(&temp_v24);
                    FUN_00236288(&temp_v24);
                    pfVar5 = &temp_v24;
                  }
                  if (piVar10 != (int *)0x0) {
                    piVar2 = (int *)(**(romwright_code **)(*piVar10 + 8))(piVar10);
                    do {
                      if (piVar2 == (int *)0x44e870) {
                        if (piVar10 != (int *)0x0) {
                          temp_v9 = 1;
                          goto LAB_003e5b84;
                        }
                        break;
                      }
                      piVar2 = (int *)*piVar2;
                    } while (piVar2 != (int *)0x0);
                  }
                  temp_v9 = 0;
LAB_003e5b84:
                  if (((temp_v9 & temp_v42) != 0) && ((~temp_v39 & 0x10) != 0)) {
                    temp_v53 = temp_v24;
                    fStack_7c = temp_v25;
                    temp_v42 = 0;
                    temp_v54 = temp_v26;
                    piStack_74 = temp_v27;
                    fStack_70 = temp_v28;
                    fStack_6c = temp_v29;
                    fStack_68 = temp_v30;
                    fStack_64 = temp_v31;
                    temp_v55 = temp_v32;
                    fStack_5c = temp_v33;
                    fStack_58 = temp_v34;
                    fStack_54 = temp_v35;
                  }
                  temp_v3 = (**(romwright_code **)(*piVar8 + 8))(piVar8,temp_v40,0,pfVar5,&temp_v43);
                  if (temp_v3 == 0) break;
                  temp_v41 = temp_v41 & temp_v39;
                }
                temp_v5 = temp_v5 - 1;
              } while (-1 < temp_v5);
            }
            if (((temp_v52 == 0.0f) &&
                (*(unsigned int *)(temp_v40 + 0x3c) = *(unsigned int *)(temp_v40 + 0x3c) & 0xbfffffff,
                *(char *)((int)piVar8 + 5) != '\0')) &&
               (temp_v5 = (**(romwright_code **)(*piVar8 + 0xc))(piVar8,temp_v40,0), temp_v5 == 0)) {
              FUN_0036a474(temp_v40,temp_v42 ^ 1,&temp_v53);
            }
            *(unsigned int *)(temp_v40 + 0x3c) =
                 (*(unsigned int *)(temp_v40 + 0x3c) & 0xfffff81f) | (temp_v41 & 0x7e0);
            return temp_v56;
          }
        }
        temp_v3 = param_1->field_0x14;
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (param_1->field_0x18 - temp_v3) >> 2);
    }
  }
  return 0;
}

} /* extern "C" */
