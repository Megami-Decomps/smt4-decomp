/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00506278` (_code @ 0x506278, 0xca4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00506278_arg0 fn_00506278_arg0;
struct fn_00506278_arg0 {
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

typedef int romwright_code();
/* stack frame of param_3: 36 slot(s), 144 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
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
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp138; /* 0x138: local_138 */
} param_3_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern float DAT_0064c054; /* 0x64c054 */
extern float DAT_0064c058; /* 0x64c058 */
extern float DAT_0064c05c; /* 0x64c05c */
extern float DAT_0064c060; /* 0x64c060 */
extern float DAT_0064c064; /* 0x64c064 */
extern float DAT_0064c068; /* 0x64c068 */
extern float DAT_0064c06c; /* 0x64c06c */
extern float DAT_0064c070; /* 0x64c070 */
extern float DAT_0064c074; /* 0x64c074 */
extern float DAT_0064c078; /* 0x64c078 */
extern float DAT_0064c07c; /* 0x64c07c */
extern float DAT_0064c080; /* 0x64c080 */

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
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: FUN_0044b92c. */
/* Supplied declaration required: FUN_0044bd1c. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateRotateFlagsStrictly. */
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateTranslateFlags. */


int FUN_00506278(fn_00506278_arg0 *param_1,int param_2,int param_3)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  int temp_v3;
  float *pfVar6;
  int temp_v4;
  unsigned char temp_v5;
  int *piVar9;
  int temp_v6;
  int *piVar11;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  unsigned int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned long long temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  float temp_v26;
  float temp_v27;
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
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float fStack_e0;
  float fStack_dc;
  float temp_v42;
  float fStack_d4;
  unsigned int temp_v43;
  unsigned int uStack_cc;
  float temp_v44;
  float temp_v45;
  float temp_v46;
  float temp_v47;
  float temp_v48;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float temp_v49;
  float fStack_9c;
  float temp_v50;
  float fStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  float temp_v51;
  float temp_v52;
  float temp_v53;
  unsigned int temp_v54;
  fn_00506278_arg0 *pfStack_30;
  int temp_v55;
  int temp_v56;
  
  temp_v8 = 0.0f;
  piVar9 = (int *)(*(int *)((int)param_1->field_0x8 + 8) + 0x14);
  temp_v6 = *piVar9;
  if (temp_v6 != 0) {
    temp_v6 = (int)piVar9 + temp_v6;
  }
  else {
    temp_v6 = 0;
  }
  if (temp_v6 == 0) {
    temp_v6 = 0;
  }
  else {
    piVar9 = (int *)(temp_v6 + param_3 * 0x10 + 0x28);
    temp_v6 = *piVar9;
    if (temp_v6 != 0) {
      temp_v6 = (int)piVar9 + temp_v6;
    }
    else {
      temp_v6 = 0;
    }
  }
  temp_v20 = 0x3f800000;
  temp_v19 = 1.0f;
  temp_v4 = param_1->field_0x14;
  piVar9 = *(int **)(*(int *)((int)param_1->field_0x8 + 0x10) + *(int *)(temp_v6 + 0xc) * 4);
  temp_v21 = 0.0f;
  temp_v6 = (param_1->field_0x18 - temp_v4) >> 2;
  pfStack_30 = param_1;
  temp_v55 = param_2;
  temp_v56 = param_3;
  if (param_1->field_0x40 != 0) {
    temp_v9 = 0.0f;
    temp_v7 = 0.0f;
    temp_v4 = 0;
    if (0 < temp_v6) {
      do {
        piVar11 = *(int **)(param_1->field_0x14 + temp_v4 * 4);
        if (((piVar11 != (int *)0x0) &&
            (temp_v19 = *(float *)(param_1->field_0x24 + temp_v4 * 4), (int)romwright_fabs_4(temp_v19) >= 0x3a831270))
           && (temp_v6 = (**(romwright_code **)(*piVar11 + 0x1c))(piVar11,temp_v56), temp_v6 != 0)) {
          piVar3 = (int *)(**(romwright_code **)(*piVar11 + 8))(piVar11);
          do {
            if (piVar3 == (int *)0x5c0f38) {
              if (piVar11 != (int *)0x0) {
                if (*(char *)((int)piVar11 + 0x5b) == '\0') {
                  temp_v9 = temp_v9 + temp_v19;
                }
                if ((char)piVar11[0x17] == '\0') {
                  temp_v7 = temp_v7 + temp_v19;
                }
                if (*(char *)((int)piVar11 + 0x5d) != '\0') goto LAB_005063fc;
                goto LAB_005063f0;
              }
              break;
            }
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)0x0);
          temp_v9 = temp_v9 + temp_v19;
          temp_v7 = temp_v7 + temp_v19;
LAB_005063f0:
          temp_v8 = temp_v8 + temp_v19;
        }
LAB_005063fc:
        temp_v19 = (float)temp_v20;
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < (param_1->field_0x18 - param_1->field_0x14) >> 2);
    }
    temp_v6 = temp_v55;
    if ((((int)romwright_fabs_4(temp_v9) >= 0x3a831270) || ((int)romwright_fabs_4(temp_v7) >= 0x3a831270)) ||
       ((int)romwright_fabs_4(temp_v8) >= 0x3a831270)) {
      temp_v22 = romwright_fabs_4(temp_v9 - temp_v19);
      if ((int)romwright_fabs_4(temp_v9 - temp_v19) >= 0x3a831270) {
        temp_v22 = romwright_fabs_4(temp_v9);
      }
      temp_v14 = temp_v19;
      if ((int)temp_v22 >= 0x3a831270) {
        temp_v14 = temp_v19 / temp_v9;
      }
      temp_v9 = temp_v19;
      if (((int)romwright_fabs_4(temp_v7 - temp_v19) >= 0x3a831270) && ((int)romwright_fabs_4(temp_v7) >= 0x3a831270)) {
        temp_v9 = temp_v19 / temp_v7;
      }
      temp_v7 = temp_v19;
      if (((int)romwright_fabs_4(temp_v8 - temp_v19) >= 0x3a831270) && ((int)romwright_fabs_4(temp_v8) >= 0x3a831270)) {
        temp_v7 = temp_v19 / temp_v8;
      }
      temp_v20 = CONCAT44(temp_v9,temp_v7);
      temp_v26 = *(float *)(temp_v55 + 0x3c);
      temp_v11 = (~(unsigned int)temp_v26 & 0x40000000) == 0;
      *(unsigned int *)(temp_v55 + 0x3c) = (unsigned int)temp_v26 | 0x4000001c;
      if (((DAT_005c4c2c & 1) == 0) && (temp_v4 = FUN_002eba64(&DAT_005c4c2c), temp_v4 != 0)) {
        DAT_0064c054 = temp_v19;
        DAT_0064c058 = temp_v21;
        DAT_0064c05c = temp_v21;
        DAT_0064c060 = temp_v21;
        DAT_0064c064 = temp_v21;
        DAT_0064c068 = temp_v19;
        DAT_0064c06c = temp_v21;
        DAT_0064c070 = temp_v21;
        DAT_0064c074 = temp_v21;
        DAT_0064c078 = temp_v21;
        DAT_0064c07c = temp_v19;
        DAT_0064c080 = temp_v21;
      }
      nn_math_ARMv6_MTX34CopyAsm(&temp_v36,&DAT_0064c054);
      temp_v47 = 2.87126e-42f;
      temp_v35 = 0.0f;
      temp_v25 = 0x7e0;
      temp_v10 = 1;
      temp_v4 = (param_1->field_0x18 - param_1->field_0x14) >> 2;
      temp_v44 = temp_v19;
      temp_v45 = temp_v19;
      temp_v46 = temp_v19;
      while (temp_v4 = temp_v4 - 1, -1 < temp_v4) {
        piVar11 = *(int **)(param_1->field_0x14 + temp_v4 * 4);
        if (piVar11 != (int *)0x0) {
          temp_v33 = *(float *)(param_1->field_0x24 + temp_v4 * 4);
          temp_v31 = temp_v14 * temp_v33;
          temp_v32 = (float)((unsigned long long)temp_v20 >> 0x20) * temp_v33;
          temp_v33 = (float)temp_v20 * temp_v33;
          piVar3 = (int *)(**(romwright_code **)(*piVar11 + 8))(piVar11);
          do {
            if (piVar3 == (int *)0x5c0f38) {
              if (piVar11 != (int *)0x0) {
                if (*(char *)((int)piVar11 + 0x5b) != '\0') {
                  temp_v31 = -1.0f;
                }
                if ((char)piVar11[0x17] != '\0') {
                  temp_v32 = -1.0f;
                }
                if (*(char *)((int)piVar11 + 0x5d) != '\0') {
                  temp_v33 = -1.0f;
                }
              }
              break;
            }
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)0x0);
          if ((((int)romwright_fabs_4(temp_v31) >= 0x3a831270) || ((int)romwright_fabs_4(temp_v32) >= 0x3a831270)) ||
             ((int)romwright_fabs_4(temp_v33) >= 0x3a831270)) {
            if (temp_v11) {
              temp_v47 = (float)((unsigned int)temp_v47 | 0x40000000);
            }
            else {
              temp_v47 = (float)((unsigned int)temp_v47 & 0xbfffffff);
            }
            temp_v29 = (float)(**(romwright_code **)(*piVar11 + 0x18))(piVar11,&temp_v36,temp_v56);
            if (temp_v29 != 0.0f) {
              temp_v35 = 1.4013e-45f;
              if (piVar11 != (int *)0x0) {
                piVar3 = (int *)(**(romwright_code **)(*piVar11 + 8))(piVar11);
                do {
                  if (piVar3 == (int *)0x5c0f38) {
                    if (piVar11 != (int *)0x0) {
                      temp_v2 = 1;
                      goto LAB_0050674c;
                    }
                    break;
                  }
                  piVar3 = (int *)*piVar3;
                } while (piVar3 != (int *)0x0);
              }
              temp_v2 = 0;
LAB_0050674c:
              if (((temp_v2 & temp_v10) != 0) && ((~(unsigned int)temp_v47 & 0x10) != 0)) {
                temp_v48 = temp_v36;
                fStack_b4 = temp_v37;
                fStack_b0 = temp_v38;
                fStack_ac = temp_v39;
                fStack_a8 = temp_v40;
                fStack_a4 = temp_v41;
                temp_v49 = fStack_e0;
                fStack_9c = fStack_dc;
                temp_v10 = 0;
                temp_v50 = temp_v42;
                fStack_94 = fStack_d4;
                uStack_90 = temp_v43;
                uStack_8c = uStack_cc;
              }
              temp_v3 = (**(romwright_code **)(*piVar9 + 8))(piVar9,temp_v6,0,temp_v29,&temp_v31);
              if (temp_v3 == 0) break;
              temp_v25 = (unsigned int)temp_v47 & temp_v25;
            }
          }
        }
      }
      if (!temp_v11) {
        *(unsigned int *)(temp_v6 + 0x3c) = *(unsigned int *)(temp_v6 + 0x3c) & 0xbfffffff;
      }
      if (temp_v35 != 0.0f) {
        if (((!temp_v11) && (*(char *)((int)piVar9 + 5) != '\0')) &&
           (temp_v4 = (**(romwright_code **)(*piVar9 + 0xc))(piVar9,temp_v6,0), temp_v4 == 0)) {
          FUN_0044bd1c(temp_v6,temp_v10 ^ 1,&temp_v48);
        }
        *(unsigned int *)(temp_v6 + 0x3c) = temp_v25 | (*(unsigned int *)(temp_v6 + 0x3c) & 0xfffff81f);
        return temp_v55;
      }
      *(unsigned int *)(temp_v6 + 0x3c) = ((unsigned int)temp_v26 & 0x1c) | (*(unsigned int *)(temp_v6 + 0x3c) & 0xffffffe3);
      return 0;
    }
  }
  else {
    temp_v3 = 0;
    if (0 < temp_v6) {
      do {
        piVar11 = *(int **)(temp_v4 + temp_v3 * 4);
        if (piVar11 != (int *)0x0) {
          temp_v4 = (**(romwright_code **)(*piVar11 + 0x1c))(piVar11,temp_v56);
          temp_v6 = temp_v55;
          temp_v8 = (float)temp_v20;
          if (temp_v4 != 0) {
            temp_v11 = *(char *)((int)param_1 + 0x41) != '\0';
            temp_v1 = '\0';
            if (temp_v11) {
              temp_v1 = *(char *)((int)param_1 + 0x42);
            }
            if (temp_v11 && temp_v1 != '\0') {
              temp_v3 = 0;
              temp_v4 = (*(int *)&param_1->field_0x28 - param_1->field_0x24) >> 2;
              temp_v19 = temp_v21;
              if (0 < temp_v4) {
                do {
                  temp_v0 = temp_v3 * 4;
                  temp_v3 = temp_v3 + 1;
                  temp_v19 = *(float *)(param_1->field_0x24 + temp_v0) + temp_v19;
                } while (temp_v3 < (*(int *)&param_1->field_0x28 - param_1->field_0x24) >> 2);
              }
              temp_v7 = temp_v8;
              if (((int)romwright_fabs_4(temp_v19 - temp_v8) >= 0x3a831270) && ((int)romwright_fabs_4(temp_v19) >= 0x3a831270)) {
                temp_v7 = temp_v8 / temp_v19;
              }
              temp_v3 = 0;
              if (0 < temp_v4) {
                do {
                  temp_v4 = temp_v3 + 1;
                  *(float *)(*(int *)&param_1->field_0x34 + temp_v3 * 4) =
                       *(float *)(param_1->field_0x24 + temp_v3 * 4) * temp_v7;
                  temp_v3 = temp_v4;
                } while (temp_v4 < (*(int *)&param_1->field_0x28 - param_1->field_0x24) >> 2);
              }
              *(unsigned char *)((int)param_1 + 0x41) = 0;
            }
            temp_v54 = (unsigned int)((~*(unsigned int *)(temp_v55 + 0x3c) & 0x40000000) == 0);
            *(unsigned int *)(temp_v55 + 0x3c) = *(unsigned int *)(temp_v55 + 0x3c) | 0x4000001c;
            if (((DAT_005c4c2c & 1) == 0) && (temp_v4 = FUN_002eba64(&DAT_005c4c2c), temp_v4 != 0)) {
              DAT_0064c054 = temp_v8;
              DAT_0064c058 = temp_v21;
              DAT_0064c05c = temp_v21;
              DAT_0064c060 = temp_v21;
              DAT_0064c064 = temp_v21;
              DAT_0064c068 = temp_v8;
              DAT_0064c06c = temp_v21;
              DAT_0064c070 = temp_v21;
              DAT_0064c074 = temp_v21;
              DAT_0064c078 = temp_v21;
              DAT_0064c07c = temp_v8;
              DAT_0064c080 = temp_v21;
            }
            nn_math_ARMv6_MTX34CopyAsm(&temp_v26,&DAT_0064c054);
            temp_v41 = 2.87126e-42f;
            temp_v43 = 1;
            temp_v24 = 0x7e0;
            temp_v4 = ((param_1->field_0x18 - param_1->field_0x14) >> 2) - 1;
            temp_v38 = temp_v8;
            temp_v39 = temp_v8;
            temp_v40 = temp_v8;
            if (-1 < temp_v4) {
              temp_v23 = 0x4222f983;
              temp_v20 = CONCAT44(temp_v21,0x47800000);
              do {
                temp_v51 = *(float *)(*(int *)&param_1->field_0x34 + temp_v4 * 4);
                piVar11 = *(int **)(param_1->field_0x14 + temp_v4 * 4);
                temp_v52 = temp_v51;
                temp_v53 = temp_v51;
                if ((int)romwright_fabs_4(temp_v51) >= 0x3a831270) {
                  if (temp_v54 != 0) {
                    temp_v41 = (float)((unsigned int)temp_v41 | 0x40000000);
                  }
                  else {
                    temp_v41 = (float)((unsigned int)temp_v41 & 0xbfffffff);
                  }
                  if ((piVar11 == (int *)0x0) ||
                     (pfVar6 = (float *)(**(romwright_code **)(*piVar11 + 0x18))(piVar11,&temp_v26,temp_v56),
                     pfVar6 == (float *)0x0)) {
                    pfVar6 = *(float **)(*(int *)((int)param_1->field_0x8 + 0x54) + temp_v56 * 4);
                    temp_v38 = *pfVar6;
                    temp_v39 = pfVar6[1];
                    temp_v40 = pfVar6[2];
                    temp_v22 = (float)temp_v23;
                    temp_v9 = (float)((unsigned long long)temp_v20 >> 0x20);
                    temp_v10 = in_fpscr & 0xfffffff;
                    temp_v21 = romwright_fabs_4(pfVar6[4] * temp_v22);
                    in_fpscr = temp_v10 | ((unsigned int)(temp_v9 <= pfVar6[5] * temp_v22) << 0x1d);
                    temp_v45 = (float)(unsigned int)(pfVar6[4] * temp_v22 < temp_v9);
                    temp_v19 = romwright_fabs_4(pfVar6[5] * temp_v22);
                    temp_v44 = (float)(unsigned int)!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0);
                    temp_v7 = (float)temp_v20;
                    for (temp_v8 = romwright_fabs_4(pfVar6[3] * temp_v22); (int)temp_v8 >= 0x47800000;
                        temp_v8 = temp_v8 - temp_v7) {
                    }
                    for (; (int)temp_v21 >= 0x47800000; temp_v21 = temp_v21 - temp_v7) {
                    }
                    for (; (int)temp_v19 >= 0x47800000; temp_v19 = temp_v19 - temp_v7) {
                    }
                    temp_v12 = VectorFloatToUnsigned(temp_v8,3);
                    temp_v2 = VectorFloatToUnsigned(temp_v21,3);
                    temp_v13 = VectorFloatToUnsigned(temp_v19,3);
                    temp_v5 = temp_v12;
                    temp_v18 = (float)VectorUnsignedToFloat
                                              (temp_v12 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v17 = (float)VectorUnsignedToFloat
                                              (temp_v2 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v2 = temp_v2 & 0xff;
                    temp_v16 = (float)VectorUnsignedToFloat
                                              (temp_v13 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v13 = temp_v13 & 0xff;
                    temp_v14 = (float)(&DAT_00536d14)[temp_v5 * 4] +
                             (temp_v8 - temp_v18) * (float)(&DAT_00536d1c)[temp_v5 * 4];
                    temp_v7 = (float)(&DAT_00536d14)[temp_v2 * 4] +
                             (temp_v21 - temp_v17) * (float)*(unsigned long long *)(&DAT_00536d1c + temp_v2 * 4);
                    temp_v15 = (float)(&DAT_00536d14)[temp_v13 * 4] +
                             (temp_v19 - temp_v16) * (float)(&DAT_00536d1c)[temp_v13 * 4];
                    temp_v8 = (float)(&DAT_00536d18)[temp_v5 * 4] +
                             (temp_v8 - temp_v18) * (float)(&DAT_00536d20)[temp_v5 * 4];
                    temp_v19 = (float)(&DAT_00536d18)[temp_v13 * 4] +
                             (temp_v19 - temp_v16) * (float)(&DAT_00536d20)[temp_v13 * 4];
                    temp_v36 = (float)(&DAT_00536d18)[temp_v2 * 4] +
                               (temp_v21 - temp_v17) *
                               (float)((unsigned long long)*(unsigned long long *)(&DAT_00536d1c + temp_v2 * 4) >> 0x20
                                      );
                    if (pfVar6[3] * temp_v22 < temp_v9) {
                      temp_v14 = -temp_v14;
                    }
                    if (temp_v45 != 0.0f) {
                      temp_v7 = -temp_v7;
                    }
                    if (temp_v44 != 0.0f) {
                      temp_v15 = -temp_v15;
                    }
                    temp_v26 = temp_v19 * temp_v36;
                    temp_v30 = temp_v15 * temp_v36;
                    temp_v35 = temp_v14 * temp_v36;
                    temp_v36 = temp_v8 * temp_v36;
                    temp_v34 = -temp_v7;
                    temp_v28 = temp_v14 * temp_v15 + temp_v8 * temp_v19 * temp_v7;
                    temp_v31 = temp_v8 * temp_v19 + temp_v14 * temp_v15 * temp_v7;
                    temp_v27 = temp_v14 * temp_v19 * temp_v7 - temp_v8 * temp_v15;
                    temp_v32 = temp_v8 * temp_v15 * temp_v7 - temp_v14 * temp_v19;
                    temp_v29 = pfVar6[6];
                    temp_v33 = pfVar6[7];
                    temp_v37 = pfVar6[8];
                    temp_v8 = (float)((unsigned int)temp_v41 | 0x800);
                    if (((unsigned int)temp_v41 & 8) == 0) {
                      temp_v2 = (unsigned int)temp_v41 & 0xfffff9ff;
                      in_fpscr = temp_v10 | ((unsigned int)(temp_v38 == temp_v39) << 0x1e);
                      temp_v8 = (float)(temp_v2 | 0x800);
                      if (((romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) &&
                          (in_fpscr = temp_v10 | ((unsigned int)(temp_v38 == temp_v40) << 0x1e),
                          romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0))) &&
                         (temp_v8 = (float)(temp_v2 | 0xc00), temp_v38 == 1.0f)) {
                        temp_v8 = (float)(temp_v2 | 0xe00);
                      }
                    }
                    temp_v41 = temp_v8;
                    nw_gfx_CalculatedTransform_UpdateRotateFlagsStrictly(&temp_v26);
                    nw_gfx_CalculatedTransform_UpdateTranslateFlags(&temp_v26);
                    FUN_0044b92c(&temp_v26);
                    pfVar6 = &temp_v26;
                  }
                  if (piVar11 != (int *)0x0) {
                    piVar3 = (int *)(**(romwright_code **)(*piVar11 + 8))(piVar11);
                    do {
                      if (piVar3 == (int *)0x5c0f38) {
                        if (piVar11 != (int *)0x0) {
                          temp_v10 = 1;
                          goto LAB_00506df8;
                        }
                        break;
                      }
                      piVar3 = (int *)*piVar3;
                    } while (piVar3 != (int *)0x0);
                  }
                  temp_v10 = 0;
LAB_00506df8:
                  if (((temp_v10 & temp_v43) != 0) && ((~(unsigned int)temp_v41 & 0x10) != 0)) {
                    temp_v46 = temp_v26;
                    temp_v47 = temp_v27;
                    temp_v43 = 0;
                    temp_v48 = temp_v28;
                    fStack_b4 = temp_v29;
                    fStack_b0 = temp_v30;
                    fStack_ac = temp_v31;
                    fStack_a8 = temp_v32;
                    fStack_a4 = temp_v33;
                    temp_v49 = temp_v34;
                    fStack_9c = temp_v35;
                    temp_v50 = temp_v36;
                    fStack_94 = temp_v37;
                  }
                  temp_v3 = (**(romwright_code **)(*piVar9 + 8))(piVar9,temp_v6,0,pfVar6,&temp_v51);
                  if (temp_v3 == 0) break;
                  temp_v24 = temp_v24 & (unsigned int)temp_v41;
                }
                temp_v4 = temp_v4 - 1;
              } while (-1 < temp_v4);
            }
            if (((temp_v54 == 0) &&
                (*(unsigned int *)(temp_v6 + 0x3c) = *(unsigned int *)(temp_v6 + 0x3c) & 0xbfffffff,
                *(char *)((int)piVar9 + 5) != '\0')) &&
               (temp_v4 = (**(romwright_code **)(*piVar9 + 0xc))(piVar9,temp_v6,0), temp_v4 == 0)) {
              FUN_0044bd1c(temp_v6,temp_v43 ^ 1,&temp_v46);
            }
            *(unsigned int *)(temp_v6 + 0x3c) = (*(unsigned int *)(temp_v6 + 0x3c) & 0xfffff81f) | temp_v24;
            return temp_v55;
          }
        }
        temp_v4 = param_1->field_0x14;
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < (param_1->field_0x18 - temp_v4) >> 2);
    }
  }
  return 0;
}
