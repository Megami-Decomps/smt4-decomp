/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00202188` (_code @ 0x202188, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_5_stack;

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */
extern signed char DAT_005b3d54; /* 0x5b3d54 */
extern float DAT_005b3d58; /* 0x5b3d58 */
extern int DAT_005b3d64; /* 0x5b3d64 */
extern romwright_code *DAT_005b3d74; /* 0x5b3d74 */
extern unsigned int DAT_005b3d78; /* 0x5b3d78 */
extern int DAT_005b3d88; /* 0x5b3d88 */
extern unsigned int DAT_0063af88; /* 0x63af88 */
extern unsigned int DAT_0063af8c; /* 0x63af8c */
extern unsigned int DAT_0063af90; /* 0x63af90 */
extern unsigned int DAT_0063af94; /* 0x63af94 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_0019aee4. */
/* Supplied declaration required: FUN_0019be8c. */
/* Supplied declaration required: FUN_0019dc70. */
extern unsigned int FUN_0019e120(unsigned short);
extern unsigned int FUN_0019ea4c(unsigned short);
extern unsigned int FUN_0019eaa0(unsigned short);
/* Supplied declaration required: FUN_0019f764. */


/* WARNING: Removing unreachable block (ram,0x00180fe0) */

void FUN_00202188(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 3 goto(s); irregular input(s): in_d11, in_d15, in_fpscr, in_s0; 13 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  char temp_v3;
  unsigned long long temp_v4;
  unsigned char temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar9;
  int temp_v8;
  int temp_v9;
  int unaff_r7;
  int temp_v10;
  unsigned char temp_v11;
  unsigned int temp_v12;
  unsigned int in_fpscr;
  unsigned int temp_v13;
  unsigned int temp_v14;
  float in_s0;
  float temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  long long temp_v23;
  unsigned long long in_d11;
  unsigned long long temp_v24;
  unsigned long long temp_v25;
  unsigned long long temp_v26;
  unsigned long long in_d15;
  unsigned int uStack_1a0;
  unsigned int uStack_158;
  unsigned char uStack_14c;
  unsigned int uStack_13c;
  int aiStack_138 [36];
  int iStack_a8;
  unsigned int uStack_a4;
  int iStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  int iStack_88;
  unsigned long long uStack_40;
  unsigned long long uStack_38;
  int *piStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  temp_v17 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v15 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  uStack_28 = param_5;
  uStack_40 = CONCAT44(temp_v17,temp_v15);
  uStack_38 = CONCAT44(in_s0,DAT_005b3d58);
  temp_v21 = 0.0f;
  uStack_a4 = 0;
  temp_v25 = 0;
  iStack_a0 = 0;
  piStack_30 = param_1;
  uStack_2c = param_4;
  if (DAT_005b3d54 != '\0') {
    temp_v18 = DAT_005b3d58;
    FUN_001879d0(DAT_0059dbb4);
    temp_v15 = temp_v18 + temp_v15;
  }
  temp_v24 = (unsigned long long)(unsigned int)temp_v15;
  temp_v6 = param_1[5];
  if (temp_v6 != 0) {
    unaff_r7 = param_1[4];
  }
  if (temp_v6 != 0 && unaff_r7 != 0) {
    iStack_a8 = 0;
    piVar9 = *(int **)(temp_v6 + 8);
    temp_v26 = in_d15 & 0xffffffff;
    if (param_1[0x29] != 0) {
      iStack_a8 = *(int *)(param_1[0x29] + 8);
    }
    temp_v12 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == temp_v21) << 0x1e);
    if (romwright_subpiece_4_1_0(temp_v12 >> 0x1e,0)) {
      uStack_14c = 0;
    }
    else if (in_s0 == 1.0f) {
      uStack_14c = 0xff;
    }
    else {
      uStack_14c = VectorFloatToUnsigned(in_s0 * 255.0f,3);
    }
    temp_v22 = CONCAT44(in_s0,temp_v15);
    temp_v19 = (float)VectorUnsignedToFloat(DAT_0063af88 & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v18 = (float)VectorUnsignedToFloat(DAT_0063af8c & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v20 = (float)VectorUnsignedToFloat(DAT_0063af90 & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v15 = (float)VectorUnsignedToFloat(DAT_0063af94 & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    uStack_1a0 = VectorFloatToUnsigned(temp_v19 * in_s0,3);
    temp_v13 = VectorFloatToUnsigned(temp_v18 * in_s0,3);
    temp_v14 = VectorFloatToUnsigned(temp_v20 * in_s0,3);
    temp_v16 = VectorFloatToUnsigned(temp_v15 * in_s0,3);
    uStack_1a0 = uStack_1a0 & 0xff;
    uStack_98 = (DAT_0063af88 & 0xffffff00) | uStack_1a0;
    uStack_9c = (temp_v13 & 0xff) | (DAT_0063af8c & 0xffffff00);
    uStack_90 = (temp_v14 & 0xff) | (DAT_0063af90 & 0xffffff00);
    uStack_94 = (DAT_0063af94 & 0xffffff00) | (temp_v16 & 0xff);
    temp_v6 = param_1[0x2c];
    temp_v4 = in_d11 >> 0x20;
    if (temp_v6 == 0) {
      uStack_13c = param_1[0xe];
    }
    else {
      uStack_13c = *(unsigned int *)(DAT_005b3d88 + temp_v6 * 4);
    }
    uStack_13c = uStack_13c | uStack_14c;
    temp_v11 = DAT_005b3d64 != 0;
    temp_v13 = uStack_13c;
    if (temp_v11) {
      temp_v13 = DAT_005b3d64 + temp_v6 * 8;
    }
    if (temp_v11) {
      uStack_1a0 = *(unsigned int *)(temp_v13 + 4);
    }
    temp_v8 = param_1[3];
    uStack_8c = (unsigned int)((short)(uStack_14c << 3) * 0x667) >> 0xe;
    uStack_158 = (unsigned int)*(unsigned char *)(DAT_005b3d64 + temp_v6 * 8);
    if (!temp_v11) {
      uStack_1a0 = 0;
    }
    temp_v6 = temp_v8 + unaff_r7;
    uStack_1a0 = uStack_1a0 | uStack_8c;
    temp_v13 = param_1[0x28] | uStack_14c;
    if (temp_v8 < temp_v6) {
      temp_v26 = (unsigned long long)(unsigned int)temp_v21;
    }
    temp_v14 = (unsigned int)((short)(uStack_14c << 2) * 0xcd) >> 0xb;
    if (temp_v8 < temp_v6) {
      temp_v4 = 0x3f000000;
    }
    temp_v23 = temp_v4 << 0x20;
    if (temp_v8 < temp_v6) {
LAB_00180bc0:
      iStack_88 = 1;
      temp_v16 = (unsigned int)*(unsigned short *)(*param_1 + temp_v8 * 0x20);
      temp_v11 = (param_4 & 0x10) == 0;
      if (((param_4 & 2) != 0) && (uStack_a4 != uStack_28)) {
        temp_v11 = 0;
        iStack_88 = 0;
      }
      temp_v6 = FUN_0019be8c(temp_v16);
      temp_v19 = (float)(temp_v25 >> 0x20);
      temp_v18 = (float)temp_v24;
      temp_v15 = (float)temp_v22;
      temp_v21 = (float)((unsigned long long)temp_v23 >> 0x20);
      if (temp_v6 != 0) {
        temp_v20 = (float)temp_v26;
        if (temp_v16 == 0xf816) {
          temp_v10 = 0;
          temp_v6 = 0;
          iStack_a0 = 1;
          temp_v15 = temp_v20;
          do {
            temp_v1 = *(short *)(*param_1 + (temp_v8 + temp_v6) * 0x20);
            temp_v7 = FUN_0019be8c(temp_v1);
            if (temp_v7 != 0) {
              if (temp_v1 == -0x7e9) goto LAB_00180f28;
            }
            else {
              temp_v21 = (float)VectorSignedToFloat((int)*(char *)((temp_v8 + temp_v6) * 0x20 + *param_1
                                                                + 10),(unsigned char)(temp_v12 >> 0x16) & 3);
              temp_v20 = (float)param_1[6] + temp_v20 + temp_v21;
            }
            temp_v6 = temp_v6 + 1;
          } while( 1 );
        }
        if (temp_v16 < 0xf816) {
          if (temp_v16 != 0xf812) {
            if (temp_v16 < 0xf812) {
              if (temp_v16 != 0xf801) {
                if (temp_v16 == 0xf802) {
                  return;
                }
                if (temp_v16 == 0xf804) {
                  temp_v8 = temp_v8 + 1;
                  temp_v16 = (unsigned int)*(unsigned short *)(*param_1 + temp_v8 * 0x20);
                  if ((param_4 & 0x20) == 0) {
                    if (temp_v16 != 0) {
                      uStack_13c = *(unsigned int *)(DAT_005b3d88 + temp_v16 * 4);
                    }
                    else {
                      uStack_13c = param_1[0xe];
                    }
                    uStack_13c = uStack_13c | uStack_14c;
                    uStack_1a0 = 0;
                    if (DAT_005b3d64 != 0) {
                      uStack_1a0 = *(unsigned int *)(DAT_005b3d64 + temp_v16 * 8 + 4);
                    }
                    uStack_1a0 = uStack_1a0 | uStack_8c;
                  }
                  if (DAT_005b3d64 != 0) {
                    uStack_158 = (unsigned int)*(unsigned char *)(DAT_005b3d64 + temp_v16 * 8);
                  }
                  else {
                    uStack_158 = 0;
                  }
                }
                else {
                  FUN_0019dc70();
                  temp_v8 = temp_v8 + temp_v16;
                }
              }
              else {
                if (iStack_88 != 0) {
                  temp_v15 = temp_v15 - temp_v18;
                  temp_v16 = (temp_v12 & 0xfffffff) | ((unsigned int)(temp_v15 < temp_v19) << 0x1f) |
                           ((unsigned int)(temp_v15 == temp_v19) << 0x1e);
                  temp_v12 = temp_v16 | ((unsigned int)(NAN(temp_v15) || NAN(temp_v19)) << 0x1c);
                  temp_v5 = (unsigned char)(temp_v16 >> 0x18);
                  if (!(unsigned char)((temp_v5 >> 6) & 1) && temp_v5 >> 7 == ((unsigned char)(temp_v12 >> 0x1c) & 1)) {
                    temp_v25 = (unsigned long long)(unsigned int)temp_v15 << 0x20;
                  }
                }
                temp_v22 = temp_v24 & 0xffffffff;
                if ((param_4 & 4) == 0) {
                  temp_v17 = (**(romwright_code **)(*piVar9 + 0x24))(piVar9);
                  VectorSignedToFloat(temp_v17,(unsigned char)(temp_v12 >> 0x16) & 3);
                  temp_v23 = (unsigned long long)(unsigned int)temp_v21 << 0x20;
                }
                uStack_a4 = uStack_a4 + 1;
              }
            }
            else if (temp_v16 == 0xf813) {
              temp_v8 = temp_v8 + 3;
              temp_v8 = temp_v8 + 1;
            }
            else if ((temp_v16 == 0xf814) && (DAT_005b3d74 != (romwright_code *)0x0)) {
              temp_v6 = temp_v8 + 1;
              temp_v8 = temp_v8 + 2;
              temp_v17 = (*DAT_005b3d74)(*(unsigned short *)(*param_1 + temp_v6 * 0x20),
                                       *(unsigned short *)(*param_1 + temp_v8 * 0x20),temp_v11 ^ 1);
              temp_v21 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(temp_v12 >> 0x16) & 3);
              temp_v22 = (unsigned long long)(unsigned int)((float)param_1[6] + temp_v15 + temp_v21);
            }
            else {
              FUN_0019dc70();
              temp_v8 = temp_v8 + temp_v16;
            }
          }
          else {
            *(unsigned short *)(param_1 + 0x12) = 0;
            *(short *)((int)param_1 + 0x46) = (short)temp_v8 + 1;
            *(unsigned char *)(param_1 + 0x17) = 0;
            while( 1 ) {
              temp_v8 = temp_v8 + 1;
              temp_v1 = *(short *)(*param_1 + temp_v8 * 0x20);
              *(char *)((int)param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x12) * 2 + 0x5c) =
                   (char)((unsigned short)temp_v1 >> 8);
              *(char *)((int)param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x12) * 2 + 0x5d) = (char)temp_v1;
              if (temp_v1 == 0) break;
              *(short *)(param_1 + 0x12) = (short)param_1[0x12] + 1;
              temp_v15 = (float)VectorSignedToFloat((int)*(char *)(*param_1 + temp_v8 * 0x20 + 10),
                                                  (unsigned char)(temp_v12 >> 0x16) & 3);
              temp_v20 = (float)param_1[0x16] + temp_v15 + temp_v20;
            }
            param_1[0x13] = (int)temp_v20;
          }
        }
        else {
          switch(temp_v16) {
          default:
            FUN_0019dc70();
            temp_v8 = temp_v8 + temp_v16;
            break;
          case 0xf817:
            iStack_a0 = 2;
            break;
          case 0xf818:
            iStack_a0 = 0;
            break;
          case 0xf819:
            temp_v8 = temp_v8 + 1;
            temp_v2 = *(unsigned short *)(*param_1 + temp_v8 * 0x20);
            if ((param_4 & 0x20) == 0) {
              uStack_13c = FUN_0019e120(temp_v2);
              uStack_13c = uStack_13c | uStack_14c;
              uStack_1a0 = FUN_0019eaa0(temp_v2);
              uStack_1a0 = uStack_1a0 | uStack_8c;
            }
            uStack_158 = FUN_0019ea4c(temp_v2);
            break;
          case 0xf81a:
            temp_v8 = temp_v8 + 1;
            uStack_a4 = (unsigned int)*(unsigned short *)(*param_1 + temp_v8 * 0x20);
            if (iStack_88 != 0) {
              temp_v15 = temp_v15 - temp_v18;
              temp_v16 = (temp_v12 & 0xfffffff) | ((unsigned int)(temp_v15 < temp_v19) << 0x1f) |
                       ((unsigned int)(temp_v15 == temp_v19) << 0x1e);
              temp_v12 = temp_v16 | ((unsigned int)(NAN(temp_v15) || NAN(temp_v19)) << 0x1c);
              temp_v5 = (unsigned char)(temp_v16 >> 0x18);
              if (!(unsigned char)((temp_v5 >> 6) & 1) && temp_v5 >> 7 == ((unsigned char)(temp_v12 >> 0x1c) & 1)) {
                temp_v25 = (unsigned long long)(unsigned int)temp_v15 << 0x20;
              }
            }
            temp_v22 = temp_v24 & 0xffffffff;
            if ((param_4 & 4) == 0) {
              temp_v17 = (**(romwright_code **)(*piVar9 + 0x24))(piVar9);
              VectorSignedToFloat(uStack_a4,(unsigned char)(temp_v12 >> 0x16) & 3);
              VectorSignedToFloat(temp_v17,(unsigned char)(temp_v12 >> 0x16) & 3);
              temp_v23 = (unsigned long long)(unsigned int)temp_v21 << 0x20;
            }
            break;
          case 0xf81b:
            temp_v8 = temp_v8 + 5;
            temp_v8 = temp_v8 + 1;
          }
        }
      }
      else if (iStack_a0 != 2) {
        temp_v6 = *param_1 + temp_v8 * 0x20 + 4;
        temp_v19 = (float)VectorSignedToFloat((int)*(char *)(temp_v6 + 6),(unsigned char)(temp_v12 >> 0x16) & 3);
        if ((param_4 & 0x40) != 0) {
          temp_v20 = (float)VectorSignedToFloat((int)*(char *)(temp_v6 + 6),(unsigned char)(temp_v12 >> 0x16) & 3);
          temp_v19 = (float)VectorSignedToFloat((int)*(char *)(*(int *)(param_1[5] + 4) + 6),
                                              (unsigned char)(temp_v12 >> 0x16) & 3);
          VectorSignedToFloat((int)((temp_v19 - temp_v20) * temp_v21),(unsigned char)(temp_v12 >> 0x16) & 3);
        }
        if ((((param_4 & 8) != 0) && (temp_v16 == 0x8140)) ||
           ((DAT_005b3d78 != 0 && (DAT_005b3d78 == temp_v16)))) {
          temp_v19 = (float)VectorSignedToFloat((int)(temp_v19 * temp_v21),(unsigned char)(temp_v12 >> 0x16) & 3);
        }
        if (temp_v11 != 0) {
          temp_v0 = *(unsigned char *)(param_1[5] + 0x24);
          VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v6 + 5),(unsigned char)(temp_v12 >> 0x16) & 3);
          VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v6 + 7),(unsigned char)(temp_v12 >> 0x16) & 3);
          temp_v17 = *(unsigned int *)
                    (*(int *)(param_1[5] + 0xc) + *(int *)(*param_1 + temp_v8 * 0x20 + 0x1c) * 4);
          if (uStack_158 != 0) {
            FUN_0019f764(DAT_0059dbb4,temp_v17,temp_v0);
            if (uStack_158 == 2) {
              temp_v25 = temp_v25 & 0xffffffff00000000;
              FUN_0019aee4(piVar9,temp_v6,temp_v14,temp_v14,temp_v14,temp_v14);
              FUN_0019aee4(piVar9,temp_v6,temp_v14,temp_v14,temp_v14,temp_v14);
            }
            temp_v24 = (unsigned long long)(unsigned int)temp_v18;
            FUN_0019aee4(piVar9,temp_v6,uStack_1a0,uStack_1a0,uStack_1a0,uStack_1a0);
            FUN_0019aee4(piVar9,temp_v6,uStack_1a0,uStack_1a0,uStack_1a0,uStack_1a0);
            FUN_0019aee4(piVar9,temp_v6,uStack_1a0,uStack_1a0,uStack_1a0,uStack_1a0);
            FUN_0019aee4(piVar9,temp_v6,uStack_1a0,uStack_1a0,uStack_1a0,uStack_1a0);
            FUN_0019aee4(piVar9,temp_v6,uStack_13c,uStack_13c,uStack_13c,uStack_13c);
            temp_v23 = (unsigned long long)(unsigned int)temp_v21 << 0x20;
          }
          else {
            FUN_0019f764(DAT_0059dbb4,temp_v17,temp_v0);
            if ((param_4 & 0x80) != 0) {
              FUN_0019aee4(piVar9,temp_v6,uStack_98,uStack_9c,uStack_90,uStack_94);
            }
            else {
              FUN_0019aee4(piVar9,temp_v6,uStack_13c,uStack_13c,uStack_13c,uStack_13c);
            }
          }
        }
        temp_v22 = (unsigned long long)(unsigned int)((float)param_1[6] + temp_v15 + temp_v19);
      }
      goto LAB_001814dc;
    }
  }
  return;
LAB_00180f28:
  do {
    while( 1 ) {
      temp_v6 = temp_v6 + 1;
      temp_v9 = temp_v8 + temp_v6;
      temp_v1 = *(short *)(*param_1 + temp_v9 * 0x20);
      temp_v7 = FUN_0019be8c(temp_v1);
      if (temp_v7 != 0) break;
      temp_v3 = *(char *)(temp_v9 * 0x20 + *param_1 + 10);
      aiStack_138[temp_v10] = temp_v9;
      temp_v10 = temp_v10 + 1;
      temp_v21 = (float)VectorSignedToFloat((int)temp_v3,(unsigned char)(temp_v12 >> 0x16) & 3);
      temp_v15 = (float)param_1[0x2a] + temp_v15 + temp_v21;
    }
  } while (temp_v1 != -0x7e8);
  temp_v6 = 0;
  if (temp_v11 != 0) {
    temp_v6 = iStack_a8;
  }
  if (temp_v11 != 0 && temp_v6 != 0) {
    temp_v6 = 0;
    temp_v21 = (float)((unsigned long long)temp_v23 >> 0x20);
    VectorSignedToFloat((int)(((float)temp_v22 + temp_v20 * temp_v21) - temp_v15 * temp_v21),
                        (unsigned char)(temp_v12 >> 0x16) & 3);
    if (0 < temp_v10) {
      temp_v24 = temp_v24 & 0xffffffff;
      do {
        temp_v7 = *param_1 + aiStack_138[temp_v6] * 0x20 + 4;
        VectorSignedToFloat((int)*(char *)(temp_v7 + 6),(unsigned char)(temp_v12 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v7 + 5),(unsigned char)(temp_v12 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v7 + 7),(unsigned char)(temp_v12 >> 0x16) & 3);
        FUN_0019f764(DAT_0059dbb4,
                     *(unsigned int *)
                      (*(int *)(param_1[0x29] + 0xc) +
                      *(int *)(*param_1 + aiStack_138[temp_v6] * 0x20 + 0x1c) * 4),
                     *(unsigned char *)(param_1[0x29] + 0x24));
        FUN_0019aee4(iStack_a8,temp_v7,temp_v13,temp_v13,temp_v13,temp_v13);
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < temp_v10);
    }
  }
LAB_001814dc:
  temp_v8 = temp_v8 + 1;
  if (param_1[3] + param_1[4] <= temp_v8) {
    return;
  }
  goto LAB_00180bc0;
}
