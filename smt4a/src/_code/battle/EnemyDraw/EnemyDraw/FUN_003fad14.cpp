/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fad14` (_code @ 0x3fad14, 0x8bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(int, unsigned int);
int FUN_0019e3d0(...);
int FUN_001aff14(int *, int);
int FUN_0020cb74(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_MTX34CopyAsm(unsigned char [84], unsigned int *);
int nn_math_ARMv6_MTX34MultAsm(...);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

typedef int romwright_code(...);
/* stack frame of param_8: 37 slot(s), 148 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp8C; /* 0x8c: local_8c */
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
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp16C; /* 0x16c: local_16c */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp178; /* 0x178: local_178 */
} param_8_stack;

extern unsigned int DAT_00570d60; /* 0x570d60 */
extern float DAT_00570d64; /* 0x570d64 */
extern int DAT_0059dbb4; /* 0x59dbb4 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int, int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0019e3d0. */
/* Supplied declaration required: FUN_001aff14. */
/* Supplied declaration required: FUN_0020cb74. */
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_003fad14(int param_1,int param_2,float *param_3,unsigned int param_4,int param_5,float *param_6,
                 int *param_7,int param_8)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0; 10 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int *piVar6;
  float *pfVar7;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  unsigned int in_s0;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  unsigned long long temp_v14;
  unsigned long long temp_v15;
  unsigned long long temp_v16;
  float temp_v17 [12];
  unsigned int temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  float temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  float temp_v30;
  unsigned int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  float temp_v34;
  unsigned char temp_v35 [84];
  int temp_v36;
  unsigned char temp_v37;
  int iStack_34;
  int iStack_30;
  float *temp_v38;
  unsigned int temp_v39;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    temp_v37 = param_4;
    temp_v39 = param_4 & 0xffffff00;
    if (param_2 < (int)(unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x10) + 6)) {
      temp_v5 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x1c) + param_2 * 4);
      temp_v6 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x1c) + param_2 * 4 + 2) + (temp_v5 - 1);
      if ((int)temp_v5 <= temp_v6) {
        temp_v14 = romwright_piece_4_4(in_s0,0x3f000000);
        temp_v13 = 0x800000003f800000;
        temp_v15 = 0;
        temp_v16 = 0x43810000;
        iStack_34 = param_1;
        iStack_30 = param_2;
        temp_v38 = param_3;
        do {
          temp_v2 = DAT_0059dbb4;
          pfVar7 = (float *)(*(int *)(param_1 + 0x18) + temp_v5 * 0x28);
          if (param_5 != 1) {
            if ((param_5 != 2 && param_5 != 3) || (*(char *)((int)pfVar7 + 0x25) != '\0')) {
LAB_003fade8:
              temp_v4 = *(unsigned char *)((int)pfVar7 + 0x22) * temp_v37;
              VectorUnsignedToFloat
                        ((unsigned int)*(unsigned char *)((int)pfVar7 + 0x23),(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v1 = temp_v4 * 0x51eb851f;
              temp_v4 = temp_v39 | (temp_v4 / 100);
              temp_v19 = *pfVar7;
              temp_v20 = pfVar7[1];
              temp_v21 = pfVar7[2];
              temp_v22 = pfVar7[3];
              if (param_6 != (float *)0x0) {
                temp_v19 = temp_v19 + *param_6;
                temp_v20 = temp_v20 + param_6[1];
              }
              temp_v0 = *(char *)((int)pfVar7 + 0x26);
              if (temp_v0 != '\0') {
                if (temp_v0 != '\x01') {
                  if (temp_v0 != '\x02') {
                    if (temp_v0 == '\x03') {
                      temp_v1 = FUN_00169294(5,0,1,temp_v1);
                      piVar6 = (int *)(temp_v2 + 0x12b8);
                      temp_v3 = piVar6[*piVar6 + 2];
                      piVar6[*piVar6 + 2] = temp_v1;
                      if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
                        (**(romwright_code **)(temp_v2 + 0x12d4))();
                        *(unsigned char *)(temp_v2 + 0x12d0) = 0;
                      }
                    }
                  }
                  else {
                    temp_v1 = FUN_00169294(6,1,2,temp_v1);
                    piVar6 = (int *)(temp_v2 + 0x12b8);
                    temp_v3 = piVar6[*piVar6 + 2];
                    piVar6[*piVar6 + 2] = temp_v1;
                    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
                      (**(romwright_code **)(temp_v2 + 0x12d4))();
                      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
                    }
                  }
                }
                else {
                  temp_v1 = FUN_00169294(6,1,0,temp_v1);
                  piVar6 = (int *)(temp_v2 + 0x12b8);
                  temp_v3 = piVar6[*piVar6 + 2];
                  piVar6[*piVar6 + 2] = temp_v1;
                  if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
                    (**(romwright_code **)(temp_v2 + 0x12d4))();
                    *(unsigned char *)(temp_v2 + 0x12d0) = 0;
                  }
                }
              }
              else {
                temp_v1 = FUN_00169294(6,7,0,temp_v1);
                piVar6 = (int *)(temp_v2 + 0x12b8);
                temp_v3 = piVar6[*piVar6 + 2];
                piVar6[*piVar6 + 2] = temp_v1;
                if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
                  (**(romwright_code **)(temp_v2 + 0x12d4))();
                  *(unsigned char *)(temp_v2 + 0x12d0) = 0;
                }
              }
              FUN_0016c4b8(DAT_0059dbb4,
                           *(unsigned int *)
                            (*(int *)(param_1 + 0x14) + (unsigned int)*(unsigned char *)(pfVar7 + 9) * 0x20 + 0x18));
              if (!(*(char *)((int)pfVar7 + 0x25) == '\0' || param_5 == 3)) {
                temp_v7 = (unsigned int)((unsigned long long)temp_v14 >> 0x20);
                temp_v36 = *(int *)(*(int *)(param_1 + 0x14) +
                                   (unsigned int)*(unsigned char *)(pfVar7 + 9) * 0x20 + 0x18);
                temp_v9 = (float)VectorUnsignedToFloat
                                          ((unsigned int)*(unsigned short *)(pfVar7 + 8),
                                           (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v18 = temp_v4;
                if (temp_v36 != 0) {
                  if (((DAT_005c4c2c & 1) == 0) && (temp_v2 = FUN_002eba64(&DAT_005c4c2c), temp_v2 != 0)
                     ) {
                    DAT_0064c058 = (unsigned int)temp_v15;
                    DAT_0064c054 = (unsigned int)temp_v13;
                    DAT_0064c05c = DAT_0064c058;
                    DAT_0064c060 = DAT_0064c058;
                    DAT_0064c064 = DAT_0064c058;
                    DAT_0064c068 = DAT_0064c054;
                    DAT_0064c06c = DAT_0064c058;
                    DAT_0064c070 = DAT_0064c058;
                    DAT_0064c074 = DAT_0064c058;
                    DAT_0064c078 = DAT_0064c058;
                    DAT_0064c07c = DAT_0064c054;
                    DAT_0064c080 = DAT_0064c058;
                  }
                  nn_math_ARMv6_MTX34CopyAsm(temp_v35,&DAT_0064c054);
                  in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 == (float)temp_v15) << 0x1e);
                  if (((!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) || (*param_7 != 0x3f800000)) ||
                     (param_7[1] != 0x3f800000)) {
                    temp_v9 = (float)((unsigned long long)temp_v13 >> 0x20);
                    temp_v24 = 0;
                    temp_v23 = 0x3f800000;
                    temp_v25 = 0;
                    temp_v11 = -(temp_v19 + temp_v21 * (float)temp_v14);
                    temp_v12 = -(temp_v20 + temp_v22 * (float)temp_v14);
                    temp_v27 = 0;
                    temp_v28 = 0x3f800000;
                    temp_v29 = 0;
                    temp_v31 = 0;
                    temp_v32 = 0;
                    temp_v33 = 0x3f800000;
                    temp_v26 = temp_v11;
                    temp_v30 = temp_v12;
                    temp_v34 = temp_v9;
                    nn_math_ARMv6_MTX34MultAsm(temp_v35,&temp_v23);
                    temp_v23 = (unsigned int)*(unsigned long long *)param_7;
                    temp_v24 = 0;
                    temp_v25 = 0;
                    temp_v26 = 0.0f;
                    temp_v27 = 0;
                    temp_v28 = (unsigned int)((unsigned long long)*(unsigned long long *)param_7 >> 0x20);
                    temp_v29 = 0;
                    temp_v30 = 0.0f;
                    temp_v31 = 0;
                    temp_v32 = 0;
                    temp_v33 = (unsigned int)temp_v13;
                    temp_v34 = 0.0f;
                    nn_math_ARMv6_MTX34MultAsm(temp_v35,&temp_v23);
                    FUN_001aff14(&temp_v23,1);
                    nn_math_ARMv6_MTX34MultAsm(temp_v35,&temp_v23);
                    temp_v26 = -temp_v11;
                    temp_v30 = -temp_v12;
                    temp_v24 = 0;
                    temp_v23 = 0x3f800000;
                    temp_v25 = 0;
                    temp_v27 = 0;
                    temp_v28 = 0x3f800000;
                    temp_v29 = 0;
                    temp_v34 = -temp_v9;
                    temp_v31 = 0;
                    temp_v32 = 0;
                    temp_v33 = 0x3f800000;
                    nn_math_ARMv6_MTX34MultAsm(temp_v35,&temp_v23);
                  }
                  temp_v24 = 0;
                  temp_v23 = 0x3f800000;
                  temp_v25 = 0;
                  temp_v9 = (float)((unsigned long long)temp_v13 >> 0x20);
                  temp_v8 = (unsigned int)temp_v15;
                  temp_v11 = -(temp_v19 + temp_v21 * (float)temp_v14);
                  temp_v12 = -(temp_v20 + temp_v22);
                  temp_v27 = 0;
                  temp_v28 = 0x3f800000;
                  temp_v29 = 0;
                  temp_v31 = 0;
                  temp_v32 = 0;
                  temp_v33 = 0x3f800000;
                  temp_v26 = temp_v11;
                  temp_v30 = temp_v12;
                  temp_v34 = temp_v9;
                  nn_math_ARMv6_MTX34MultAsm(temp_v35,&temp_v23);
                  FUN_001aff14(&temp_v23,1);
                  nn_math_ARMv6_MTX34MultAsm(temp_v35,&temp_v23);
                  temp_v33 = DAT_00570d60;
                  temp_v23 = (unsigned int)temp_v13;
                  temp_v24 = 0;
                  temp_v25 = 0;
                  temp_v26 = 0.0f;
                  temp_v27 = 0;
                  temp_v29 = 0;
                  temp_v30 = 0.0f;
                  temp_v31 = 0;
                  temp_v32 = 0;
                  temp_v34 = 0.0f;
                  temp_v28 = temp_v23;
                  nn_math_ARMv6_MTX34MultAsm(temp_v35,&temp_v23);
                  temp_v34 = temp_v22 * (float)temp_v14;
                  temp_v24 = 0;
                  temp_v23 = 0x3f800000;
                  temp_v25 = 0;
                  temp_v27 = 0;
                  temp_v28 = 0x3f800000;
                  temp_v29 = 0;
                  temp_v31 = 0;
                  temp_v32 = 0;
                  temp_v33 = 0x3f800000;
                  temp_v26 = (float)temp_v8;
                  temp_v30 = (float)temp_v8;
                  nn_math_ARMv6_MTX34MultAsm(temp_v35,&temp_v23);
                  temp_v26 = -temp_v11;
                  temp_v30 = -temp_v12;
                  temp_v24 = 0;
                  temp_v23 = 0x3f800000;
                  temp_v25 = 0;
                  temp_v27 = 0;
                  temp_v28 = 0x3f800000;
                  temp_v29 = 0;
                  temp_v34 = -temp_v9;
                  temp_v31 = 0;
                  temp_v32 = 0;
                  temp_v33 = 0x3f800000;
                  nn_math_ARMv6_MTX34MultAsm(temp_v35,&temp_v23);
                  temp_v24 = 0;
                  temp_v25 = 0;
                  temp_v26 = 0.0f;
                  temp_v27 = 0;
                  temp_v29 = 0;
                  temp_v30 = 0.0f;
                  temp_v31 = 0;
                  temp_v32 = 0;
                  temp_v34 = 0.0f;
                  temp_v23 = temp_v7;
                  temp_v28 = temp_v7;
                  temp_v33 = temp_v7;
                  nn_math_ARMv6_MTX34MultAsm(temp_v35,&temp_v23);
                  temp_v17[1] = temp_v20;
                  temp_v17[3] = temp_v19;
                  temp_v17[4] = temp_v20 + temp_v22;
                  temp_v17[9] = temp_v19 + temp_v21;
                  temp_v17[7] = temp_v20;
                  if (param_8 != 0) {
                    temp_v17[3] = (float)temp_v16 - temp_v19;
                    temp_v17[9] = (float)temp_v16 - temp_v17[9];
                  }
                  temp_v11 = -temp_v38[1] - DAT_00570d64;
                  temp_v9 = *temp_v38;
                  temp_v10 = (unsigned long long)(unsigned int)temp_v38[2];
                  temp_v2 = 0;
                  temp_v17[0] = temp_v17[3];
                  temp_v17[2] = (float)temp_v8;
                  temp_v17[5] = (float)temp_v8;
                  temp_v17[6] = temp_v17[9];
                  temp_v17[8] = (float)temp_v8;
                  temp_v17[10] = temp_v17[4];
                  temp_v17[0xb] = (float)temp_v8;
                  do {
                    pfVar7 = temp_v17 + temp_v2 * 3;
                    nn_math_ARMv6_VEC3TransformAsm_2AD44C(pfVar7,temp_v35);
                    temp_v1 = temp_v2 + 1;
                    *pfVar7 = *pfVar7 + temp_v9;
                    temp_v17[temp_v2 * 3 + 1] = temp_v17[temp_v2 * 3 + 1] + temp_v11;
                    temp_v17[temp_v2 * 3 + 2] = temp_v17[temp_v2 * 3 + 2] + (float)temp_v10;
                    temp_v2 = temp_v1;
                  } while (temp_v1 < 4);
                  temp_v7 = (unsigned int)*(unsigned long long *)(temp_v36 + 0x14);
                  VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v8 = (unsigned int)((unsigned long long)*(unsigned long long *)(temp_v36 + 0x14) >> 0x20);
                  VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                  VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v17[1] = DAT_00570d64;
                  temp_v17[4] = temp_v17[1];
                  temp_v17[7] = temp_v17[1];
                  temp_v17[10] = temp_v17[1];
                  FUN_0019e3d0(temp_v18);
                }
              }
              else {
                temp_v17[0] = (float)(*(unsigned char *)((int)pfVar7 + 0x27) & 1);
                temp_v17[1] = (float)((*(unsigned char *)((int)pfVar7 + 0x27) & 2) >> 1);
                VectorUnsignedToFloat((unsigned int)*(unsigned short *)(pfVar7 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_0020cb74(*(unsigned int *)
                              (*(int *)(param_1 + 0x14) + (unsigned int)*(unsigned char *)(pfVar7 + 9) * 0x20 + 0x18)
                             ,temp_v38,&temp_v19,pfVar7 + 4,temp_v4,param_7,1,param_8);
              }
            }
          }
          else if (*(char *)((int)pfVar7 + 0x25) == '\0') goto LAB_003fade8;
          temp_v5 = temp_v5 + 1;
        } while ((int)temp_v5 <= temp_v6);
      }
    }
  }
  return;
}

} /* extern "C" */
