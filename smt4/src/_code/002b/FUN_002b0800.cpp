/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b0800` (_code @ 0x2b0800, 0xbd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_002aa100(...);
int FUN_002aa200(...);
int FUN_002ae3d8(void);
int FUN_002ae424(...);
int FUN_002ba12c(unsigned int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 22 slot(s), 88 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp184; /* 0x184: local_184 */
    unsigned int sp190; /* 0x190: local_190 */
    unsigned int sp194; /* 0x194: local_194 */
    unsigned int sp1A0; /* 0x1a0: local_1a0 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
} param_1_stack;

extern unsigned int DAT_0044ea00; /* 0x44ea00 */
extern signed char DAT_00464d48; /* 0x464d48 */
extern int DAT_00464d58; /* 0x464d58 */
extern romwright_code *DAT_00464d64; /* 0x464d64 */
extern unsigned int DAT_00464d68; /* 0x464d68 */
extern int DAT_00464d78; /* 0x464d78 */
extern unsigned int DAT_004def08; /* 0x4def08 */
extern unsigned int DAT_004def0c; /* 0x4def0c */
extern unsigned int DAT_004def10; /* 0x4def10 */
extern unsigned int DAT_004def14; /* 0x4def14 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern unsigned int FUN_00145d5c(unsigned short);
extern unsigned int FUN_00145e24(unsigned short);
extern unsigned int FUN_00145e44(unsigned short);
/* Supplied declaration required: FUN_002aa100. */
/* Supplied declaration required: FUN_002aa200. */
/* Supplied declaration required: FUN_002ae3d8. */
/* Supplied declaration required: FUN_002ae424. */
/* Supplied declaration required: FUN_002ba12c. */


/* WARNING: Removing unreachable block (ram,0x002b0d7c) */
/* WARNING: Removing unreachable block (ram,0x002b0d8c) */
/* WARNING: Removing unreachable block (ram,0x002b12fc) */
/* WARNING: Removing unreachable block (ram,0x002b0a60) */
/* WARNING: Removing unreachable block (ram,0x002b0a70) */
/* WARNING: Removing unreachable block (ram,0x002b0a50) */
/* WARNING: Removing unreachable block (ram,0x002b0a54) */
/* WARNING: Removing unreachable block (ram,0x002b1074) */
/* WARNING: Removing unreachable block (ram,0x002b10a8) */
/* WARNING: Removing unreachable block (ram,0x002b0f24) */
/* WARNING: Removing unreachable block (ram,0x002b0f34) */
/* WARNING: Removing unreachable block (ram,0x002b0e54) */
/* WARNING: Removing unreachable block (ram,0x002b0e64) */

void FUN_002b0800(int *param_1)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr, in_s0, in_s2, in_s3; 23 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int *piVar10;
  int temp_v9;
  int unaff_r7;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned int in_fpscr;
  unsigned int temp_v13;
  float in_s0;
  unsigned int temp_v14;
  unsigned int temp_v15;
  float in_s2;
  float in_s3;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  unsigned long long temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned char temp_v24;
  int temp_v25;
  unsigned int temp_v26;
  int aiStack_130 [32];
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  int temp_v30;
  unsigned int temp_v31;
  int temp_v32;
  int *piStack_30;
  unsigned int uStack_2c;
  unsigned int temp_v33;
  
  temp_v33 = 0xffffffff;
  uStack_2c = 0;
  temp_v19 = 0.0f;
  temp_v21 = 0;
  temp_v25 = 0;
  piStack_30 = param_1;
  if (DAT_00464d48 != '\0') {
    FUN_002ba12c(DAT_0044ea00);
    in_s0 = in_s2 + in_s0;
  }
  temp_v5 = param_1[5];
  if (temp_v5 != 0) {
    unaff_r7 = param_1[4];
  }
  if (temp_v5 != 0 && unaff_r7 != 0) {
    temp_v30 = 0;
    piVar10 = *(int **)(temp_v5 + 8);
    if (param_1[0x29] != 0) {
      temp_v30 = *(int *)(param_1[0x29] + 8);
    }
    temp_v13 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s3 == temp_v19) << 0x1e);
    if (romwright_subpiece_4_1_0(temp_v13 >> 0x1e,0)) {
      temp_v24 = 0;
    }
    else if (in_s3 == 1.0f) {
      temp_v24 = 0xff;
    }
    else {
      temp_v24 = VectorFloatToUnsigned(in_s3 * 255.0f,3);
    }
    temp_v20 = CONCAT44(in_s3,in_s0);
    temp_v17 = (float)VectorUnsignedToFloat(DAT_004def08 & 0xff,(unsigned char)(temp_v13 >> 0x16) & 3);
    temp_v16 = (float)VectorUnsignedToFloat(DAT_004def0c & 0xff,(unsigned char)(temp_v13 >> 0x16) & 3);
    temp_v18 = (float)VectorUnsignedToFloat(DAT_004def10 & 0xff,(unsigned char)(temp_v13 >> 0x16) & 3);
    temp_v19 = (float)VectorUnsignedToFloat(DAT_004def14 & 0xff,(unsigned char)(temp_v13 >> 0x16) & 3);
    temp_v22 = VectorFloatToUnsigned(temp_v17 * in_s3,3);
    VectorFloatToUnsigned(temp_v16 * in_s3,3);
    temp_v15 = VectorFloatToUnsigned(temp_v18 * in_s3,3);
    temp_v14 = VectorFloatToUnsigned(temp_v19 * in_s3,3);
    temp_v22 = temp_v22 & 0xff;
    temp_v27 = (DAT_004def08 & 0xffffff00) | temp_v22;
    temp_v31 = (temp_v15 & 0xff) | (DAT_004def10 & 0xffffff00);
    temp_v28 = (DAT_004def14 & 0xffffff00) | (temp_v14 & 0xff);
    temp_v5 = param_1[0x2c];
    if (temp_v5 == 0) {
      temp_v23 = param_1[0xe];
    }
    else {
      temp_v23 = *(unsigned int *)(DAT_00464d78 + temp_v5 * 4);
    }
    temp_v23 = temp_v23 | temp_v24;
    temp_v12 = DAT_00464d58 != 0;
    temp_v14 = temp_v23;
    if (temp_v12) {
      temp_v14 = DAT_00464d58 + temp_v5 * 8;
    }
    if (temp_v12) {
      temp_v22 = *(unsigned int *)(temp_v14 + 4);
    }
    temp_v9 = param_1[3];
    temp_v29 = (unsigned int)((short)(temp_v24 << 3) * 0x667) >> 0xe;
    temp_v26 = (unsigned int)*(unsigned char *)(DAT_00464d58 + temp_v5 * 8);
    if (!temp_v12) {
      temp_v22 = 0;
    }
    temp_v22 = temp_v22 | temp_v29;
    temp_v15 = param_1[0x28] | temp_v24;
    temp_v14 = (unsigned int)((short)(temp_v24 << 2) * 0xcd) >> 0xb;
    if (temp_v9 < temp_v9 + unaff_r7) {
      temp_v19 = 0.5f;
LAB_002b0a30:
      temp_v32 = 1;
      temp_v6 = (unsigned int)*(unsigned short *)(*param_1 + temp_v9 * 0x20);
      temp_v5 = FUN_002ae424(temp_v6);
      temp_v17 = (float)(temp_v21 >> 0x20);
      temp_v16 = (float)temp_v20;
      if (temp_v5 != 0) {
        if (temp_v6 != 0xf814) {
          if (temp_v6 < 0xf814) {
            if (temp_v6 != 0xf804) {
              if (temp_v6 < 0xf804) {
                if (temp_v6 != 0xf801) {
                  if (temp_v6 == 0xf802) {
                    return;
                  }
                  FUN_002ae3d8();
                  temp_v9 = temp_v9 + temp_v6;
                }
                else {
                  if (temp_v32 != 0) {
                    temp_v16 = temp_v16 - in_s0;
                    temp_v6 = (temp_v13 & 0xfffffff) | ((unsigned int)(temp_v16 < temp_v17) << 0x1f) |
                            ((unsigned int)(temp_v16 == temp_v17) << 0x1e);
                    temp_v13 = temp_v6 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v17 != temp_v17)) << 0x1c);
                    temp_v4 = (unsigned char)(temp_v6 >> 0x18);
                    if (!(unsigned char)((temp_v4 >> 6) & 1) && temp_v4 >> 7 == ((unsigned char)(temp_v13 >> 0x1c) & 1)) {
                      temp_v21 = (unsigned long long)(unsigned int)temp_v16 << 0x20;
                    }
                  }
                  temp_v20 = (unsigned long long)(unsigned int)in_s0;
                  temp_v7 = (**(romwright_code **)(*piVar10 + 0x24))(piVar10);
                  VectorSignedToFloat(temp_v7,(unsigned char)(temp_v13 >> 0x16) & 3);
                }
              }
              else if (temp_v6 != 0xf812) {
                if (temp_v6 == 0xf813) {
                  temp_v9 = temp_v9 + 4;
                }
                else {
                  FUN_002ae3d8();
                  temp_v9 = temp_v9 + temp_v6;
                }
              }
              else {
                *(unsigned short *)(param_1 + 0x12) = 0;
                temp_v16 = 0.0f;
                *(short *)((int)param_1 + 0x46) = (short)temp_v9 + 1;
                *(unsigned char *)(param_1 + 0x17) = 0;
                while( 1 ) {
                  temp_v9 = temp_v9 + 1;
                  temp_v1 = *(short *)(*param_1 + temp_v9 * 0x20);
                  *(char *)((int)param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x12) * 2 + 0x5c) =
                       (char)((unsigned short)temp_v1 >> 8);
                  *(char *)((int)param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x12) * 2 + 0x5d) =
                       (char)temp_v1;
                  if (temp_v1 == 0) break;
                  *(short *)(param_1 + 0x12) = (short)param_1[0x12] + 1;
                  temp_v17 = (float)VectorSignedToFloat((int)*(char *)(*param_1 + temp_v9 * 0x20 + 10),
                                                      (unsigned char)(temp_v13 >> 0x16) & 3);
                  temp_v16 = (float)param_1[0x16] + temp_v17 + temp_v16;
                }
                param_1[0x13] = (int)temp_v16;
              }
            }
            else {
              temp_v9 = temp_v9 + 1;
              temp_v6 = (unsigned int)*(unsigned short *)(*param_1 + temp_v9 * 0x20);
              if (temp_v6 != 0) {
                temp_v23 = *(unsigned int *)(DAT_00464d78 + temp_v6 * 4);
              }
              else {
                temp_v23 = param_1[0xe];
              }
              temp_v23 = temp_v23 | temp_v24;
              temp_v22 = 0;
              if (DAT_00464d58 != 0) {
                temp_v22 = *(unsigned int *)(DAT_00464d58 + temp_v6 * 8 + 4);
              }
              temp_v22 = temp_v22 | temp_v29;
              if (DAT_00464d58 != 0) {
                temp_v26 = (unsigned int)*(unsigned char *)(DAT_00464d58 + temp_v6 * 8);
              }
              else {
                temp_v26 = 0;
              }
            }
          }
          else {
            switch(temp_v6) {
            case 0xf816:
              temp_v17 = 0.0f;
              temp_v11 = 0;
              temp_v5 = 0;
              temp_v25 = 1;
              temp_v16 = temp_v17;
              do {
                temp_v1 = *(short *)(*param_1 + (temp_v9 + temp_v5) * 0x20);
                temp_v8 = FUN_002ae424(temp_v1);
                if (temp_v8 != 0) {
                  if (temp_v1 == -0x7e9) goto LAB_002b0dac;
                }
                else {
                  temp_v18 = (float)VectorSignedToFloat((int)*(char *)((temp_v9 + temp_v5) * 0x20 +
                                                                     *param_1 + 10),
                                                      (unsigned char)(temp_v13 >> 0x16) & 3);
                  temp_v17 = (float)param_1[6] + temp_v17 + temp_v18;
                }
                temp_v5 = temp_v5 + 1;
              } while( 1 );
            case 0xf817:
              temp_v25 = 2;
              break;
            case 0xf818:
              temp_v25 = 0;
              break;
            case 0xf819:
              temp_v9 = temp_v9 + 1;
              temp_v2 = *(unsigned short *)(*param_1 + temp_v9 * 0x20);
              temp_v23 = FUN_00145d5c(temp_v2);
              temp_v23 = temp_v23 | temp_v24;
              temp_v22 = FUN_00145e44(temp_v2);
              temp_v22 = temp_v22 | temp_v29;
              temp_v26 = FUN_00145e24(temp_v2);
              break;
            case 0xf81a:
              temp_v9 = temp_v9 + 1;
              temp_v3 = *(unsigned short *)(*param_1 + temp_v9 * 0x20);
              if (temp_v32 != 0) {
                temp_v16 = temp_v16 - in_s0;
                temp_v6 = (temp_v13 & 0xfffffff) | ((unsigned int)(temp_v16 < temp_v17) << 0x1f) |
                        ((unsigned int)(temp_v16 == temp_v17) << 0x1e);
                temp_v13 = temp_v6 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v17 != temp_v17)) << 0x1c);
                temp_v4 = (unsigned char)(temp_v6 >> 0x18);
                if (!(unsigned char)((temp_v4 >> 6) & 1) && temp_v4 >> 7 == ((unsigned char)(temp_v13 >> 0x1c) & 1)) {
                  temp_v21 = (unsigned long long)(unsigned int)temp_v16 << 0x20;
                }
              }
              temp_v20 = (unsigned long long)(unsigned int)in_s0;
              temp_v7 = (**(romwright_code **)(*piVar10 + 0x24))(piVar10);
              VectorSignedToFloat((unsigned int)temp_v3,(unsigned char)(temp_v13 >> 0x16) & 3);
              VectorSignedToFloat(temp_v7,(unsigned char)(temp_v13 >> 0x16) & 3);
              break;
            default:
              FUN_002ae3d8();
              temp_v9 = temp_v9 + temp_v6;
            }
          }
        }
        else if (DAT_00464d64 != (romwright_code *)0x0) {
          temp_v5 = temp_v9 + 1;
          temp_v9 = temp_v9 + 2;
          temp_v7 = (*DAT_00464d64)(*(unsigned short *)(*param_1 + temp_v5 * 0x20),
                                  *(unsigned short *)(*param_1 + temp_v9 * 0x20),0);
          temp_v17 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(temp_v13 >> 0x16) & 3);
          temp_v20 = (unsigned long long)(unsigned int)((float)param_1[6] + temp_v16 + temp_v17);
        }
        else {
          FUN_002ae3d8();
          temp_v9 = temp_v9 + temp_v6;
        }
      }
      else if (temp_v25 != 2) {
        temp_v5 = *param_1 + temp_v9 * 0x20 + 4;
        temp_v17 = (float)VectorSignedToFloat((int)*(char *)(temp_v5 + 6),(unsigned char)(temp_v13 >> 0x16) & 3);
        if ((DAT_00464d68 != 0) && (DAT_00464d68 == temp_v6)) {
          temp_v17 = (float)VectorSignedToFloat((int)(temp_v17 * temp_v19),(unsigned char)(temp_v13 >> 0x16) & 3);
        }
        temp_v0 = *(unsigned char *)(param_1[5] + 0x24);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v5 + 5),(unsigned char)(temp_v13 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v5 + 7),(unsigned char)(temp_v13 >> 0x16) & 3);
        temp_v7 = *(unsigned int *)
                 (*(int *)(param_1[5] + 0xc) + *(int *)(*param_1 + temp_v9 * 0x20 + 0x1c) * 4);
        if (temp_v26 != 0) {
          FUN_002aa200(DAT_0044ea00,temp_v7,temp_v0);
          if (temp_v26 == 2) {
            temp_v21 = temp_v21 & 0xffffffff00000000;
            FUN_002aa100(piVar10,temp_v5,temp_v14,temp_v14,temp_v14,temp_v14);
            FUN_002aa100(piVar10,temp_v5,temp_v14,temp_v14,temp_v14,temp_v14);
          }
          FUN_002aa100(piVar10,temp_v5,temp_v22,temp_v22,temp_v22,temp_v22);
          FUN_002aa100(piVar10,temp_v5,temp_v22,temp_v22,temp_v22,temp_v22);
          FUN_002aa100(piVar10,temp_v5,temp_v22,temp_v22,temp_v22,temp_v22);
          FUN_002aa100(piVar10,temp_v5,temp_v22,temp_v22,temp_v22,temp_v22);
          FUN_002aa100(piVar10,temp_v5,temp_v23,temp_v23,temp_v23,temp_v23);
        }
        else {
          FUN_002aa200(DAT_0044ea00,temp_v7,temp_v0);
          FUN_002aa100(piVar10,temp_v5,temp_v23,temp_v23,temp_v23,temp_v23);
        }
        temp_v20 = (unsigned long long)(unsigned int)((float)param_1[6] + temp_v16 + temp_v17);
      }
      goto LAB_002b1390;
    }
  }
  return;
LAB_002b0dac:
  do {
    while( 1 ) {
      temp_v5 = temp_v5 + 1;
      temp_v10 = temp_v9 + temp_v5;
      temp_v1 = *(short *)(*param_1 + temp_v10 * 0x20);
      temp_v8 = FUN_002ae424(temp_v1);
      if (temp_v8 != 0) break;
      temp_v18 = (float)VectorSignedToFloat((int)*(char *)(temp_v10 * 0x20 + *param_1 + 10),
                                          (unsigned char)(temp_v13 >> 0x16) & 3);
      aiStack_130[temp_v11] = temp_v10;
      temp_v11 = temp_v11 + 1;
      temp_v16 = (float)param_1[0x2a] + temp_v16 + temp_v18;
    }
  } while (temp_v1 != -0x7e8);
  if (temp_v30 != 0) {
    temp_v5 = 0;
    VectorSignedToFloat((int)(((float)temp_v20 + temp_v17 * temp_v19) - temp_v16 * temp_v19),
                        (unsigned char)(temp_v13 >> 0x16) & 3);
    if (0 < temp_v11) {
      do {
        temp_v8 = *param_1 + aiStack_130[temp_v5] * 0x20 + 4;
        VectorSignedToFloat((int)*(char *)(temp_v8 + 6),(unsigned char)(temp_v13 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v8 + 5),(unsigned char)(temp_v13 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v8 + 7),(unsigned char)(temp_v13 >> 0x16) & 3);
        FUN_002aa200(DAT_0044ea00,
                     *(unsigned int *)
                      (*(int *)(param_1[0x29] + 0xc) +
                      *(int *)(*param_1 + aiStack_130[temp_v5] * 0x20 + 0x1c) * 4),
                     *(unsigned char *)(param_1[0x29] + 0x24),(unsigned int)*(unsigned char *)(temp_v8 + 7));
        FUN_002aa100(temp_v30,temp_v8,temp_v15,temp_v15,temp_v15,temp_v15);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < temp_v11);
    }
  }
LAB_002b1390:
  temp_v9 = temp_v9 + 1;
  if (param_1[3] + param_1[4] <= temp_v9) {
    return;
  }
  goto LAB_002b0a30;
}

} /* extern "C" */
