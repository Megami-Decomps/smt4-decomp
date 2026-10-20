/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00259838` (_code @ 0x259838, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_002aa100(...);
int FUN_002aa200(...);
int FUN_002ae3d8(void);
int FUN_002ae424(...);
int FUN_002ba12c(unsigned int);
int FUN_002bd82c(unsigned int, unsigned int);
int FUN_002bf380(int, int, int, int);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
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

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern unsigned int FUN_00145d5c(unsigned short);
extern unsigned int FUN_00145e24(unsigned short);
extern unsigned int FUN_00145e44(unsigned short);
/* Supplied declaration required: FUN_002aa100. */
/* Supplied declaration required: FUN_002aa200. */
/* Supplied declaration required: FUN_002ae3d8. */
/* Supplied declaration required: FUN_002ae424. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bd82c. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);


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

void FUN_00259838(int param_1,float *param_2,int param_3,int param_4)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 25 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  short temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  unsigned int temp_v7;
  int temp_v8;
  int *piVar11;
  int unaff_r7;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  unsigned long long temp_v23;
  unsigned int uStack_1b0;
  unsigned int uStack_1ac;
  unsigned char uStack_184;
  int iStack_148;
  unsigned int uStack_13c;
  int aiStack_130 [32];
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a4;
  int iStack_9c;
  unsigned int uStack_90;
  int iStack_8c;
  unsigned long long uStack_40;
  unsigned long long uStack_38;
  int *piStack_30;
  unsigned int uStack_2c;
  int iStack_28;
  unsigned int uStack_24;
  
  if (param_1 == 0) {
    return;
  }
  iStack_28 = (int)param_2[2] + param_4;
  uStack_24 = 0x6f;
  FUN_002bf380(2,0x39,0xe,(int)param_2[1] + param_3);
  temp_v5 = FUN_002bf4f8(0x39,0x9e);
  temp_v6 = *(int *)(param_1 + 0x90);
  temp_v3 = **(short **)(temp_v5 + 0xc);
  FUN_002bd82c(*(unsigned int *)(param_1 + 0x8c),0xffffff00);
  piVar8 = *(int **)(param_1 + 0x8c);
  temp_v13 = *param_2;
  temp_v16 = (float)VectorSignedToFloat(0x90,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v16 = temp_v16 * 0.00390625f;
  temp_v17 = VectorSignedToFloat((int)param_2[2] + (int)*(short *)(temp_v5 + 10) + param_4,
                               (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 8) + (int)param_2[1] +
                                      (temp_v3 - temp_v6) / 2 + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  iStack_28 = 0xffffffff;
  uStack_2c = 0;
  uStack_40 = CONCAT44(temp_v17,temp_v14);
  uStack_38 = CONCAT44(temp_v13,temp_v16);
  temp_v21 = 0.0f;
  temp_v23 = 0;
  iStack_148 = 0;
  piStack_30 = piVar8;
  if (DAT_00464d48 != '\0') {
    FUN_002ba12c(DAT_0044ea00);
    temp_v14 = temp_v16 + temp_v14;
  }
  temp_v5 = piVar8[5];
  if (temp_v5 != 0) {
    unaff_r7 = piVar8[4];
  }
  if (temp_v5 != 0 && unaff_r7 != 0) {
    iStack_9c = 0;
    piVar11 = *(int **)(temp_v5 + 8);
    if (piVar8[0x29] != 0) {
      iStack_9c = *(int *)(piVar8[0x29] + 8);
    }
    temp_v12 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 == temp_v21) << 0x1e);
    if (romwright_subpiece_4_1_0(temp_v12 >> 0x1e,0)) {
      uStack_184 = 0;
    }
    else if (temp_v13 == 1.0f) {
      uStack_184 = 0xff;
    }
    else {
      uStack_184 = VectorFloatToUnsigned(temp_v13 * 255.0f,3);
    }
    temp_v22 = CONCAT44(temp_v13,temp_v14);
    temp_v19 = (float)VectorUnsignedToFloat(DAT_004def08 & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v21 = (float)VectorUnsignedToFloat(DAT_004def0c & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v20 = (float)VectorUnsignedToFloat(DAT_004def10 & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v16 = (float)VectorUnsignedToFloat(DAT_004def14 & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    uStack_1b0 = VectorFloatToUnsigned(temp_v19 * temp_v13,3);
    VectorFloatToUnsigned(temp_v21 * temp_v13,3);
    temp_v18 = VectorFloatToUnsigned(temp_v20 * temp_v13,3);
    temp_v15 = VectorFloatToUnsigned(temp_v16 * temp_v13,3);
    uStack_1b0 = uStack_1b0 & 0xff;
    uStack_b0 = (DAT_004def08 & 0xffffff00) | uStack_1b0;
    uStack_90 = (temp_v18 & 0xff) | (DAT_004def10 & 0xffffff00);
    uStack_ac = (DAT_004def14 & 0xffffff00) | (temp_v15 & 0xff);
    temp_v5 = piVar8[0x2c];
    if (temp_v5 == 0) {
      uStack_1ac = piVar8[0xe];
    }
    else {
      uStack_1ac = *(unsigned int *)(DAT_00464d78 + temp_v5 * 4);
    }
    uStack_1ac = uStack_1ac | uStack_184;
    temp_v11 = DAT_00464d58 != 0;
    temp_v15 = uStack_1ac;
    if (temp_v11) {
      temp_v15 = DAT_00464d58 + temp_v5 * 8;
    }
    if (temp_v11) {
      uStack_1b0 = *(unsigned int *)(temp_v15 + 4);
    }
    temp_v6 = piVar8[3];
    uStack_a4 = (unsigned int)((short)(uStack_184 << 3) * 0x667) >> 0xe;
    uStack_13c = (unsigned int)*(unsigned char *)(DAT_00464d58 + temp_v5 * 8);
    if (!temp_v11) {
      uStack_1b0 = 0;
    }
    uStack_1b0 = uStack_1b0 | uStack_a4;
    temp_v18 = piVar8[0x28] | uStack_184;
    temp_v15 = (unsigned int)((short)(uStack_184 << 2) * 0xcd) >> 0xb;
    if (temp_v6 < temp_v6 + unaff_r7) {
      temp_v13 = 0.5f;
LAB_002b0a30:
      iStack_8c = 1;
      temp_v7 = (unsigned int)*(unsigned short *)(*piVar8 + temp_v6 * 0x20);
      temp_v5 = FUN_002ae424(temp_v7);
      temp_v21 = (float)(temp_v23 >> 0x20);
      temp_v16 = (float)temp_v22;
      if (temp_v5 != 0) {
        if (temp_v7 != 0xf814) {
          if (temp_v7 < 0xf814) {
            if (temp_v7 != 0xf804) {
              if (temp_v7 < 0xf804) {
                if (temp_v7 != 0xf801) {
                  if (temp_v7 == 0xf802) {
                    return;
                  }
                  FUN_002ae3d8();
                  temp_v6 = temp_v6 + temp_v7;
                }
                else {
                  if (iStack_8c != 0) {
                    temp_v16 = temp_v16 - temp_v14;
                    temp_v7 = (temp_v12 & 0xfffffff) | ((unsigned int)(temp_v16 < temp_v21) << 0x1f) |
                            ((unsigned int)(temp_v16 == temp_v21) << 0x1e);
                    temp_v12 = temp_v7 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v21 != temp_v21)) << 0x1c);
                    temp_v4 = (unsigned char)(temp_v7 >> 0x18);
                    if (!(unsigned char)((temp_v4 >> 6) & 1) && temp_v4 >> 7 == ((unsigned char)(temp_v12 >> 0x1c) & 1)) {
                      temp_v23 = (unsigned long long)(unsigned int)temp_v16 << 0x20;
                    }
                  }
                  temp_v22 = (unsigned long long)(unsigned int)temp_v14;
                  temp_v17 = (**(romwright_code **)(*piVar11 + 0x24))(piVar11);
                  VectorSignedToFloat(temp_v17,(unsigned char)(temp_v12 >> 0x16) & 3);
                }
              }
              else if (temp_v7 != 0xf812) {
                if (temp_v7 == 0xf813) {
                  temp_v6 = temp_v6 + 4;
                }
                else {
                  FUN_002ae3d8();
                  temp_v6 = temp_v6 + temp_v7;
                }
              }
              else {
                *(unsigned short *)(piVar8 + 0x12) = 0;
                temp_v16 = 0.0f;
                *(short *)((int)piVar8 + 0x46) = (short)temp_v6 + 1;
                *(unsigned char *)(piVar8 + 0x17) = 0;
                while( 1 ) {
                  temp_v6 = temp_v6 + 1;
                  temp_v3 = *(short *)(*piVar8 + temp_v6 * 0x20);
                  *(char *)((int)piVar8 + (unsigned int)*(unsigned short *)(piVar8 + 0x12) * 2 + 0x5c) =
                       (char)((unsigned short)temp_v3 >> 8);
                  *(char *)((int)piVar8 + (unsigned int)*(unsigned short *)(piVar8 + 0x12) * 2 + 0x5d) = (char)temp_v3
                  ;
                  if (temp_v3 == 0) break;
                  *(short *)(piVar8 + 0x12) = (short)piVar8[0x12] + 1;
                  temp_v21 = (float)VectorSignedToFloat((int)*(char *)(*piVar8 + temp_v6 * 0x20 + 10),
                                                      (unsigned char)(temp_v12 >> 0x16) & 3);
                  temp_v16 = (float)piVar8[0x16] + temp_v21 + temp_v16;
                }
                piVar8[0x13] = (int)temp_v16;
              }
            }
            else {
              temp_v6 = temp_v6 + 1;
              temp_v7 = (unsigned int)*(unsigned short *)(*piVar8 + temp_v6 * 0x20);
              if (temp_v7 != 0) {
                uStack_1ac = *(unsigned int *)(DAT_00464d78 + temp_v7 * 4);
              }
              else {
                uStack_1ac = piVar8[0xe];
              }
              uStack_1ac = uStack_1ac | uStack_184;
              uStack_1b0 = 0;
              if (DAT_00464d58 != 0) {
                uStack_1b0 = *(unsigned int *)(DAT_00464d58 + temp_v7 * 8 + 4);
              }
              uStack_1b0 = uStack_1b0 | uStack_a4;
              if (DAT_00464d58 != 0) {
                uStack_13c = (unsigned int)*(unsigned char *)(DAT_00464d58 + temp_v7 * 8);
              }
              else {
                uStack_13c = 0;
              }
            }
          }
          else {
            switch(temp_v7) {
            case 0xf816:
              temp_v21 = 0.0f;
              temp_v10 = 0;
              temp_v5 = 0;
              iStack_148 = 1;
              temp_v16 = temp_v21;
              do {
                temp_v3 = *(short *)(*piVar8 + (temp_v6 + temp_v5) * 0x20);
                temp_v8 = FUN_002ae424(temp_v3);
                if (temp_v8 != 0) {
                  if (temp_v3 == -0x7e9) goto LAB_002b0dac;
                }
                else {
                  temp_v19 = (float)VectorSignedToFloat((int)*(char *)((temp_v6 + temp_v5) * 0x20 +
                                                                     *piVar8 + 10),
                                                      (unsigned char)(temp_v12 >> 0x16) & 3);
                  temp_v21 = (float)piVar8[6] + temp_v21 + temp_v19;
                }
                temp_v5 = temp_v5 + 1;
              } while( 1 );
            case 0xf817:
              iStack_148 = 2;
              break;
            case 0xf818:
              iStack_148 = 0;
              break;
            case 0xf819:
              temp_v6 = temp_v6 + 1;
              temp_v1 = *(unsigned short *)(*piVar8 + temp_v6 * 0x20);
              uStack_1ac = FUN_00145d5c(temp_v1);
              uStack_1ac = uStack_1ac | uStack_184;
              uStack_1b0 = FUN_00145e44(temp_v1);
              uStack_1b0 = uStack_1b0 | uStack_a4;
              uStack_13c = FUN_00145e24(temp_v1);
              break;
            case 0xf81a:
              temp_v6 = temp_v6 + 1;
              temp_v2 = *(unsigned short *)(*piVar8 + temp_v6 * 0x20);
              if (iStack_8c != 0) {
                temp_v16 = temp_v16 - temp_v14;
                temp_v7 = (temp_v12 & 0xfffffff) | ((unsigned int)(temp_v16 < temp_v21) << 0x1f) |
                        ((unsigned int)(temp_v16 == temp_v21) << 0x1e);
                temp_v12 = temp_v7 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v21 != temp_v21)) << 0x1c);
                temp_v4 = (unsigned char)(temp_v7 >> 0x18);
                if (!(unsigned char)((temp_v4 >> 6) & 1) && temp_v4 >> 7 == ((unsigned char)(temp_v12 >> 0x1c) & 1)) {
                  temp_v23 = (unsigned long long)(unsigned int)temp_v16 << 0x20;
                }
              }
              temp_v22 = (unsigned long long)(unsigned int)temp_v14;
              temp_v17 = (**(romwright_code **)(*piVar11 + 0x24))(piVar11);
              VectorSignedToFloat((unsigned int)temp_v2,(unsigned char)(temp_v12 >> 0x16) & 3);
              VectorSignedToFloat(temp_v17,(unsigned char)(temp_v12 >> 0x16) & 3);
              break;
            default:
              FUN_002ae3d8();
              temp_v6 = temp_v6 + temp_v7;
            }
          }
        }
        else if (DAT_00464d64 != (romwright_code *)0x0) {
          temp_v5 = temp_v6 + 1;
          temp_v6 = temp_v6 + 2;
          temp_v17 = (*DAT_00464d64)(*(unsigned short *)(*piVar8 + temp_v5 * 0x20),
                                   *(unsigned short *)(*piVar8 + temp_v6 * 0x20),0);
          temp_v21 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(temp_v12 >> 0x16) & 3);
          temp_v22 = (unsigned long long)(unsigned int)((float)piVar8[6] + temp_v16 + temp_v21);
        }
        else {
          FUN_002ae3d8();
          temp_v6 = temp_v6 + temp_v7;
        }
      }
      else if (iStack_148 != 2) {
        temp_v5 = *piVar8 + temp_v6 * 0x20 + 4;
        temp_v21 = (float)VectorSignedToFloat((int)*(char *)(temp_v5 + 6),(unsigned char)(temp_v12 >> 0x16) & 3);
        if ((DAT_00464d68 != 0) && (DAT_00464d68 == temp_v7)) {
          temp_v21 = (float)VectorSignedToFloat((int)(temp_v21 * temp_v13),(unsigned char)(temp_v12 >> 0x16) & 3);
        }
        temp_v0 = *(unsigned char *)(piVar8[5] + 0x24);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v5 + 5),(unsigned char)(temp_v12 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v5 + 7),(unsigned char)(temp_v12 >> 0x16) & 3);
        temp_v17 = *(unsigned int *)
                  (*(int *)(piVar8[5] + 0xc) + *(int *)(*piVar8 + temp_v6 * 0x20 + 0x1c) * 4);
        if (uStack_13c != 0) {
          FUN_002aa200(DAT_0044ea00,temp_v17,temp_v0);
          if (uStack_13c == 2) {
            temp_v23 = temp_v23 & 0xffffffff00000000;
            FUN_002aa100(piVar11,temp_v5,temp_v15,temp_v15,temp_v15,temp_v15);
            FUN_002aa100(piVar11,temp_v5,temp_v15,temp_v15,temp_v15,temp_v15);
          }
          FUN_002aa100(piVar11,temp_v5,uStack_1b0,uStack_1b0,uStack_1b0,uStack_1b0);
          FUN_002aa100(piVar11,temp_v5,uStack_1b0,uStack_1b0,uStack_1b0,uStack_1b0);
          FUN_002aa100(piVar11,temp_v5,uStack_1b0,uStack_1b0,uStack_1b0,uStack_1b0);
          FUN_002aa100(piVar11,temp_v5,uStack_1b0,uStack_1b0,uStack_1b0,uStack_1b0);
          FUN_002aa100(piVar11,temp_v5,uStack_1ac,uStack_1ac,uStack_1ac,uStack_1ac);
        }
        else {
          FUN_002aa200(DAT_0044ea00,temp_v17,temp_v0);
          FUN_002aa100(piVar11,temp_v5,uStack_1ac,uStack_1ac,uStack_1ac,uStack_1ac);
        }
        temp_v22 = (unsigned long long)(unsigned int)((float)piVar8[6] + temp_v16 + temp_v21);
      }
      goto LAB_002b1390;
    }
  }
  return;
LAB_002b0dac:
  do {
    while( 1 ) {
      temp_v5 = temp_v5 + 1;
      temp_v9 = temp_v6 + temp_v5;
      temp_v3 = *(short *)(*piVar8 + temp_v9 * 0x20);
      temp_v8 = FUN_002ae424(temp_v3);
      if (temp_v8 != 0) break;
      temp_v19 = (float)VectorSignedToFloat((int)*(char *)(temp_v9 * 0x20 + *piVar8 + 10),
                                          (unsigned char)(temp_v12 >> 0x16) & 3);
      aiStack_130[temp_v10] = temp_v9;
      temp_v10 = temp_v10 + 1;
      temp_v16 = (float)piVar8[0x2a] + temp_v16 + temp_v19;
    }
  } while (temp_v3 != -0x7e8);
  if (iStack_9c != 0) {
    temp_v5 = 0;
    VectorSignedToFloat((int)(((float)temp_v22 + temp_v21 * temp_v13) - temp_v16 * temp_v13),
                        (unsigned char)(temp_v12 >> 0x16) & 3);
    if (0 < temp_v10) {
      do {
        temp_v8 = *piVar8 + aiStack_130[temp_v5] * 0x20 + 4;
        VectorSignedToFloat((int)*(char *)(temp_v8 + 6),(unsigned char)(temp_v12 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v8 + 5),(unsigned char)(temp_v12 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v8 + 7),(unsigned char)(temp_v12 >> 0x16) & 3);
        FUN_002aa200(DAT_0044ea00,
                     *(unsigned int *)
                      (*(int *)(piVar8[0x29] + 0xc) +
                      *(int *)(*piVar8 + aiStack_130[temp_v5] * 0x20 + 0x1c) * 4),
                     *(unsigned char *)(piVar8[0x29] + 0x24),(unsigned int)*(unsigned char *)(temp_v8 + 7));
        FUN_002aa100(iStack_9c,temp_v8,temp_v18,temp_v18,temp_v18,temp_v18);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < temp_v10);
    }
  }
LAB_002b1390:
  temp_v6 = temp_v6 + 1;
  if (piVar8[3] + piVar8[4] <= temp_v6) {
    return;
  }
  goto LAB_002b0a30;
}

} /* extern "C" */
