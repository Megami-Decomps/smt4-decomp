/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fc294` (_code @ 0x3fc294, 0x940 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int asdMemoryAlloc(int, int, int, unsigned int, int);
int FUN_0017fc94(...);
int FUN_001aff14(...);
int FUN_001d3d6c(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_MTX34CopyAsm(...);
int nn_math_ARMv6_MTX34MultAsm(...);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

/* stack frame of param_2: 28 slot(s), 112 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF8; /* 0xf8: local_f8 */
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
    unsigned int sp180; /* 0x180: local_180 */
} param_2_stack;

extern unsigned int DAT_00570d60; /* 0x570d60 */
extern float DAT_00570d68; /* 0x570d68 */
extern unsigned int DAT_00570d6c; /* 0x570d6c */
extern unsigned int _ZGVZN2nw4math5MTX348IdentityEvE8identity; /* 0x5c4c2c */
extern unsigned int _ZZN2nw4math5MTX348IdentityEvE8identity; /* 0x64c054 */
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

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int campIsState85(void);
extern int engineCleanupIsDone(void);
/* Supplied declaration required: asdMemoryAlloc. */
extern int lmapMainIsRunning(void);
extern int aocJobIsValid(void);
extern float packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0017fc94. */
/* Supplied declaration required: FUN_001aff14. */
/* Supplied declaration required: FUN_001d3d6c. */
extern unsigned int dataTableLookupValue0103(unsigned int);
extern int __cxa_guard_acquire(unsigned int *);
extern int mapMainIsBusy(void);
extern int QuestCenterMode_IsBusy(void);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_003fc294(int param_1,int param_2)

{
/* irregular: irregular input(s): in_d12, in_fpscr, in_r12; 11 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  float *pfVar11;
  int temp_v9;
  float *pfVar13;
  float *pfVar14;
  int *piVar15;
  int in_r12;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  long long temp_v20;
  unsigned long long in_d12;
  unsigned long long temp_v21;
  unsigned long long temp_v22;
  unsigned long long temp_v23;
  unsigned long long temp_v24;
  float temp_v25 [11];
  float temp_v26;
  unsigned char temp_v27 [48];
  int temp_v28;
  int temp_v29;
  int temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  int temp_v34;
  unsigned int temp_v35;
  unsigned int uStack_c8;
  int temp_v36;
  int temp_v37;
  unsigned int temp_v38;
  float temp_v39;
  int temp_v40;
  unsigned char temp_v41 [52];
  int temp_v42;
  int iStack_2c;
  int temp_v43;
  float temp_v44;
  
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  temp_v20 = (unsigned long long)DAT_00570d6c << 0x20;
  temp_v21 = in_d12 & 0xffffffff00000000;
  iStack_2c = param_1;
  temp_v43 = param_2;
  if ((int)DAT_00570d6c < 0x3f800000) {
    if (*(int *)(param_1 + 8) != 6) {
      temp_v20 = 0x4248000000000000;
    }
    else {
      temp_v4 = dataTableLookupValue0103((*(int *)(param_1 + 0xc) + 1U) & 0xffff);
      temp_v8 = VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v20 = (unsigned long long)temp_v8 << 0x20;
    }
  }
  temp_v3 = aocJobIsValid();
  if (((((temp_v3 != 0) || (temp_v3 = lmapMainIsRunning(), temp_v3 != 0)) ||
       (temp_v3 = mapMainIsBusy(), temp_v3 != 0)) || (temp_v3 = QuestCenterMode_IsBusy(), temp_v3 != 0)) &&
     ((temp_v3 = campIsState85(), temp_v3 == 0 && (temp_v3 = engineCleanupIsDone(), temp_v3 != 0)))) {
    temp_v21 = romwright_piece_4_4((int)(temp_v21 >> 0x20),0x3fc00000);
  }
  temp_v8 = 0;
  temp_v2 = *(unsigned short *)(*(int *)(param_1 + 0x10) + 0xc);
  temp_v3 = temp_v2 - 1;
  if (0 < temp_v3) {
    piVar5 = *(int **)(param_1 + 0x20);
    piVar15 = piVar5 + -6;
    if ((temp_v2 & 1) == 0) {
      temp_v8 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x1c) + *piVar5 * 4 + 2);
      piVar15 = piVar5;
    }
    temp_v5 = temp_v3 >> 1;
    temp_v10 = temp_v5 != 0;
    temp_v9 = piVar15[6];
    if (temp_v10) {
      in_r12 = *(int *)(param_1 + 0x1c);
    }
    temp_v7 = 0;
    while (temp_v10) {
      temp_v0 = temp_v9 * 4;
      temp_v5 = temp_v5 - 1;
      temp_v10 = temp_v5 != 0;
      temp_v9 = piVar15[0x12];
      temp_v8 = temp_v8 + *(unsigned short *)(in_r12 + temp_v0 + 2);
      temp_v7 = temp_v7 + (unsigned int)*(unsigned short *)(in_r12 + piVar15[0xc] * 4 + 2);
      piVar15 = piVar15 + 0xc;
    }
    temp_v8 = temp_v8 + temp_v7;
  }
  if (-1 < temp_v3) {
    temp_v8 = temp_v8 + *(unsigned short *)
                       (*(int *)(param_1 + 0x1c) +
                       *(int *)(*(int *)(param_1 + 0x20) + temp_v3 * 0x18) * 4 + 2);
  }
  if (temp_v43 != 0) {
    temp_v4 = 0x100;
    asdMemoryAlloc(0x100,0x100,0,temp_v8 * 0x58,1);
    *(unsigned int *)(param_1 + 0x2c) = temp_v4;
    temp_v4 = 0x100;
    asdMemoryAlloc(0x100,0x100,0,(unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x10) + 0xc) * 0xc,1);
    *(unsigned int *)(param_1 + 0x30) = temp_v4;
  }
  else {
    temp_v4 = 0x10000;
    asdMemoryAlloc(0x10000,0x100,0,temp_v8 * 0x58,1);
    *(unsigned int *)(param_1 + 0x2c) = temp_v4;
    temp_v4 = 0x10000;
    asdMemoryAlloc(0x10000,0x100,0,(unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x10) + 0xc) * 0xc,1);
    *(unsigned int *)(param_1 + 0x30) = temp_v4;
  }
  temp_v3 = *(int *)(param_1 + 0x10);
  temp_v29 = 0;
  temp_v15 = (float)VectorSignedToFloat((int)*(short *)(temp_v3 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v3 + 0x16),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v40 = 0;
  temp_v4 = VectorSignedToFloat((int)*(short *)(temp_v3 + 0x12),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v17 = CONCAT44((temp_v15 + 143.0f) - temp_v12,temp_v4);
  if (*(short *)(temp_v3 + 0xc) != 0) {
    temp_v23 = 0x3f800000;
    temp_v24 = 0x3f00000000000000;
    temp_v22 = 0x3c23d70abf000000;
    do {
      piVar15 = (int *)(*(int *)(param_1 + 0x20) + temp_v40 * 0x18);
      temp_v2 = *(unsigned short *)(*(int *)(param_1 + 0x1c) + *piVar15 * 4 + 2);
      temp_v8 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x1c) + *piVar15 * 4);
      *(int *)(*(int *)(param_1 + 0x30) + temp_v40 * 0xc) = piVar15[1];
      temp_v30 = temp_v40 * 0xc + 6;
      temp_v36 = (unsigned int)temp_v2 + (temp_v8 - 1);
      *(short *)(*(int *)(param_1 + 0x30) + temp_v40 * 0xc + 4) = (short)temp_v29;
      temp_v28 = temp_v40 * 0xc + 8;
      temp_v42 = 1;
      *(unsigned short *)(*(int *)(param_1 + 0x30) + temp_v30) = 0;
      if ((int)temp_v8 <= temp_v36) {
        temp_v21 = temp_v21 & 0xffffffff;
      }
      *(unsigned short *)(*(int *)(param_1 + 0x30) + temp_v28) = 0;
      if ((int)temp_v8 <= temp_v36) {
        do {
          pfVar14 = (float *)(*(int *)(param_1 + 0x2c) + temp_v29 * 0x58);
          pfVar13 = (float *)(*(int *)(param_1 + 0x18) + temp_v8 * 0x28);
          if (temp_v42 != 0) {
            temp_v3 = *(int *)(param_1 + 0x30);
            if (*(char *)((int)pfVar13 + 0x25) != '\0') {
              *(short *)(temp_v3 + temp_v30) = *(short *)(temp_v3 + temp_v30) + 1;
            }
            else {
              temp_v42 = 0;
              *(short *)(temp_v3 + temp_v28) = *(short *)(temp_v3 + temp_v28) + 1;
            }
          }
          else {
            *(short *)(*(int *)(param_1 + 0x30) + temp_v28) =
                 *(short *)(*(int *)(param_1 + 0x30) + temp_v28) + 1;
          }
          temp_v3 = *(int *)(*(int *)(param_1 + 0x14) + (unsigned int)*(unsigned char *)(pfVar13 + 9) * 0x20 + 0x18);
          temp_v4 = *(unsigned int *)(temp_v3 + 0x14);
          temp_v13 = *(unsigned int *)(temp_v3 + 0x18);
          temp_v16 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v15 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v11 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = pfVar13[4] / temp_v16;
          temp_v15 = pfVar13[5] / temp_v15;
          temp_v12 = (pfVar13[4] + pfVar13[6]) / temp_v12;
          temp_v44 = (float)((unsigned long long)temp_v20 >> 0x20);
          temp_v11 = (pfVar13[5] + pfVar13[7]) / temp_v11;
          temp_v14 = temp_v16;
          if ((*(unsigned char *)((int)pfVar13 + 0x27) & 1) != 0) {
            temp_v14 = temp_v12;
            temp_v12 = temp_v16;
          }
          temp_v16 = temp_v11;
          if ((*(unsigned char *)((int)pfVar13 + 0x27) & 2) != 0) {
            temp_v16 = temp_v15;
            temp_v15 = temp_v11;
          }
          temp_v18 = CONCAT44(temp_v15,temp_v14);
          temp_v20 = CONCAT44(temp_v44,temp_v16);
          temp_v14 = (float)VectorUnsignedToFloat
                                    ((unsigned int)*(unsigned char *)((int)pfVar13 + 0x23),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v15 = (float)VectorUnsignedToFloat
                                    ((unsigned int)*(unsigned char *)((int)pfVar13 + 0x23),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v19 = CONCAT44(temp_v12,temp_v14 / temp_v44 + temp_v15 * (float)temp_v21);
          if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v3 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v3 != 0)) {
            _ZZN2nw4math5MTX348IdentityEvE8identity = (unsigned int)temp_v23;
            DAT_0064c058 = (unsigned int)(temp_v21 >> 0x20);
            DAT_0064c05c = DAT_0064c058;
            DAT_0064c060 = DAT_0064c058;
            DAT_0064c064 = DAT_0064c058;
            DAT_0064c068 = _ZZN2nw4math5MTX348IdentityEvE8identity;
            DAT_0064c06c = DAT_0064c058;
            DAT_0064c070 = DAT_0064c058;
            DAT_0064c074 = DAT_0064c058;
            DAT_0064c078 = DAT_0064c058;
            DAT_0064c07c = _ZZN2nw4math5MTX348IdentityEvE8identity;
            DAT_0064c080 = DAT_0064c058;
          }
          nn_math_ARMv6_MTX34CopyAsm(temp_v27,&_ZZN2nw4math5MTX348IdentityEvE8identity);
          if (*(short *)(pfVar13 + 8) != 0) {
            temp_v33 = (float)(temp_v21 >> 0x20);
            temp_v32 = pfVar13[3] * (float)temp_v22 - pfVar13[1];
            temp_v31 = pfVar13[2] * (float)temp_v22 - *pfVar13;
            FUN_0017fc94(temp_v27,&temp_v31);
            VectorUnsignedToFloat((unsigned int)*(unsigned short *)(pfVar13 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_001aff14(temp_v41,1);
            nn_math_ARMv6_MTX34MultAsm(temp_v27,temp_v41);
            temp_v31 = -temp_v31;
            temp_v32 = -temp_v32;
            temp_v33 = -temp_v33;
            FUN_0017fc94(temp_v27);
          }
          if (*(char *)((int)pfVar13 + 0x25) != '\0') {
            temp_v33 = (float)(temp_v21 >> 0x20);
            temp_v31 = pfVar13[2] * (float)temp_v22 - *pfVar13;
            temp_v32 = -(pfVar13[1] + pfVar13[3]);
            FUN_0017fc94(temp_v27,&temp_v31);
            FUN_001aff14(temp_v41,1);
            nn_math_ARMv6_MTX34MultAsm(temp_v27,temp_v41);
            temp_v34 = (unsigned int)temp_v23;
            uStack_c8 = DAT_00570d60;
            temp_v35 = temp_v34;
            FUN_001d3d6c(temp_v27,&temp_v34);
            temp_v37 = (unsigned int)(temp_v21 >> 0x20);
            temp_v39 = pfVar13[3] * (float)((unsigned long long)temp_v24 >> 0x20);
            temp_v38 = temp_v37;
            FUN_0017fc94(temp_v27,&temp_v37);
            temp_v32 = -temp_v32;
            temp_v33 = -temp_v33;
            temp_v31 = -temp_v31;
            FUN_0017fc94(temp_v27,&temp_v31);
          }
          temp_v25[0] = *pfVar13;
          temp_v25[1] = pfVar13[1];
          temp_v25[2] = (float)temp_v19;
          temp_v25[6] = temp_v25[0] + pfVar13[2];
          temp_v25[4] = temp_v25[1] + pfVar13[3];
          temp_v3 = 0;
          temp_v25[3] = temp_v25[0];
          temp_v25[5] = temp_v25[2];
          temp_v25[7] = temp_v25[1];
          temp_v25[8] = temp_v25[2];
          temp_v25[9] = temp_v25[6];
          temp_v25[10] = temp_v25[4];
          temp_v26 = temp_v25[2];
          do {
            pfVar11 = temp_v25 + temp_v3 * 3;
            nn_math_ARMv6_VEC3TransformAsm_2AD44C(pfVar11,temp_v27);
            temp_v15 = *pfVar11;
            temp_v14 = (float)piVar15[2];
            temp_v5 = temp_v3 + 1;
            *pfVar11 = temp_v15 + temp_v14;
            temp_v11 = (float)piVar15[3];
            temp_v12 = temp_v25[temp_v3 * 3 + 1];
            temp_v25[temp_v3 * 3 + 1] = temp_v12 + temp_v11;
            temp_v12 = (temp_v12 + temp_v11) - (float)((unsigned long long)temp_v17 >> 0x20);
            *pfVar11 = (temp_v15 + temp_v14) - (float)temp_v17;
            temp_v25[temp_v3 * 3 + 1] = temp_v12;
            temp_v25[temp_v3 * 3 + 1] = -temp_v12;
            temp_v10 = *(char *)((int)pfVar13 + 0x25) != '\0';
            if (temp_v10) {
              temp_v12 = DAT_00570d68;
            }
            if (temp_v10) {
              temp_v25[temp_v3 * 3 + 1] = temp_v12;
            }
            temp_v3 = temp_v5;
          } while (temp_v5 < 4);
          *pfVar14 = temp_v25[0];
          pfVar14[1] = temp_v25[1];
          pfVar14[2] = temp_v25[2];
          pfVar14[3] = temp_v25[3];
          pfVar14[4] = temp_v25[4];
          pfVar14[5] = temp_v25[5];
          pfVar14[6] = temp_v25[6];
          pfVar14[7] = temp_v25[7];
          pfVar14[8] = temp_v25[8];
          pfVar14[9] = temp_v25[9];
          pfVar14[10] = temp_v25[10];
          pfVar14[0xb] = temp_v26;
          pfVar14[0xc] = (float)temp_v18;
          temp_v12 = (float)((unsigned long long)temp_v18 >> 0x20);
          pfVar14[0x10] = temp_v12;
          pfVar14[0xd] = (float)temp_v18;
          pfVar14[0x11] = (float)temp_v20;
          temp_v15 = (float)((unsigned long long)temp_v19 >> 0x20);
          pfVar14[0xe] = temp_v15;
          pfVar14[0x12] = temp_v12;
          pfVar14[0xf] = temp_v15;
          pfVar14[0x13] = (float)temp_v20;
          temp_v12 = (float)VectorUnsignedToFloat
                                    ((unsigned int)*(unsigned char *)((int)pfVar13 + 0x22),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
          pfVar14[0x14] = temp_v12 * (float)((unsigned long long)temp_v22 >> 0x20);
          temp_v1 = *(char *)((int)pfVar13 + 0x26);
          if (temp_v1 != '\0') {
            if (temp_v1 != '\x01') {
              if (temp_v1 != '\x02') {
                if (temp_v1 == '\x03') {
                  temp_v12 = (float)packNibblesAndByte(5,0,1);
                  pfVar14[0x15] = temp_v12;
                }
              }
              else {
                temp_v12 = (float)packNibblesAndByte(6,1,2);
                pfVar14[0x15] = temp_v12;
              }
            }
            else {
              temp_v12 = (float)packNibblesAndByte(6,1,0);
              pfVar14[0x15] = temp_v12;
            }
          }
          else {
            temp_v12 = (float)packNibblesAndByte(6,7,0);
            pfVar14[0x15] = temp_v12;
          }
          temp_v8 = temp_v8 + 1;
          temp_v29 = temp_v29 + 1;
        } while ((int)temp_v8 <= temp_v36);
      }
      temp_v6 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x30) + temp_v30);
      temp_v8 = *(unsigned int *)(param_1 + 0x38);
      if ((int)*(unsigned int *)(param_1 + 0x38) <= (int)temp_v6) {
        temp_v8 = temp_v6;
      }
      *(unsigned int *)(param_1 + 0x38) = temp_v8;
      temp_v8 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x30) + temp_v28);
      if ((int)temp_v8 < (int)*(unsigned int *)(param_1 + 0x34)) {
        temp_v8 = *(unsigned int *)(param_1 + 0x34);
      }
      *(unsigned int *)(param_1 + 0x34) = temp_v8;
      temp_v40 = temp_v40 + 1;
    } while (temp_v40 < (int)(unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x10) + 0xc));
  }
  return;
}

} /* extern "C" */
