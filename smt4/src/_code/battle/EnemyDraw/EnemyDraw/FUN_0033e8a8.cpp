/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033e8a8` (_code @ 0x33e8a8, 0x8c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_0015f7c8(...);
int FUN_0023e388(...);
int FUN_002929d8(...);
int FUN_002c5300(int, int, int, unsigned int, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_MTX34CopyAsm(...);
int nn_math_ARMv6_MTX34MultAsm(...);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

/* stack frame of param_1: 27 slot(s), 108 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int sp134; /* 0x134: local_134 */
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
    unsigned int sp178; /* 0x178: local_178 */
} param_1_stack;

extern unsigned int DAT_00433d9c; /* 0x433d9c */
extern float DAT_00433da4; /* 0x433da4 */
extern unsigned int DAT_00433da8; /* 0x433da8 */
extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_004efd6c; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0015f7c8. */
extern unsigned int FUN_001a0fb4(unsigned int);
/* Supplied declaration required: FUN_0023e388. */
/* Supplied declaration required: FUN_002929d8. */
extern int FUN_002b8660(void);
extern int FUN_002b8694(void);
extern int FUN_002b879c(void);
extern int FUN_002b8804(void);
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: FUN_002c5300. */
extern float FUN_002c5da8(unsigned int, unsigned int, unsigned int);
extern int MapMode_IsBusy(void);
extern int QuestCenterMode_IsBusy(void);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_0033e8a8(int param_1)

{
/* irregular: irregular input(s): in_d12, in_fpscr, in_r12; 11 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int *piVar14;
  int in_r12;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  long long temp_v19;
  unsigned long long in_d12;
  unsigned long long temp_v20;
  unsigned long long temp_v21;
  unsigned long long temp_v22;
  unsigned long long temp_v23;
  float temp_v24 [11];
  float temp_v25;
  unsigned char temp_v26 [48];
  int temp_v27;
  int temp_v28;
  int temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  int temp_v33;
  unsigned int temp_v34;
  unsigned int uStack_bc;
  int temp_v35;
  int temp_v36;
  unsigned int temp_v37;
  float temp_v38;
  int temp_v39;
  unsigned char temp_v40 [52];
  int temp_v41;
  
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  temp_v19 = (unsigned long long)DAT_00433da8 << 0x20;
  temp_v20 = in_d12 & 0xffffffff00000000;
  if ((int)DAT_00433da8 < 0x3f800000) {
    if (*(int *)(param_1 + 8) != 0xc) {
      temp_v19 = 0x4248000000000000;
    }
    else {
      temp_v4 = FUN_001a0fb4((*(int *)(param_1 + 0xc) + 1U) & 0xffff);
      temp_v8 = VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v19 = (unsigned long long)temp_v8 << 0x20;
    }
  }
  temp_v3 = FUN_002b8804();
  if (((((temp_v3 != 0) || (temp_v3 = FUN_002b879c(), temp_v3 != 0)) ||
       (temp_v3 = MapMode_IsBusy(), temp_v3 != 0)) || (temp_v3 = QuestCenterMode_IsBusy(), temp_v3 != 0)) &&
     ((temp_v3 = FUN_002b8694(), temp_v3 == 0 && (temp_v3 = FUN_002b8660(), temp_v3 != 0)))) {
    temp_v20 = romwright_piece_4_4((int)(temp_v20 >> 0x20),0x3fc00000);
  }
  temp_v8 = 0;
  temp_v2 = *(unsigned short *)(*(int *)(param_1 + 0x10) + 0xc);
  temp_v3 = temp_v2 - 1;
  if (0 < temp_v3) {
    piVar5 = *(int **)(param_1 + 0x20);
    piVar14 = piVar5 + -6;
    if ((temp_v2 & 1) == 0) {
      temp_v8 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x1c) + *piVar5 * 4 + 2);
      piVar14 = piVar5;
    }
    temp_v3 = temp_v3 >> 1;
    temp_v9 = temp_v3 != 0;
    temp_v7 = piVar14[6];
    if (temp_v9) {
      in_r12 = *(int *)(param_1 + 0x1c);
    }
    temp_v6 = 0;
    while (temp_v9) {
      temp_v0 = temp_v7 * 4;
      temp_v3 = temp_v3 - 1;
      temp_v9 = temp_v3 != 0;
      temp_v7 = piVar14[0x12];
      temp_v8 = temp_v8 + *(unsigned short *)(in_r12 + temp_v0 + 2);
      temp_v6 = temp_v6 + (unsigned int)*(unsigned short *)(in_r12 + piVar14[0xc] * 4 + 2);
      piVar14 = piVar14 + 0xc;
    }
    temp_v8 = temp_v8 + temp_v6;
  }
  temp_v3 = temp_v2 - 1;
  if (-1 < temp_v3) {
    temp_v8 = temp_v8 + *(unsigned short *)
                       (*(int *)(param_1 + 0x1c) +
                       *(int *)(*(int *)(param_1 + 0x20) + temp_v3 * 0x18) * 4 + 2);
  }
  temp_v4 = 0x100;
  FUN_002c5300(0x100,0x100,0,temp_v8 * 0x58,1);
  *(unsigned int *)(param_1 + 0x2c) = temp_v4;
  temp_v4 = 0x100;
  FUN_002c5300(0x100,0x100,0,(unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x10) + 0xc) * 0xc,1);
  *(unsigned int *)(param_1 + 0x30) = temp_v4;
  temp_v28 = 0;
  temp_v3 = *(int *)(param_1 + 0x10);
  temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v3 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v3 + 0x16),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v39 = 0;
  temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v3 + 0x12),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v17 = CONCAT44((temp_v14 + 143.0f) - temp_v10,temp_v4);
  if (*(short *)(temp_v3 + 0xc) != 0) {
    temp_v22 = 0x3f800000;
    temp_v23 = 0x3f00000000000000;
    temp_v21 = 0x3c23d70abf000000;
    do {
      piVar14 = (int *)(*(int *)(param_1 + 0x20) + temp_v39 * 0x18);
      temp_v8 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x1c) + *piVar14 * 4);
      temp_v2 = *(unsigned short *)(*(int *)(param_1 + 0x1c) + *piVar14 * 4 + 2);
      *(int *)(*(int *)(param_1 + 0x30) + temp_v39 * 0xc) = piVar14[1];
      temp_v29 = temp_v39 * 0xc + 6;
      temp_v35 = (unsigned int)temp_v2 + (temp_v8 - 1);
      *(short *)(*(int *)(param_1 + 0x30) + temp_v39 * 0xc + 4) = (short)temp_v28;
      temp_v27 = temp_v39 * 0xc + 8;
      temp_v41 = 1;
      *(unsigned short *)(*(int *)(param_1 + 0x30) + temp_v29) = 0;
      if ((int)temp_v8 <= temp_v35) {
        temp_v20 = temp_v20 & 0xffffffff;
      }
      *(unsigned short *)(*(int *)(param_1 + 0x30) + temp_v27) = 0;
      if ((int)temp_v8 <= temp_v35) {
        do {
          pfVar13 = (float *)(*(int *)(param_1 + 0x2c) + temp_v28 * 0x58);
          pfVar12 = (float *)(*(int *)(param_1 + 0x18) + temp_v8 * 0x28);
          if (temp_v41 != 0) {
            temp_v3 = *(int *)(param_1 + 0x30);
            if (*(char *)((int)pfVar12 + 0x25) != '\0') {
              *(short *)(temp_v3 + temp_v29) = *(short *)(temp_v3 + temp_v29) + 1;
            }
            else {
              temp_v41 = 0;
              *(short *)(temp_v3 + temp_v27) = *(short *)(temp_v3 + temp_v27) + 1;
            }
          }
          else {
            *(short *)(*(int *)(param_1 + 0x30) + temp_v27) =
                 *(short *)(*(int *)(param_1 + 0x30) + temp_v27) + 1;
          }
          temp_v3 = *(int *)(*(int *)(param_1 + 0x14) + (unsigned int)*(unsigned char *)(pfVar12 + 9) * 0x20 + 0x18);
          temp_v4 = *(unsigned int *)(temp_v3 + 0x14);
          temp_v12 = *(unsigned int *)(temp_v3 + 0x18);
          temp_v15 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v10 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v13 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v15 = pfVar12[4] / temp_v15;
          temp_v16 = pfVar12[5] / temp_v16;
          temp_v10 = (pfVar12[4] + pfVar12[6]) / temp_v10;
          temp_v11 = (float)((unsigned long long)temp_v19 >> 0x20);
          temp_v13 = (pfVar12[5] + pfVar12[7]) / temp_v13;
          temp_v14 = temp_v15;
          if ((*(unsigned char *)((int)pfVar12 + 0x27) & 1) != 0) {
            temp_v14 = temp_v10;
            temp_v10 = temp_v15;
          }
          temp_v15 = temp_v16;
          if ((*(unsigned char *)((int)pfVar12 + 0x27) & 2) != 0) {
            temp_v15 = temp_v13;
            temp_v13 = temp_v16;
          }
          temp_v19 = CONCAT44(temp_v11,temp_v13);
          temp_v13 = (float)VectorUnsignedToFloat
                                    ((unsigned int)*(unsigned char *)((int)pfVar12 + 0x23),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorUnsignedToFloat
                                    ((unsigned int)*(unsigned char *)((int)pfVar12 + 0x23),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = CONCAT44(temp_v10,temp_v13 / temp_v11 + temp_v16 * (float)temp_v20);
          if (((DAT_00476634 & 1) == 0) && (temp_v3 = FUN_002bfefc(&DAT_00476634), temp_v3 != 0)) {
            DAT_004efd6c = (unsigned int)temp_v22;
            DAT_004efd70 = (unsigned int)(temp_v20 >> 0x20);
            DAT_004efd74 = DAT_004efd70;
            DAT_004efd78 = DAT_004efd70;
            DAT_004efd7c = DAT_004efd70;
            DAT_004efd80 = DAT_004efd6c;
            DAT_004efd84 = DAT_004efd70;
            DAT_004efd88 = DAT_004efd70;
            DAT_004efd8c = DAT_004efd70;
            DAT_004efd90 = DAT_004efd70;
            DAT_004efd94 = DAT_004efd6c;
            DAT_004efd98 = DAT_004efd70;
          }
          nn_math_ARMv6_MTX34CopyAsm(temp_v26,&DAT_004efd6c);
          if (*(short *)(pfVar12 + 8) != 0) {
            temp_v30 = pfVar12[2] * (float)temp_v21 - *pfVar12;
            temp_v31 = pfVar12[3] * (float)temp_v21 - pfVar12[1];
            temp_v32 = (float)(temp_v20 >> 0x20);
            FUN_0023e388(temp_v26,&temp_v30);
            VectorUnsignedToFloat((unsigned int)*(unsigned short *)(pfVar12 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002929d8(temp_v40,1);
            nn_math_ARMv6_MTX34MultAsm(temp_v26,temp_v40);
            temp_v30 = -temp_v30;
            temp_v31 = -temp_v31;
            temp_v32 = -temp_v32;
            FUN_0023e388(temp_v26);
          }
          if (*(char *)((int)pfVar12 + 0x25) != '\0') {
            temp_v32 = (float)(temp_v20 >> 0x20);
            temp_v30 = pfVar12[2] * (float)temp_v21 - *pfVar12;
            temp_v31 = -(pfVar12[1] + pfVar12[3]);
            FUN_0023e388(temp_v26,&temp_v30);
            FUN_002929d8(temp_v40,1);
            nn_math_ARMv6_MTX34MultAsm(temp_v26,temp_v40);
            temp_v33 = (unsigned int)temp_v22;
            uStack_bc = DAT_00433d9c;
            temp_v34 = temp_v33;
            FUN_0015f7c8(temp_v26,&temp_v33);
            temp_v36 = (unsigned int)(temp_v20 >> 0x20);
            temp_v38 = pfVar12[3] * (float)((unsigned long long)temp_v23 >> 0x20);
            temp_v37 = temp_v36;
            FUN_0023e388(temp_v26,&temp_v36);
            temp_v30 = -temp_v30;
            temp_v31 = -temp_v31;
            temp_v32 = -temp_v32;
            FUN_0023e388(temp_v26);
          }
          temp_v24[0] = *pfVar12;
          temp_v24[1] = pfVar12[1];
          temp_v24[2] = (float)temp_v18;
          temp_v24[6] = temp_v24[0] + pfVar12[2];
          temp_v24[4] = temp_v24[1] + pfVar12[3];
          temp_v3 = 0;
          temp_v24[3] = temp_v24[0];
          temp_v24[5] = temp_v24[2];
          temp_v24[7] = temp_v24[1];
          temp_v24[8] = temp_v24[2];
          temp_v24[9] = temp_v24[6];
          temp_v24[10] = temp_v24[4];
          temp_v25 = temp_v24[2];
          do {
            pfVar11 = temp_v24 + temp_v3 * 3;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(pfVar11,temp_v26);
            temp_v13 = *pfVar11;
            temp_v16 = (float)piVar14[2];
            temp_v7 = temp_v3 + 1;
            *pfVar11 = temp_v13 + temp_v16;
            temp_v11 = (float)piVar14[3];
            temp_v10 = temp_v24[temp_v3 * 3 + 1];
            temp_v24[temp_v3 * 3 + 1] = temp_v10 + temp_v11;
            temp_v10 = (temp_v10 + temp_v11) - (float)((unsigned long long)temp_v17 >> 0x20);
            *pfVar11 = (temp_v13 + temp_v16) - (float)temp_v17;
            temp_v24[temp_v3 * 3 + 1] = temp_v10;
            temp_v24[temp_v3 * 3 + 1] = -temp_v10;
            temp_v9 = *(char *)((int)pfVar12 + 0x25) != '\0';
            if (temp_v9) {
              temp_v10 = DAT_00433da4;
            }
            if (temp_v9) {
              temp_v24[temp_v3 * 3 + 1] = temp_v10;
            }
            temp_v3 = temp_v7;
          } while (temp_v7 < 4);
          *pfVar13 = temp_v24[0];
          pfVar13[1] = temp_v24[1];
          pfVar13[2] = temp_v24[2];
          pfVar13[3] = temp_v24[3];
          pfVar13[4] = temp_v24[4];
          pfVar13[5] = temp_v24[5];
          pfVar13[6] = temp_v24[6];
          pfVar13[7] = temp_v24[7];
          pfVar13[8] = temp_v24[8];
          pfVar13[9] = temp_v24[9];
          pfVar13[10] = temp_v24[10];
          pfVar13[0xb] = temp_v25;
          pfVar13[0xc] = temp_v14;
          pfVar13[0x10] = temp_v15;
          pfVar13[0xd] = temp_v14;
          pfVar13[0x11] = (float)temp_v19;
          temp_v10 = (float)((unsigned long long)temp_v18 >> 0x20);
          pfVar13[0xe] = temp_v10;
          pfVar13[0x12] = temp_v15;
          pfVar13[0xf] = temp_v10;
          pfVar13[0x13] = (float)temp_v19;
          temp_v10 = (float)VectorUnsignedToFloat
                                    ((unsigned int)*(unsigned char *)((int)pfVar12 + 0x22),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
          pfVar13[0x14] = temp_v10 * (float)((unsigned long long)temp_v21 >> 0x20);
          temp_v1 = *(char *)((int)pfVar12 + 0x26);
          if (temp_v1 != '\0') {
            if (temp_v1 != '\x01') {
              if (temp_v1 != '\x02') {
                if (temp_v1 == '\x03') {
                  temp_v10 = (float)FUN_002c5da8(5,0,1);
                  pfVar13[0x15] = temp_v10;
                }
              }
              else {
                temp_v10 = (float)FUN_002c5da8(6,1,2);
                pfVar13[0x15] = temp_v10;
              }
            }
            else {
              temp_v10 = (float)FUN_002c5da8(6,1,0);
              pfVar13[0x15] = temp_v10;
            }
          }
          else {
            temp_v10 = (float)FUN_002c5da8(6,7,0);
            pfVar13[0x15] = temp_v10;
          }
          temp_v8 = temp_v8 + 1;
          temp_v28 = temp_v28 + 1;
        } while ((int)temp_v8 <= temp_v35);
      }
      temp_v5 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x30) + temp_v29);
      temp_v8 = *(unsigned int *)(param_1 + 0x38);
      if ((int)*(unsigned int *)(param_1 + 0x38) <= (int)temp_v5) {
        temp_v8 = temp_v5;
      }
      *(unsigned int *)(param_1 + 0x38) = temp_v8;
      temp_v5 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x30) + temp_v27);
      temp_v8 = *(unsigned int *)(param_1 + 0x34);
      if ((int)*(unsigned int *)(param_1 + 0x34) <= (int)temp_v5) {
        temp_v8 = temp_v5;
      }
      *(unsigned int *)(param_1 + 0x34) = temp_v8;
      temp_v39 = temp_v39 + 1;
    } while (temp_v39 < (int)(unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x10) + 0xc));
  }
  return;
}

} /* extern "C" */
