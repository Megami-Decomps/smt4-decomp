/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b75ec` (_code @ 0x2b75ec, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_002aa100(...);
int FUN_002aa200(...);
int FUN_002ae3d8(void);
int FUN_002ae424(...);
int FUN_002ba12c(unsigned int);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_6_stack;

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


void FUN_002b75ec(int *param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int param_5,
                 unsigned int param_6)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr, in_s0; 12 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int *piVar8;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int unaff_r7;
  int temp_v10;
  unsigned char temp_v11;
  unsigned int temp_v12;
  unsigned int in_fpscr;
  unsigned int temp_v13;
  float in_s0;
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
  unsigned int uStack_14c;
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
  unsigned int uStack_28;
  
  temp_v16 = (float)VectorSignedToFloat(0x100 - param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v16 = temp_v16 * 0.00390625f;
  temp_v17 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v14 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  uStack_28 = param_6;
  uStack_2c = param_5;
  uStack_40 = CONCAT44(temp_v17,temp_v14);
  uStack_38 = CONCAT44(in_s0,temp_v16);
  temp_v21 = 0.0f;
  uStack_14c = 0;
  temp_v23 = 0;
  iStack_148 = 0;
  piStack_30 = param_1;
  if (DAT_00464d48 != '\0') {
    FUN_002ba12c(DAT_0044ea00);
    temp_v14 = temp_v16 + temp_v14;
  }
  temp_v4 = param_1[5];
  if (temp_v4 != 0) {
    unaff_r7 = param_1[4];
  }
  if (temp_v4 != 0 && unaff_r7 != 0) {
    iStack_9c = 0;
    piVar8 = *(int **)(temp_v4 + 8);
    if (param_1[0x29] != 0) {
      iStack_9c = *(int *)(param_1[0x29] + 8);
    }
    temp_v12 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == temp_v21) << 0x1e);
    if (romwright_subpiece_4_1_0(temp_v12 >> 0x1e,0)) {
      uStack_184 = 0;
    }
    else if (in_s0 == 1.0f) {
      uStack_184 = 0xff;
    }
    else {
      uStack_184 = VectorFloatToUnsigned(in_s0 * 255.0f,3);
    }
    temp_v22 = CONCAT44(in_s0,temp_v14);
    temp_v19 = (float)VectorUnsignedToFloat(DAT_004def08 & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v21 = (float)VectorUnsignedToFloat(DAT_004def0c & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v7 = DAT_004def0c & 0xffffff00;
    temp_v20 = (float)VectorUnsignedToFloat(DAT_004def10 & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v16 = (float)VectorUnsignedToFloat(DAT_004def14 & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    uStack_1b0 = VectorFloatToUnsigned(temp_v19 * in_s0,3);
    temp_v18 = VectorFloatToUnsigned(temp_v21 * in_s0,3);
    temp_v15 = VectorFloatToUnsigned(temp_v20 * in_s0,3);
    temp_v13 = VectorFloatToUnsigned(temp_v16 * in_s0,3);
    uStack_1b0 = uStack_1b0 & 0xff;
    uStack_b0 = (DAT_004def08 & 0xffffff00) | uStack_1b0;
    uStack_90 = (temp_v15 & 0xff) | (DAT_004def10 & 0xffffff00);
    uStack_ac = (DAT_004def14 & 0xffffff00) | (temp_v13 & 0xff);
    temp_v4 = param_1[0x2c];
    if (temp_v4 == 0) {
      uStack_1ac = param_1[0xe];
    }
    else {
      uStack_1ac = *(unsigned int *)(DAT_00464d78 + temp_v4 * 4);
    }
    uStack_1ac = uStack_1ac | uStack_184;
    temp_v11 = DAT_00464d58 != 0;
    temp_v13 = uStack_1ac;
    if (temp_v11) {
      temp_v13 = DAT_00464d58 + temp_v4 * 8;
    }
    if (temp_v11) {
      uStack_1b0 = *(unsigned int *)(temp_v13 + 4);
    }
    temp_v8 = param_1[3];
    uStack_a4 = (unsigned int)((short)(uStack_184 << 3) * 0x667) >> 0xe;
    uStack_13c = (unsigned int)*(unsigned char *)(DAT_00464d58 + temp_v4 * 8);
    if (!temp_v11) {
      uStack_1b0 = 0;
    }
    uStack_1b0 = uStack_1b0 | uStack_a4;
    temp_v15 = param_1[0x28] | uStack_184;
    temp_v13 = (unsigned int)((short)(uStack_184 << 2) * 0xcd) >> 0xb;
    if (temp_v8 < temp_v8 + unaff_r7) {
      temp_v16 = 0.5f;
LAB_002b0a30:
      iStack_8c = 1;
      temp_v5 = (unsigned int)*(unsigned short *)(*param_1 + temp_v8 * 0x20);
      temp_v11 = (param_5 & 0x10) == 0;
      if (((param_5 & 2) != 0) && (uStack_14c != uStack_28)) {
        temp_v11 = 0;
        iStack_8c = 0;
      }
      temp_v4 = FUN_002ae424(temp_v5);
      temp_v19 = (float)(temp_v23 >> 0x20);
      temp_v21 = (float)temp_v22;
      if (temp_v4 != 0) {
        if (temp_v5 != 0xf814) {
          if (temp_v5 < 0xf814) {
            if (temp_v5 != 0xf804) {
              if (temp_v5 < 0xf804) {
                if (temp_v5 != 0xf801) {
                  if (temp_v5 == 0xf802) {
                    return;
                  }
                  FUN_002ae3d8();
                  temp_v8 = temp_v8 + temp_v5;
                }
                else {
                  if (iStack_8c != 0) {
                    temp_v21 = temp_v21 - temp_v14;
                    temp_v5 = (temp_v12 & 0xfffffff) | ((unsigned int)(temp_v21 < temp_v19) << 0x1f) |
                            ((unsigned int)(temp_v21 == temp_v19) << 0x1e);
                    temp_v12 = temp_v5 | ((unsigned int)((temp_v21 != temp_v21) || (temp_v19 != temp_v19)) << 0x1c);
                    temp_v3 = (unsigned char)(temp_v5 >> 0x18);
                    if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(temp_v12 >> 0x1c) & 1)) {
                      temp_v23 = (unsigned long long)(unsigned int)temp_v21 << 0x20;
                    }
                  }
                  temp_v22 = (unsigned long long)(unsigned int)temp_v14;
                  if ((param_5 & 4) == 0) {
                    temp_v17 = (**(romwright_code **)(*piVar8 + 0x24))(piVar8);
                    VectorSignedToFloat(temp_v17,(unsigned char)(temp_v12 >> 0x16) & 3);
                  }
                  uStack_14c = uStack_14c + 1;
                }
              }
              else if (temp_v5 != 0xf812) {
                if (temp_v5 == 0xf813) {
                  temp_v8 = temp_v8 + 4;
                }
                else {
                  FUN_002ae3d8();
                  temp_v8 = temp_v8 + temp_v5;
                }
              }
              else {
                *(unsigned short *)(param_1 + 0x12) = 0;
                temp_v21 = 0.0f;
                *(short *)((int)param_1 + 0x46) = (short)temp_v8 + 1;
                *(unsigned char *)(param_1 + 0x17) = 0;
                while( 1 ) {
                  temp_v8 = temp_v8 + 1;
                  temp_v1 = *(short *)(*param_1 + temp_v8 * 0x20);
                  *(char *)((int)param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x12) * 2 + 0x5c) =
                       (char)((unsigned short)temp_v1 >> 8);
                  *(char *)((int)param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x12) * 2 + 0x5d) =
                       (char)temp_v1;
                  if (temp_v1 == 0) break;
                  *(short *)(param_1 + 0x12) = (short)param_1[0x12] + 1;
                  temp_v19 = (float)VectorSignedToFloat((int)*(char *)(*param_1 + temp_v8 * 0x20 + 10),
                                                      (unsigned char)(temp_v12 >> 0x16) & 3);
                  temp_v21 = (float)param_1[0x16] + temp_v19 + temp_v21;
                }
                param_1[0x13] = (int)temp_v21;
              }
            }
            else {
              temp_v8 = temp_v8 + 1;
              temp_v5 = (unsigned int)*(unsigned short *)(*param_1 + temp_v8 * 0x20);
              if ((param_5 & 0x20) == 0) {
                if (temp_v5 != 0) {
                  uStack_1ac = *(unsigned int *)(DAT_00464d78 + temp_v5 * 4);
                }
                else {
                  uStack_1ac = param_1[0xe];
                }
                uStack_1ac = uStack_1ac | uStack_184;
                uStack_1b0 = 0;
                if (DAT_00464d58 != 0) {
                  uStack_1b0 = *(unsigned int *)(DAT_00464d58 + temp_v5 * 8 + 4);
                }
                uStack_1b0 = uStack_1b0 | uStack_a4;
              }
              if (DAT_00464d58 != 0) {
                uStack_13c = (unsigned int)*(unsigned char *)(DAT_00464d58 + temp_v5 * 8);
              }
              else {
                uStack_13c = 0;
              }
            }
          }
          else {
            switch(temp_v5) {
            case 0xf816:
              temp_v19 = 0.0f;
              temp_v10 = 0;
              temp_v4 = 0;
              iStack_148 = 1;
              temp_v21 = temp_v19;
              do {
                temp_v1 = *(short *)(*param_1 + (temp_v8 + temp_v4) * 0x20);
                temp_v6 = FUN_002ae424(temp_v1);
                if (temp_v6 != 0) {
                  if (temp_v1 == -0x7e9) goto LAB_002b0dac;
                }
                else {
                  temp_v20 = (float)VectorSignedToFloat((int)*(char *)((temp_v8 + temp_v4) * 0x20 +
                                                                     *param_1 + 10),
                                                      (unsigned char)(temp_v12 >> 0x16) & 3);
                  if (((param_5 & 8) != 0) && (temp_v5 == 0x8140)) {
                    temp_v20 = (float)VectorSignedToFloat((int)(temp_v20 * temp_v16),
                                                        (unsigned char)(temp_v12 >> 0x16) & 3);
                  }
                  temp_v19 = (float)param_1[6] + temp_v19 + temp_v20;
                }
                temp_v4 = temp_v4 + 1;
              } while( 1 );
            case 0xf817:
              iStack_148 = 2;
              break;
            case 0xf818:
              iStack_148 = 0;
              break;
            case 0xf819:
              temp_v8 = temp_v8 + 1;
              temp_v2 = *(unsigned short *)(*param_1 + temp_v8 * 0x20);
              if ((param_5 & 0x20) == 0) {
                uStack_1ac = FUN_00145d5c(temp_v2);
                uStack_1ac = uStack_1ac | uStack_184;
                uStack_1b0 = FUN_00145e44(temp_v2);
                uStack_1b0 = uStack_1b0 | uStack_a4;
              }
              uStack_13c = FUN_00145e24(temp_v2);
              break;
            case 0xf81a:
              temp_v8 = temp_v8 + 1;
              uStack_14c = (unsigned int)*(unsigned short *)(*param_1 + temp_v8 * 0x20);
              if (iStack_8c != 0) {
                temp_v21 = temp_v21 - temp_v14;
                temp_v5 = (temp_v12 & 0xfffffff) | ((unsigned int)(temp_v21 < temp_v19) << 0x1f) |
                        ((unsigned int)(temp_v21 == temp_v19) << 0x1e);
                temp_v12 = temp_v5 | ((unsigned int)((temp_v21 != temp_v21) || (temp_v19 != temp_v19)) << 0x1c);
                temp_v3 = (unsigned char)(temp_v5 >> 0x18);
                if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(temp_v12 >> 0x1c) & 1)) {
                  temp_v23 = (unsigned long long)(unsigned int)temp_v21 << 0x20;
                }
              }
              temp_v22 = (unsigned long long)(unsigned int)temp_v14;
              if ((param_5 & 4) == 0) {
                temp_v17 = (**(romwright_code **)(*piVar8 + 0x24))(piVar8);
                VectorSignedToFloat(uStack_14c,(unsigned char)(temp_v12 >> 0x16) & 3);
                VectorSignedToFloat(temp_v17,(unsigned char)(temp_v12 >> 0x16) & 3);
              }
              break;
            default:
              FUN_002ae3d8();
              temp_v8 = temp_v8 + temp_v5;
            }
          }
        }
        else if (DAT_00464d64 != (romwright_code *)0x0) {
          temp_v4 = temp_v8 + 1;
          temp_v8 = temp_v8 + 2;
          temp_v17 = (*DAT_00464d64)(*(unsigned short *)(*param_1 + temp_v4 * 0x20),
                                   *(unsigned short *)(*param_1 + temp_v8 * 0x20),temp_v11 ^ 1);
          temp_v19 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(temp_v12 >> 0x16) & 3);
          temp_v22 = (unsigned long long)(unsigned int)((float)param_1[6] + temp_v21 + temp_v19);
        }
        else {
          FUN_002ae3d8();
          temp_v8 = temp_v8 + temp_v5;
        }
      }
      else if (iStack_148 != 2) {
        temp_v4 = *param_1 + temp_v8 * 0x20 + 4;
        temp_v19 = (float)VectorSignedToFloat((int)*(char *)(temp_v4 + 6),(unsigned char)(temp_v12 >> 0x16) & 3);
        if ((param_5 & 0x40) != 0) {
          temp_v20 = (float)VectorSignedToFloat((int)*(char *)(temp_v4 + 6),(unsigned char)(temp_v12 >> 0x16) & 3);
          temp_v19 = (float)VectorSignedToFloat((int)*(char *)(*(int *)(param_1[5] + 4) + 6),
                                              (unsigned char)(temp_v12 >> 0x16) & 3);
          VectorSignedToFloat((int)((temp_v19 - temp_v20) * temp_v16),(unsigned char)(temp_v12 >> 0x16) & 3);
        }
        if ((((param_5 & 8) != 0) && (temp_v5 == 0x8140)) ||
           ((DAT_00464d68 != 0 && (DAT_00464d68 == temp_v5)))) {
          temp_v19 = (float)VectorSignedToFloat((int)(temp_v19 * temp_v16),(unsigned char)(temp_v12 >> 0x16) & 3);
        }
        if (temp_v11 != 0) {
          temp_v0 = *(unsigned char *)(param_1[5] + 0x24);
          VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v4 + 5),(unsigned char)(temp_v12 >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v4 + 7),(unsigned char)(temp_v12 >> 0x16) & 3);
          temp_v17 = *(unsigned int *)
                    (*(int *)(param_1[5] + 0xc) + *(int *)(*param_1 + temp_v8 * 0x20 + 0x1c) * 4);
          if (uStack_13c != 0) {
            FUN_002aa200(DAT_0044ea00,temp_v17,temp_v0);
            if (uStack_13c == 2) {
              temp_v23 = temp_v23 & 0xffffffff00000000;
              FUN_002aa100(piVar8,temp_v4,temp_v13,temp_v13,temp_v13,temp_v13);
              FUN_002aa100(piVar8,temp_v4,temp_v13,temp_v13,temp_v13,temp_v13);
            }
            FUN_002aa100(piVar8,temp_v4,uStack_1b0,uStack_1b0,uStack_1b0,uStack_1b0);
            FUN_002aa100(piVar8,temp_v4,uStack_1b0,uStack_1b0,uStack_1b0,uStack_1b0);
            FUN_002aa100(piVar8,temp_v4,uStack_1b0,uStack_1b0,uStack_1b0,uStack_1b0);
            FUN_002aa100(piVar8,temp_v4,uStack_1b0,uStack_1b0,uStack_1b0,uStack_1b0);
            FUN_002aa100(piVar8,temp_v4,uStack_1ac,uStack_1ac,uStack_1ac,uStack_1ac);
          }
          else {
            FUN_002aa200(DAT_0044ea00,temp_v17,temp_v0);
            if ((param_5 & 0x80) != 0) {
              FUN_002aa100(piVar8,temp_v4,uStack_b0,(temp_v18 & 0xff) | temp_v7,uStack_90,uStack_ac);
            }
            else {
              FUN_002aa100(piVar8,temp_v4,uStack_1ac,uStack_1ac,uStack_1ac,uStack_1ac);
            }
          }
        }
        temp_v22 = (unsigned long long)(unsigned int)((float)param_1[6] + temp_v21 + temp_v19);
      }
      goto LAB_002b1390;
    }
  }
  return;
LAB_002b0dac:
  do {
    while( 1 ) {
      temp_v4 = temp_v4 + 1;
      temp_v9 = temp_v8 + temp_v4;
      temp_v1 = *(short *)(*param_1 + temp_v9 * 0x20);
      temp_v6 = FUN_002ae424(temp_v1);
      if (temp_v6 != 0) break;
      temp_v20 = (float)VectorSignedToFloat((int)*(char *)(temp_v9 * 0x20 + *param_1 + 10),
                                          (unsigned char)(temp_v12 >> 0x16) & 3);
      if (((param_5 & 8) != 0) && (temp_v5 == 0x8140)) {
        temp_v20 = (float)VectorSignedToFloat((int)(temp_v20 * temp_v16),(unsigned char)(temp_v12 >> 0x16) & 3);
      }
      aiStack_130[temp_v10] = temp_v9;
      temp_v10 = temp_v10 + 1;
      temp_v21 = (float)param_1[0x2a] + temp_v21 + temp_v20;
    }
  } while (temp_v1 != -0x7e8);
  temp_v4 = 0;
  if (temp_v11 != 0) {
    temp_v4 = iStack_9c;
  }
  if (temp_v11 != 0 && temp_v4 != 0) {
    temp_v4 = 0;
    VectorSignedToFloat((int)(((float)temp_v22 + temp_v19 * temp_v16) - temp_v21 * temp_v16),
                        (unsigned char)(temp_v12 >> 0x16) & 3);
    if (0 < temp_v10) {
      do {
        temp_v6 = *param_1 + aiStack_130[temp_v4] * 0x20 + 4;
        temp_v21 = (float)VectorSignedToFloat((int)*(char *)(temp_v6 + 6),(unsigned char)(temp_v12 >> 0x16) & 3);
        if (((param_5 & 8) != 0) && (temp_v5 == 0x8140)) {
          VectorSignedToFloat((int)(temp_v21 * temp_v16),(unsigned char)(temp_v12 >> 0x16) & 3);
        }
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v6 + 5),(unsigned char)(temp_v12 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v6 + 7),(unsigned char)(temp_v12 >> 0x16) & 3);
        FUN_002aa200(DAT_0044ea00,
                     *(unsigned int *)
                      (*(int *)(param_1[0x29] + 0xc) +
                      *(int *)(*param_1 + aiStack_130[temp_v4] * 0x20 + 0x1c) * 4),
                     *(unsigned char *)(param_1[0x29] + 0x24),(unsigned int)*(unsigned char *)(temp_v6 + 7));
        FUN_002aa100(iStack_9c,temp_v6,temp_v15,temp_v15,temp_v15,temp_v15);
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < temp_v10);
    }
  }
LAB_002b1390:
  temp_v8 = temp_v8 + 1;
  if (param_1[3] + param_1[4] <= temp_v8) {
    return;
  }
  goto LAB_002b0a30;
}

} /* extern "C" */
