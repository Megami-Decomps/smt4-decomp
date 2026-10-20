/* NON_MATCHING: mechanical split of the romwright decompile of the merged function, not yet rewritten: the stub passes (0, -1) as the 2nd/3rd argument, which the decompile folded into constants */
#include "common.h"

extern "C" {

int CONCAT44(double, double);
int FUN_001879d0(unsigned int);
int FUN_0019aee4(...);
int FUN_0019be8c(...);
int FUN_0019dc70(void);
int FUN_0019f764(...);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 23 slot(s), 92 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp184; /* 0x184: local_184 */
    unsigned int sp1A0; /* 0x1a0: local_1a0 */
    unsigned int sp1A4; /* 0x1a4: local_1a4 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
} param_1_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */
extern signed char g_asdTextDefaults; /* 0x5b3d54 */
extern int DAT_005b3d64; /* 0x5b3d64 */
extern romwright_code *DAT_005b3d74; /* 0x5b3d74 */
extern unsigned int DAT_005b3d78; /* 0x5b3d78 */
extern int DAT_005b3d88; /* 0x5b3d88 */
extern unsigned int DAT_0063af88; /* 0x63af88 */
extern unsigned int DAT_0063af8c; /* 0x63af8c */
extern unsigned int DAT_0063af90; /* 0x63af90 */
extern unsigned int DAT_0063af94; /* 0x63af94 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_0019aee4. */
/* Supplied declaration required: FUN_0019be8c. */
/* Supplied declaration required: FUN_0019dc70. */
extern unsigned int FUN_0019e120(unsigned short);
extern unsigned int FUN_0019ea4c(unsigned short);
extern unsigned int FUN_0019eaa0(unsigned short);
/* Supplied declaration required: FUN_0019f764. */


/* WARNING: Removing unreachable block (ram,0x001811fc) */
/* WARNING: Removing unreachable block (ram,0x001811c8) */
/* WARNING: Removing unreachable block (ram,0x00180be4) */
/* WARNING: Removing unreachable block (ram,0x00180be0) */
/* WARNING: Removing unreachable block (ram,0x00180bf0) */
/* WARNING: Removing unreachable block (ram,0x00180c00) */
/* WARNING: Removing unreachable block (ram,0x00181450) */
/* WARNING: Removing unreachable block (ram,0x00180fd0) */
/* WARNING: Removing unreachable block (ram,0x00180fe0) */

void FUN_00180998(int *param_1, int arg1, int arg2)

{
/* irregular: 3 goto(s); irregular input(s): in_d11, in_d15, in_fpscr, in_s0, in_s2, in_s3; 19 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  char temp_v3;
  unsigned long long temp_v4;
  unsigned char temp_v5;
  int temp_v6;
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
  float temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  float in_s2;
  float in_s3;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  unsigned long long in_d11;
  long long temp_v23;
  unsigned long long temp_v24;
  unsigned long long temp_v25;
  unsigned long long in_d15;
  unsigned long long temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned char temp_v29;
  unsigned int temp_v30;
  int aiStack_138 [36];
  int temp_v31;
  unsigned int temp_v32;
  int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  int temp_v39;
  int *piStack_30;
  unsigned int uStack_2c;
  unsigned int temp_v40;
  
  temp_v40 = 0xffffffff;
  uStack_2c = 0;
  temp_v21 = 0.0f;
  temp_v32 = 0;
  temp_v25 = 0;
  temp_v33 = 0;
  piStack_30 = param_1;
  if (g_asdTextDefaults != '\0') {
    FUN_001879d0(g_renderCtx);
    in_s0 = in_s2 + in_s0;
  }
  temp_v24 = (unsigned long long)(unsigned int)in_s0;
  temp_v6 = param_1[5];
  if (temp_v6 != 0) {
    unaff_r7 = param_1[4];
  }
  if (temp_v6 != 0 && unaff_r7 != 0) {
    temp_v31 = 0;
    piVar10 = *(int **)(temp_v6 + 8);
    temp_v26 = in_d15 & 0xffffffff;
    if (param_1[0x29] != 0) {
      temp_v31 = *(int *)(param_1[0x29] + 8);
    }
    temp_v13 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s3 == temp_v21) << 0x1e);
    if (romwright_subpiece_4_1_0(temp_v13 >> 0x1e,0)) {
      temp_v29 = 0;
    }
    else if (in_s3 == 1.0f) {
      temp_v29 = 0xff;
    }
    else {
      temp_v29 = VectorFloatToUnsigned(in_s3 * 255.0f,3);
    }
    temp_v22 = CONCAT44(in_s3,in_s0);
    temp_v19 = (float)VectorUnsignedToFloat(DAT_0063af88 & 0xff,(unsigned char)(temp_v13 >> 0x16) & 3);
    temp_v18 = (float)VectorUnsignedToFloat(DAT_0063af8c & 0xff,(unsigned char)(temp_v13 >> 0x16) & 3);
    temp_v20 = (float)VectorUnsignedToFloat(DAT_0063af90 & 0xff,(unsigned char)(temp_v13 >> 0x16) & 3);
    temp_v14 = (float)VectorUnsignedToFloat(DAT_0063af94 & 0xff,(unsigned char)(temp_v13 >> 0x16) & 3);
    temp_v27 = VectorFloatToUnsigned(temp_v19 * in_s3,3);
    temp_v15 = VectorFloatToUnsigned(temp_v18 * in_s3,3);
    temp_v16 = VectorFloatToUnsigned(temp_v20 * in_s3,3);
    temp_v17 = VectorFloatToUnsigned(temp_v14 * in_s3,3);
    temp_v27 = temp_v27 & 0xff;
    temp_v35 = (DAT_0063af88 & 0xffffff00) | temp_v27;
    temp_v34 = (temp_v15 & 0xff) | (DAT_0063af8c & 0xffffff00);
    temp_v37 = (temp_v16 & 0xff) | (DAT_0063af90 & 0xffffff00);
    temp_v36 = (DAT_0063af94 & 0xffffff00) | (temp_v17 & 0xff);
    temp_v6 = param_1[0x2c];
    temp_v4 = in_d11 >> 0x20;
    if (temp_v6 == 0) {
      temp_v30 = param_1[0xe];
    }
    else {
      temp_v30 = *(unsigned int *)(DAT_005b3d88 + temp_v6 * 4);
    }
    temp_v30 = temp_v30 | temp_v29;
    temp_v12 = DAT_005b3d64 != 0;
    temp_v15 = temp_v30;
    if (temp_v12) {
      temp_v15 = DAT_005b3d64 + temp_v6 * 8;
    }
    if (temp_v12) {
      temp_v27 = *(unsigned int *)(temp_v15 + 4);
    }
    temp_v9 = param_1[3];
    temp_v38 = (unsigned int)((short)(temp_v29 << 3) * 0x667) >> 0xe;
    temp_v28 = (unsigned int)*(unsigned char *)(DAT_005b3d64 + temp_v6 * 8);
    if (!temp_v12) {
      temp_v27 = 0;
    }
    temp_v6 = temp_v9 + unaff_r7;
    temp_v27 = temp_v27 | temp_v38;
    temp_v15 = param_1[0x28] | temp_v29;
    if (temp_v9 < temp_v6) {
      temp_v26 = (unsigned long long)(unsigned int)temp_v21;
    }
    temp_v16 = (unsigned int)((short)(temp_v29 << 2) * 0xcd) >> 0xb;
    if (temp_v9 < temp_v6) {
      temp_v4 = 0x3f000000;
    }
    temp_v23 = temp_v4 << 0x20;
    if (temp_v9 < temp_v6) {
LAB_00180bc0:
      temp_v39 = 1;
      temp_v17 = (unsigned int)*(unsigned short *)(*param_1 + temp_v9 * 0x20);
      temp_v6 = FUN_0019be8c(temp_v17);
      temp_v19 = (float)(temp_v25 >> 0x20);
      temp_v18 = (float)temp_v24;
      temp_v21 = (float)temp_v22;
      temp_v14 = (float)((unsigned long long)temp_v23 >> 0x20);
      if (temp_v6 != 0) {
        temp_v20 = (float)temp_v26;
        if (temp_v17 == 0xf816) {
          temp_v11 = 0;
          temp_v6 = 0;
          temp_v33 = 1;
          temp_v21 = temp_v20;
          do {
            temp_v1 = *(short *)(*param_1 + (temp_v9 + temp_v6) * 0x20);
            temp_v8 = FUN_0019be8c(temp_v1);
            if (temp_v8 != 0) {
              if (temp_v1 == -0x7e9) goto LAB_00180f28;
            }
            else {
              temp_v14 = (float)VectorSignedToFloat((int)*(char *)((temp_v9 + temp_v6) * 0x20 + *param_1
                                                                + 10),(unsigned char)(temp_v13 >> 0x16) & 3);
              temp_v20 = (float)param_1[6] + temp_v20 + temp_v14;
            }
            temp_v6 = temp_v6 + 1;
          } while( 1 );
        }
        if (temp_v17 < 0xf816) {
          if (temp_v17 != 0xf812) {
            if (temp_v17 < 0xf812) {
              if (temp_v17 != 0xf801) {
                if (temp_v17 == 0xf802) {
                  return;
                }
                if (temp_v17 == 0xf804) {
                  temp_v9 = temp_v9 + 1;
                  temp_v17 = (unsigned int)*(unsigned short *)(*param_1 + temp_v9 * 0x20);
                  if (temp_v17 != 0) {
                    temp_v30 = *(unsigned int *)(DAT_005b3d88 + temp_v17 * 4);
                  }
                  else {
                    temp_v30 = param_1[0xe];
                  }
                  temp_v30 = temp_v30 | temp_v29;
                  temp_v27 = 0;
                  if (DAT_005b3d64 != 0) {
                    temp_v27 = *(unsigned int *)(DAT_005b3d64 + temp_v17 * 8 + 4);
                  }
                  temp_v27 = temp_v27 | temp_v38;
                  if (DAT_005b3d64 != 0) {
                    temp_v28 = (unsigned int)*(unsigned char *)(DAT_005b3d64 + temp_v17 * 8);
                  }
                  else {
                    temp_v28 = 0;
                  }
                }
                else {
                  FUN_0019dc70();
                  temp_v9 = temp_v9 + temp_v17;
                }
              }
              else {
                if (temp_v39 != 0) {
                  temp_v21 = temp_v21 - temp_v18;
                  temp_v17 = (temp_v13 & 0xfffffff) | ((unsigned int)(temp_v21 < temp_v19) << 0x1f) |
                           ((unsigned int)(temp_v21 == temp_v19) << 0x1e);
                  temp_v13 = temp_v17 | ((unsigned int)((temp_v21 != temp_v21) || (temp_v19 != temp_v19)) << 0x1c);
                  temp_v5 = (unsigned char)(temp_v17 >> 0x18);
                  if (!(unsigned char)((temp_v5 >> 6) & 1) && temp_v5 >> 7 == ((unsigned char)(temp_v13 >> 0x1c) & 1)) {
                    temp_v25 = (unsigned long long)(unsigned int)temp_v21 << 0x20;
                  }
                }
                temp_v22 = temp_v24 & 0xffffffff;
                temp_v7 = (**(romwright_code **)(*piVar10 + 0x24))(piVar10);
                VectorSignedToFloat(temp_v7,(unsigned char)(temp_v13 >> 0x16) & 3);
                temp_v23 = (unsigned long long)(unsigned int)temp_v14 << 0x20;
                temp_v32 = temp_v32 + 1;
              }
            }
            else if (temp_v17 == 0xf813) {
              temp_v9 = temp_v9 + 3;
              temp_v9 = temp_v9 + 1;
            }
            else if ((temp_v17 == 0xf814) && (DAT_005b3d74 != (romwright_code *)0x0)) {
              temp_v6 = temp_v9 + 1;
              temp_v9 = temp_v9 + 2;
              temp_v7 = (*DAT_005b3d74)(*(unsigned short *)(*param_1 + temp_v6 * 0x20),
                                      *(unsigned short *)(*param_1 + temp_v9 * 0x20),0);
              temp_v14 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(temp_v13 >> 0x16) & 3);
              temp_v22 = (unsigned long long)(unsigned int)((float)param_1[6] + temp_v21 + temp_v14);
            }
            else {
              FUN_0019dc70();
              temp_v9 = temp_v9 + temp_v17;
            }
          }
          else {
            *(unsigned short *)(param_1 + 0x12) = 0;
            *(short *)((int)param_1 + 0x46) = (short)temp_v9 + 1;
            *(unsigned char *)(param_1 + 0x17) = 0;
            while( 1 ) {
              temp_v9 = temp_v9 + 1;
              temp_v1 = *(short *)(*param_1 + temp_v9 * 0x20);
              *(char *)((int)param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x12) * 2 + 0x5c) =
                   (char)((unsigned short)temp_v1 >> 8);
              *(char *)((int)param_1 + (unsigned int)*(unsigned short *)(param_1 + 0x12) * 2 + 0x5d) = (char)temp_v1;
              if (temp_v1 == 0) break;
              *(short *)(param_1 + 0x12) = (short)param_1[0x12] + 1;
              temp_v21 = (float)VectorSignedToFloat((int)*(char *)(*param_1 + temp_v9 * 0x20 + 10),
                                                  (unsigned char)(temp_v13 >> 0x16) & 3);
              temp_v20 = (float)param_1[0x16] + temp_v21 + temp_v20;
            }
            param_1[0x13] = (int)temp_v20;
          }
        }
        else {
          switch(temp_v17) {
          default:
            FUN_0019dc70();
            temp_v9 = temp_v9 + temp_v17;
            break;
          case 0xf817:
            temp_v33 = 2;
            break;
          case 0xf818:
            temp_v33 = 0;
            break;
          case 0xf819:
            temp_v9 = temp_v9 + 1;
            temp_v2 = *(unsigned short *)(*param_1 + temp_v9 * 0x20);
            temp_v30 = FUN_0019e120(temp_v2);
            temp_v30 = temp_v30 | temp_v29;
            temp_v27 = FUN_0019eaa0(temp_v2);
            temp_v27 = temp_v27 | temp_v38;
            temp_v28 = FUN_0019ea4c(temp_v2);
            break;
          case 0xf81a:
            temp_v9 = temp_v9 + 1;
            temp_v32 = (unsigned int)*(unsigned short *)(*param_1 + temp_v9 * 0x20);
            if (temp_v39 != 0) {
              temp_v21 = temp_v21 - temp_v18;
              temp_v17 = (temp_v13 & 0xfffffff) | ((unsigned int)(temp_v21 < temp_v19) << 0x1f) |
                       ((unsigned int)(temp_v21 == temp_v19) << 0x1e);
              temp_v13 = temp_v17 | ((unsigned int)((temp_v21 != temp_v21) || (temp_v19 != temp_v19)) << 0x1c);
              temp_v5 = (unsigned char)(temp_v17 >> 0x18);
              if (!(unsigned char)((temp_v5 >> 6) & 1) && temp_v5 >> 7 == ((unsigned char)(temp_v13 >> 0x1c) & 1)) {
                temp_v25 = (unsigned long long)(unsigned int)temp_v21 << 0x20;
              }
            }
            temp_v22 = temp_v24 & 0xffffffff;
            temp_v7 = (**(romwright_code **)(*piVar10 + 0x24))(piVar10);
            VectorSignedToFloat(temp_v32,(unsigned char)(temp_v13 >> 0x16) & 3);
            VectorSignedToFloat(temp_v7,(unsigned char)(temp_v13 >> 0x16) & 3);
            temp_v23 = (unsigned long long)(unsigned int)temp_v14 << 0x20;
            break;
          case 0xf81b:
            temp_v9 = temp_v9 + 5;
            temp_v9 = temp_v9 + 1;
          }
        }
      }
      else if (temp_v33 != 2) {
        temp_v6 = *param_1 + temp_v9 * 0x20 + 4;
        temp_v19 = (float)VectorSignedToFloat((int)*(char *)(temp_v6 + 6),(unsigned char)(temp_v13 >> 0x16) & 3);
        if ((DAT_005b3d78 != 0) && (DAT_005b3d78 == temp_v17)) {
          temp_v19 = (float)VectorSignedToFloat((int)(temp_v19 * temp_v14),(unsigned char)(temp_v13 >> 0x16) & 3);
        }
        temp_v0 = *(unsigned char *)(param_1[5] + 0x24);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v6 + 5),(unsigned char)(temp_v13 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v6 + 7),(unsigned char)(temp_v13 >> 0x16) & 3);
        temp_v7 = *(unsigned int *)
                 (*(int *)(param_1[5] + 0xc) + *(int *)(*param_1 + temp_v9 * 0x20 + 0x1c) * 4);
        if (temp_v28 != 0) {
          FUN_0019f764(g_renderCtx,temp_v7,temp_v0);
          if (temp_v28 == 2) {
            temp_v25 = temp_v25 & 0xffffffff00000000;
            FUN_0019aee4(piVar10,temp_v6,temp_v16,temp_v16,temp_v16,temp_v16);
            FUN_0019aee4(piVar10,temp_v6,temp_v16,temp_v16,temp_v16,temp_v16);
          }
          temp_v24 = (unsigned long long)(unsigned int)temp_v18;
          FUN_0019aee4(piVar10,temp_v6,temp_v27,temp_v27,temp_v27,temp_v27);
          FUN_0019aee4(piVar10,temp_v6,temp_v27,temp_v27,temp_v27,temp_v27);
          FUN_0019aee4(piVar10,temp_v6,temp_v27,temp_v27,temp_v27,temp_v27);
          FUN_0019aee4(piVar10,temp_v6,temp_v27,temp_v27,temp_v27,temp_v27);
          FUN_0019aee4(piVar10,temp_v6,temp_v30,temp_v30,temp_v30,temp_v30);
          temp_v23 = (unsigned long long)(unsigned int)temp_v14 << 0x20;
        }
        else {
          FUN_0019f764(g_renderCtx,temp_v7,temp_v0);
          FUN_0019aee4(piVar10,temp_v6,temp_v30,temp_v30,temp_v30,temp_v30);
        }
        temp_v22 = (unsigned long long)(unsigned int)((float)param_1[6] + temp_v21 + temp_v19);
      }
      goto LAB_001814dc;
    }
  }
  return;
LAB_00180f28:
  do {
    while( 1 ) {
      temp_v6 = temp_v6 + 1;
      temp_v10 = temp_v9 + temp_v6;
      temp_v1 = *(short *)(*param_1 + temp_v10 * 0x20);
      temp_v8 = FUN_0019be8c(temp_v1);
      if (temp_v8 != 0) break;
      temp_v3 = *(char *)(temp_v10 * 0x20 + *param_1 + 10);
      aiStack_138[temp_v11] = temp_v10;
      temp_v11 = temp_v11 + 1;
      temp_v14 = (float)VectorSignedToFloat((int)temp_v3,(unsigned char)(temp_v13 >> 0x16) & 3);
      temp_v21 = (float)param_1[0x2a] + temp_v21 + temp_v14;
    }
  } while (temp_v1 != -0x7e8);
  if (temp_v31 != 0) {
    temp_v6 = 0;
    temp_v14 = (float)((unsigned long long)temp_v23 >> 0x20);
    VectorSignedToFloat((int)(((float)temp_v22 + temp_v20 * temp_v14) - temp_v21 * temp_v14),
                        (unsigned char)(temp_v13 >> 0x16) & 3);
    if (0 < temp_v11) {
      temp_v24 = temp_v24 & 0xffffffff;
      do {
        temp_v8 = *param_1 + aiStack_138[temp_v6] * 0x20 + 4;
        VectorSignedToFloat((int)*(char *)(temp_v8 + 6),(unsigned char)(temp_v13 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v8 + 5),(unsigned char)(temp_v13 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v8 + 7),(unsigned char)(temp_v13 >> 0x16) & 3);
        FUN_0019f764(g_renderCtx,
                     *(unsigned int *)
                      (*(int *)(param_1[0x29] + 0xc) +
                      *(int *)(*param_1 + aiStack_138[temp_v6] * 0x20 + 0x1c) * 4),
                     *(unsigned char *)(param_1[0x29] + 0x24));
        FUN_0019aee4(temp_v31,temp_v8,temp_v15,temp_v15,temp_v15,temp_v15);
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < temp_v11);
    }
  }
LAB_001814dc:
  temp_v9 = temp_v9 + 1;
  if (param_1[3] + param_1[4] <= temp_v9) {
    return;
  }
  goto LAB_00180bc0;
}

} /* extern "C" */
