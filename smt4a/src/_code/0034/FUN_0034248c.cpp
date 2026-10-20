/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034248c` (_code @ 0x34248c, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_001527d8(unsigned int, unsigned int);
int FUN_00164b5c(int, int, int, int);
int FUN_00183bb0(void);
int FUN_00184e64(unsigned int);
int FUN_001879d0(...);
int FUN_0019aee4(...);
int FUN_0019be8c(...);
int FUN_0019dc70(void);
int FUN_0019f764(...);
int FUN_002e1b64(unsigned int, int, int, int);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
extern unsigned int g_renderCtx; /* 0x59dbb4 */
extern signed char DAT_005b3d54; /* 0x5b3d54 */
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
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_00164b5c. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184e64. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_0019aee4. */
/* Supplied declaration required: FUN_0019be8c. */
/* Supplied declaration required: FUN_0019dc70. */
extern unsigned int FUN_0019e120(unsigned short);
extern unsigned int FUN_0019ea4c(unsigned short);
extern unsigned int FUN_0019eaa0(unsigned short);
/* Supplied declaration required: FUN_0019f764. */
/* Supplied declaration required: FUN_002e1b64. */


/* WARNING: Removing unreachable block (ram,0x001811fc) */
/* WARNING: Removing unreachable block (ram,0x001811c8) */
/* WARNING: Removing unreachable block (ram,0x00180be4) */
/* WARNING: Removing unreachable block (ram,0x00180be0) */
/* WARNING: Removing unreachable block (ram,0x00180bf0) */
/* WARNING: Removing unreachable block (ram,0x00180c00) */
/* WARNING: Removing unreachable block (ram,0x00181450) */
/* WARNING: Removing unreachable block (ram,0x00180fd0) */
/* WARNING: Removing unreachable block (ram,0x00180fe0) */

void FUN_0034248c(int param_1,int param_2,float *param_3,int param_4,int param_5)

{
/* irregular: 3 goto(s); irregular input(s): in_d11, in_d15, in_fpscr; 24 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  char temp_v2;
  short temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar9;
  int *piVar10;
  int temp_v8;
  int unaff_r7;
  int temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11;
  unsigned int in_fpscr;
  unsigned int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  long long temp_v23;
  unsigned long long in_d11;
  unsigned long long temp_v24;
  unsigned long long temp_v25;
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
  int iStack_28;
  unsigned int uStack_24;
  
  if (param_1 == 0) {
    return;
  }
  if ((param_2 == 0) || (*(short *)(param_2 + 0x34) != 0)) {
    iStack_28 = (int)param_3[2] + param_5;
    uStack_24 = 0x65;
    if (*(char *)(param_2 + 0x21) != '\0') {
      FUN_00164b5c(2,0x2e,0x19,(int)param_3[1] + param_4);
    }
    else {
      FUN_00164b5c(2,0x2e,0x18,(int)param_3[1] + param_4);
    }
  }
  else {
    iStack_28 = (int)param_3[2] + param_5;
    uStack_24 = 0x65;
    FUN_00164b5c(2,0x2e,0x25,(int)param_3[1] + param_4);
  }
  FUN_00184e64(0x82fff500);
  temp_v6 = FUN_001834a4(0x2e,0x53);
  FUN_002e1b64(*(unsigned int *)(param_2 + 0x30),
               (int)param_3[1] + (int)*(short *)(temp_v6 + 8) + param_4,
               (int)*(short *)(temp_v6 + 10) + (int)param_3[2] + param_5,0x65);
  FUN_00183bb0();
  iStack_28 = (int)param_3[2] + param_5;
  uStack_24 = 0x65;
  FUN_00164b5c(2,0x2e,0xe,(int)param_3[1] + param_4);
  temp_v6 = FUN_001834a4(0x2e,0x9e);
  temp_v7 = *(int *)(param_1 + 0x14);
  temp_v3 = **(short **)(temp_v6 + 0xc);
  FUN_001527d8(*(unsigned int *)(param_1 + 0x10),0xffffff00);
  piVar9 = *(int **)(param_1 + 0x10);
  temp_v15 = *param_3;
  temp_v17 = (float)VectorSignedToFloat(0x9a,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v17 = temp_v17 * 0.00390625f;
  temp_v18 = VectorSignedToFloat((int)param_3[2] + (int)*(short *)(temp_v6 + 10) + param_5,
                               (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v6 + 8) + (int)param_3[1] +
                                      param_4 + (temp_v3 - temp_v7) / 2 + 6,(unsigned char)(in_fpscr >> 0x16) & 3
                                     );
  iStack_28 = 0xffffffff;
  uStack_2c = 0;
  uStack_40 = CONCAT44(temp_v18,temp_v14);
  uStack_38 = CONCAT44(temp_v15,temp_v17);
  temp_v21 = 0.0f;
  uStack_a4 = 0;
  temp_v25 = 0;
  iStack_a0 = 0;
  piStack_30 = piVar9;
  if (DAT_005b3d54 != '\0') {
    FUN_001879d0(g_renderCtx);
    temp_v14 = temp_v17 + temp_v14;
  }
  temp_v24 = (unsigned long long)(unsigned int)temp_v14;
  temp_v6 = piVar9[5];
  if (temp_v6 != 0) {
    unaff_r7 = piVar9[4];
  }
  if (temp_v6 != 0 && unaff_r7 != 0) {
    iStack_a8 = 0;
    piVar10 = *(int **)(temp_v6 + 8);
    in_d15 = in_d15 & 0xffffffff;
    if (piVar9[0x29] != 0) {
      iStack_a8 = *(int *)(piVar9[0x29] + 8);
    }
    temp_v11 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v15 == temp_v21) << 0x1e);
    if (romwright_subpiece_4_1_0(temp_v11 >> 0x1e,0)) {
      uStack_14c = 0;
    }
    else if (temp_v15 == 1.0f) {
      uStack_14c = 0xff;
    }
    else {
      uStack_14c = VectorFloatToUnsigned(temp_v15 * 255.0f,3);
    }
    temp_v22 = CONCAT44(temp_v15,temp_v14);
    temp_v19 = (float)VectorUnsignedToFloat(DAT_0063af88 & 0xff,(unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v17 = (float)VectorUnsignedToFloat(DAT_0063af8c & 0xff,(unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v20 = (float)VectorUnsignedToFloat(DAT_0063af90 & 0xff,(unsigned char)(temp_v11 >> 0x16) & 3);
    temp_v14 = (float)VectorUnsignedToFloat(DAT_0063af94 & 0xff,(unsigned char)(temp_v11 >> 0x16) & 3);
    uStack_1a0 = VectorFloatToUnsigned(temp_v19 * temp_v15,3);
    temp_v12 = VectorFloatToUnsigned(temp_v17 * temp_v15,3);
    temp_v13 = VectorFloatToUnsigned(temp_v20 * temp_v15,3);
    temp_v16 = VectorFloatToUnsigned(temp_v14 * temp_v15,3);
    uStack_1a0 = uStack_1a0 & 0xff;
    uStack_98 = (DAT_0063af88 & 0xffffff00) | uStack_1a0;
    uStack_9c = (temp_v12 & 0xff) | (DAT_0063af8c & 0xffffff00);
    uStack_90 = (temp_v13 & 0xff) | (DAT_0063af90 & 0xffffff00);
    uStack_94 = (DAT_0063af94 & 0xffffff00) | (temp_v16 & 0xff);
    temp_v6 = piVar9[0x2c];
    in_d11 = in_d11 >> 0x20;
    if (temp_v6 == 0) {
      uStack_13c = piVar9[0xe];
    }
    else {
      uStack_13c = *(unsigned int *)(DAT_005b3d88 + temp_v6 * 4);
    }
    uStack_13c = uStack_13c | uStack_14c;
    temp_v10 = DAT_005b3d64 != 0;
    temp_v12 = uStack_13c;
    if (temp_v10) {
      temp_v12 = DAT_005b3d64 + temp_v6 * 8;
    }
    if (temp_v10) {
      uStack_1a0 = *(unsigned int *)(temp_v12 + 4);
    }
    temp_v7 = piVar9[3];
    uStack_8c = (unsigned int)((short)(uStack_14c << 3) * 0x667) >> 0xe;
    uStack_158 = (unsigned int)*(unsigned char *)(DAT_005b3d64 + temp_v6 * 8);
    if (!temp_v10) {
      uStack_1a0 = 0;
    }
    temp_v6 = temp_v7 + unaff_r7;
    uStack_1a0 = uStack_1a0 | uStack_8c;
    temp_v12 = piVar9[0x28] | uStack_14c;
    if (temp_v7 < temp_v6) {
      in_d15 = (unsigned long long)(unsigned int)temp_v21;
    }
    temp_v13 = (unsigned int)((short)(uStack_14c << 2) * 0xcd) >> 0xb;
    if (temp_v7 < temp_v6) {
      in_d11 = 0x3f000000;
    }
    temp_v23 = in_d11 << 0x20;
    if (temp_v7 < temp_v6) {
LAB_00180bc0:
      iStack_88 = 1;
      temp_v16 = (unsigned int)*(unsigned short *)(*piVar9 + temp_v7 * 0x20);
      temp_v6 = FUN_0019be8c(temp_v16);
      temp_v21 = (float)(temp_v25 >> 0x20);
      temp_v15 = (float)temp_v24;
      temp_v14 = (float)temp_v22;
      temp_v17 = (float)((unsigned long long)temp_v23 >> 0x20);
      if (temp_v6 != 0) {
        temp_v19 = (float)in_d15;
        if (temp_v16 == 0xf816) {
          temp_v9 = 0;
          temp_v6 = 0;
          iStack_a0 = 1;
          temp_v14 = temp_v19;
          do {
            temp_v3 = *(short *)(*piVar9 + (temp_v7 + temp_v6) * 0x20);
            temp_v5 = FUN_0019be8c(temp_v3);
            if (temp_v5 != 0) {
              if (temp_v3 == -0x7e9) goto LAB_00180f28;
            }
            else {
              temp_v17 = (float)VectorSignedToFloat((int)*(char *)((temp_v7 + temp_v6) * 0x20 + *piVar9 +
                                                                10),(unsigned char)(temp_v11 >> 0x16) & 3);
              temp_v19 = (float)piVar9[6] + temp_v19 + temp_v17;
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
                  temp_v7 = temp_v7 + 1;
                  temp_v16 = (unsigned int)*(unsigned short *)(*piVar9 + temp_v7 * 0x20);
                  if (temp_v16 != 0) {
                    uStack_13c = *(unsigned int *)(DAT_005b3d88 + temp_v16 * 4);
                  }
                  else {
                    uStack_13c = piVar9[0xe];
                  }
                  uStack_13c = uStack_13c | uStack_14c;
                  uStack_1a0 = 0;
                  if (DAT_005b3d64 != 0) {
                    uStack_1a0 = *(unsigned int *)(DAT_005b3d64 + temp_v16 * 8 + 4);
                  }
                  uStack_1a0 = uStack_1a0 | uStack_8c;
                  if (DAT_005b3d64 != 0) {
                    uStack_158 = (unsigned int)*(unsigned char *)(DAT_005b3d64 + temp_v16 * 8);
                  }
                  else {
                    uStack_158 = 0;
                  }
                }
                else {
                  FUN_0019dc70();
                  temp_v7 = temp_v7 + temp_v16;
                }
              }
              else {
                if (iStack_88 != 0) {
                  temp_v14 = temp_v14 - temp_v15;
                  temp_v16 = (temp_v11 & 0xfffffff) | ((unsigned int)(temp_v14 < temp_v21) << 0x1f) |
                           ((unsigned int)(temp_v14 == temp_v21) << 0x1e);
                  temp_v11 = temp_v16 | ((unsigned int)((temp_v14 != temp_v14) || (temp_v21 != temp_v21)) << 0x1c);
                  temp_v4 = (unsigned char)(temp_v16 >> 0x18);
                  if (!(unsigned char)((temp_v4 >> 6) & 1) && temp_v4 >> 7 == ((unsigned char)(temp_v11 >> 0x1c) & 1)) {
                    temp_v25 = (unsigned long long)(unsigned int)temp_v14 << 0x20;
                  }
                }
                temp_v22 = temp_v24 & 0xffffffff;
                temp_v18 = (**(romwright_code **)(*piVar10 + 0x24))(piVar10);
                VectorSignedToFloat(temp_v18,(unsigned char)(temp_v11 >> 0x16) & 3);
                temp_v23 = (unsigned long long)(unsigned int)temp_v17 << 0x20;
                uStack_a4 = uStack_a4 + 1;
              }
            }
            else if (temp_v16 == 0xf813) {
              temp_v7 = temp_v7 + 3;
              temp_v7 = temp_v7 + 1;
            }
            else if ((temp_v16 == 0xf814) && (DAT_005b3d74 != (romwright_code *)0x0)) {
              temp_v6 = temp_v7 + 1;
              temp_v7 = temp_v7 + 2;
              temp_v18 = (*DAT_005b3d74)(*(unsigned short *)(*piVar9 + temp_v6 * 0x20),
                                       *(unsigned short *)(*piVar9 + temp_v7 * 0x20),0);
              temp_v17 = (float)VectorSignedToFloat(temp_v18,(unsigned char)(temp_v11 >> 0x16) & 3);
              temp_v22 = (unsigned long long)(unsigned int)((float)piVar9[6] + temp_v14 + temp_v17);
            }
            else {
              FUN_0019dc70();
              temp_v7 = temp_v7 + temp_v16;
            }
          }
          else {
            *(unsigned short *)(piVar9 + 0x12) = 0;
            *(short *)((int)piVar9 + 0x46) = (short)temp_v7 + 1;
            *(unsigned char *)(piVar9 + 0x17) = 0;
            while( 1 ) {
              temp_v7 = temp_v7 + 1;
              temp_v3 = *(short *)(*piVar9 + temp_v7 * 0x20);
              *(char *)((int)piVar9 + (unsigned int)*(unsigned short *)(piVar9 + 0x12) * 2 + 0x5c) =
                   (char)((unsigned short)temp_v3 >> 8);
              *(char *)((int)piVar9 + (unsigned int)*(unsigned short *)(piVar9 + 0x12) * 2 + 0x5d) = (char)temp_v3;
              if (temp_v3 == 0) break;
              *(short *)(piVar9 + 0x12) = (short)piVar9[0x12] + 1;
              temp_v14 = (float)VectorSignedToFloat((int)*(char *)(*piVar9 + temp_v7 * 0x20 + 10),
                                                  (unsigned char)(temp_v11 >> 0x16) & 3);
              temp_v19 = (float)piVar9[0x16] + temp_v14 + temp_v19;
            }
            piVar9[0x13] = (int)temp_v19;
          }
        }
        else {
          switch(temp_v16) {
          default:
            FUN_0019dc70();
            temp_v7 = temp_v7 + temp_v16;
            break;
          case 0xf817:
            iStack_a0 = 2;
            break;
          case 0xf818:
            iStack_a0 = 0;
            break;
          case 0xf819:
            temp_v7 = temp_v7 + 1;
            temp_v1 = *(unsigned short *)(*piVar9 + temp_v7 * 0x20);
            uStack_13c = FUN_0019e120(temp_v1);
            uStack_13c = uStack_13c | uStack_14c;
            uStack_1a0 = FUN_0019eaa0(temp_v1);
            uStack_1a0 = uStack_1a0 | uStack_8c;
            uStack_158 = FUN_0019ea4c(temp_v1);
            break;
          case 0xf81a:
            temp_v7 = temp_v7 + 1;
            uStack_a4 = (unsigned int)*(unsigned short *)(*piVar9 + temp_v7 * 0x20);
            if (iStack_88 != 0) {
              temp_v14 = temp_v14 - temp_v15;
              temp_v16 = (temp_v11 & 0xfffffff) | ((unsigned int)(temp_v14 < temp_v21) << 0x1f) |
                       ((unsigned int)(temp_v14 == temp_v21) << 0x1e);
              temp_v11 = temp_v16 | ((unsigned int)((temp_v14 != temp_v14) || (temp_v21 != temp_v21)) << 0x1c);
              temp_v4 = (unsigned char)(temp_v16 >> 0x18);
              if (!(unsigned char)((temp_v4 >> 6) & 1) && temp_v4 >> 7 == ((unsigned char)(temp_v11 >> 0x1c) & 1)) {
                temp_v25 = (unsigned long long)(unsigned int)temp_v14 << 0x20;
              }
            }
            temp_v22 = temp_v24 & 0xffffffff;
            temp_v18 = (**(romwright_code **)(*piVar10 + 0x24))(piVar10);
            VectorSignedToFloat(uStack_a4,(unsigned char)(temp_v11 >> 0x16) & 3);
            VectorSignedToFloat(temp_v18,(unsigned char)(temp_v11 >> 0x16) & 3);
            temp_v23 = (unsigned long long)(unsigned int)temp_v17 << 0x20;
            break;
          case 0xf81b:
            temp_v7 = temp_v7 + 5;
            temp_v7 = temp_v7 + 1;
          }
        }
      }
      else if (iStack_a0 != 2) {
        temp_v6 = *piVar9 + temp_v7 * 0x20 + 4;
        temp_v21 = (float)VectorSignedToFloat((int)*(char *)(temp_v6 + 6),(unsigned char)(temp_v11 >> 0x16) & 3);
        if ((DAT_005b3d78 != 0) && (DAT_005b3d78 == temp_v16)) {
          temp_v21 = (float)VectorSignedToFloat((int)(temp_v21 * temp_v17),(unsigned char)(temp_v11 >> 0x16) & 3);
        }
        temp_v0 = *(unsigned char *)(piVar9[5] + 0x24);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v6 + 5),(unsigned char)(temp_v11 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v6 + 7),(unsigned char)(temp_v11 >> 0x16) & 3);
        temp_v18 = *(unsigned int *)
                  (*(int *)(piVar9[5] + 0xc) + *(int *)(*piVar9 + temp_v7 * 0x20 + 0x1c) * 4);
        if (uStack_158 != 0) {
          FUN_0019f764(g_renderCtx,temp_v18,temp_v0);
          if (uStack_158 == 2) {
            temp_v25 = temp_v25 & 0xffffffff00000000;
            FUN_0019aee4(piVar10,temp_v6,temp_v13,temp_v13,temp_v13,temp_v13);
            FUN_0019aee4(piVar10,temp_v6,temp_v13,temp_v13,temp_v13,temp_v13);
          }
          temp_v24 = (unsigned long long)(unsigned int)temp_v15;
          FUN_0019aee4(piVar10,temp_v6,uStack_1a0,uStack_1a0,uStack_1a0,uStack_1a0);
          FUN_0019aee4(piVar10,temp_v6,uStack_1a0,uStack_1a0,uStack_1a0,uStack_1a0);
          FUN_0019aee4(piVar10,temp_v6,uStack_1a0,uStack_1a0,uStack_1a0,uStack_1a0);
          FUN_0019aee4(piVar10,temp_v6,uStack_1a0,uStack_1a0,uStack_1a0,uStack_1a0);
          FUN_0019aee4(piVar10,temp_v6,uStack_13c,uStack_13c,uStack_13c,uStack_13c);
          temp_v23 = (unsigned long long)(unsigned int)temp_v17 << 0x20;
        }
        else {
          FUN_0019f764(g_renderCtx,temp_v18,temp_v0);
          FUN_0019aee4(piVar10,temp_v6,uStack_13c,uStack_13c,uStack_13c,uStack_13c);
        }
        temp_v22 = (unsigned long long)(unsigned int)((float)piVar9[6] + temp_v14 + temp_v21);
      }
      goto LAB_001814dc;
    }
  }
  return;
LAB_00180f28:
  do {
    while( 1 ) {
      temp_v6 = temp_v6 + 1;
      temp_v8 = temp_v7 + temp_v6;
      temp_v3 = *(short *)(*piVar9 + temp_v8 * 0x20);
      temp_v5 = FUN_0019be8c(temp_v3);
      if (temp_v5 != 0) break;
      temp_v2 = *(char *)(temp_v8 * 0x20 + *piVar9 + 10);
      aiStack_138[temp_v9] = temp_v8;
      temp_v9 = temp_v9 + 1;
      temp_v17 = (float)VectorSignedToFloat((int)temp_v2,(unsigned char)(temp_v11 >> 0x16) & 3);
      temp_v14 = (float)piVar9[0x2a] + temp_v14 + temp_v17;
    }
  } while (temp_v3 != -0x7e8);
  if (iStack_a8 != 0) {
    temp_v6 = 0;
    temp_v17 = (float)((unsigned long long)temp_v23 >> 0x20);
    VectorSignedToFloat((int)(((float)temp_v22 + temp_v19 * temp_v17) - temp_v14 * temp_v17),
                        (unsigned char)(temp_v11 >> 0x16) & 3);
    if (0 < temp_v9) {
      temp_v24 = temp_v24 & 0xffffffff;
      do {
        temp_v5 = *piVar9 + aiStack_138[temp_v6] * 0x20 + 4;
        VectorSignedToFloat((int)*(char *)(temp_v5 + 6),(unsigned char)(temp_v11 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v5 + 5),(unsigned char)(temp_v11 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v5 + 7),(unsigned char)(temp_v11 >> 0x16) & 3);
        FUN_0019f764(g_renderCtx,
                     *(unsigned int *)
                      (*(int *)(piVar9[0x29] + 0xc) +
                      *(int *)(*piVar9 + aiStack_138[temp_v6] * 0x20 + 0x1c) * 4),
                     *(unsigned char *)(piVar9[0x29] + 0x24));
        FUN_0019aee4(iStack_a8,temp_v5,temp_v12,temp_v12,temp_v12,temp_v12);
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < temp_v9);
    }
  }
LAB_001814dc:
  temp_v7 = temp_v7 + 1;
  if (piVar9[3] + piVar9[4] <= temp_v7) {
    return;
  }
  goto LAB_00180bc0;
}

} /* extern "C" */
