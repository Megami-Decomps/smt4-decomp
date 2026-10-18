/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00259b28` (_code @ 0x259b28, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

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
extern unsigned int FUN_001456c0(unsigned short);
extern unsigned int FUN_00145788(unsigned short);
extern unsigned int FUN_001457a8(unsigned short);
/* Supplied declaration required: FUN_002aa38c. */
/* Supplied declaration required: FUN_002aa48c. */
/* Supplied declaration required: FUN_002ae664. */
/* Supplied declaration required: FUN_002ae6b0. */
/* Supplied declaration required: FUN_002ba46c. */


/* WARNING: Removing unreachable block (ram,0x002b0f34) */
/* WARNING: Removing unreachable block (ram,0x002b0f44) */
/* WARNING: Removing unreachable block (ram,0x002b14b4) */
/* WARNING: Removing unreachable block (ram,0x002b0c18) */
/* WARNING: Removing unreachable block (ram,0x002b0c28) */
/* WARNING: Removing unreachable block (ram,0x002b0c08) */
/* WARNING: Removing unreachable block (ram,0x002b0c0c) */
/* WARNING: Removing unreachable block (ram,0x002b122c) */
/* WARNING: Removing unreachable block (ram,0x002b1260) */
/* WARNING: Removing unreachable block (ram,0x002b10dc) */
/* WARNING: Removing unreachable block (ram,0x002b10ec) */
/* WARNING: Removing unreachable block (ram,0x002b100c) */
/* WARNING: Removing unreachable block (ram,0x002b101c) */

void FUN_00259b28(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr, in_s0; 25 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int *piVar9;
  int temp_v8;
  int unaff_r7;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  unsigned int temp_v12;
  float in_s0;
  float temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned long long temp_v21;
  unsigned long long temp_v22;
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
  unsigned int uStack_28;
  
  temp_v15 = (float)VectorSignedToFloat(0x100 - param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v15 = temp_v15 * 0.00390625f;
  temp_v16 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  uStack_28 = 0xffffffff;
  uStack_2c = 0;
  uStack_40 = CONCAT44(temp_v16,temp_v13);
  uStack_38 = CONCAT44(in_s0,temp_v15);
  temp_v20 = 0.0f;
  temp_v22 = 0;
  iStack_148 = 0;
  piStack_30 = param_1;
  if (DAT_00464d48 != '\0') {
    FUN_002ba46c(DAT_0044ea00);
    temp_v13 = temp_v15 + temp_v13;
  }
  temp_v5 = param_1[5];
  if (temp_v5 != 0) {
    unaff_r7 = param_1[4];
  }
  if (temp_v5 != 0 && unaff_r7 != 0) {
    iStack_9c = 0;
    piVar9 = *(int **)(temp_v5 + 8);
    if (param_1[0x29] != 0) {
      iStack_9c = *(int *)(param_1[0x29] + 8);
    }
    temp_v12 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == temp_v20) << 0x1e);
    if (romwright_subpiece_4_1_0(temp_v12 >> 0x1e,0)) {
      uStack_184 = 0;
    }
    else if (in_s0 == 1.0f) {
      uStack_184 = 0xff;
    }
    else {
      uStack_184 = VectorFloatToUnsigned(in_s0 * 255.0f,3);
    }
    temp_v21 = CONCAT44(in_s0,temp_v13);
    temp_v18 = (float)VectorUnsignedToFloat(DAT_004def08 & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v20 = (float)VectorUnsignedToFloat(DAT_004def0c & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v19 = (float)VectorUnsignedToFloat(DAT_004def10 & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    temp_v15 = (float)VectorUnsignedToFloat(DAT_004def14 & 0xff,(unsigned char)(temp_v12 >> 0x16) & 3);
    uStack_1b0 = VectorFloatToUnsigned(temp_v18 * in_s0,3);
    VectorFloatToUnsigned(temp_v20 * in_s0,3);
    temp_v17 = VectorFloatToUnsigned(temp_v19 * in_s0,3);
    temp_v14 = VectorFloatToUnsigned(temp_v15 * in_s0,3);
    uStack_1b0 = uStack_1b0 & 0xff;
    uStack_b0 = (DAT_004def08 & 0xffffff00) | uStack_1b0;
    uStack_90 = (temp_v17 & 0xff) | (DAT_004def10 & 0xffffff00);
    uStack_ac = (DAT_004def14 & 0xffffff00) | (temp_v14 & 0xff);
    temp_v5 = param_1[0x2c];
    if (temp_v5 == 0) {
      uStack_1ac = param_1[0xe];
    }
    else {
      uStack_1ac = *(unsigned int *)(DAT_00464d78 + temp_v5 * 4);
    }
    uStack_1ac = uStack_1ac | uStack_184;
    temp_v11 = DAT_00464d58 != 0;
    temp_v14 = uStack_1ac;
    if (temp_v11) {
      temp_v14 = DAT_00464d58 + temp_v5 * 8;
    }
    if (temp_v11) {
      uStack_1b0 = *(unsigned int *)(temp_v14 + 4);
    }
    temp_v8 = param_1[3];
    uStack_a4 = (unsigned int)((short)(uStack_184 << 3) * 0x667) >> 0xe;
    uStack_13c = (unsigned int)*(unsigned char *)(DAT_00464d58 + temp_v5 * 8);
    if (!temp_v11) {
      uStack_1b0 = 0;
    }
    uStack_1b0 = uStack_1b0 | uStack_a4;
    temp_v17 = param_1[0x28] | uStack_184;
    temp_v14 = (unsigned int)((short)(uStack_184 << 2) * 0xcd) >> 0xb;
    if (temp_v8 < temp_v8 + unaff_r7) {
      temp_v15 = 0.5f;
LAB_002b0be8:
      iStack_8c = 1;
      temp_v6 = (unsigned int)*(unsigned short *)(*param_1 + temp_v8 * 0x20);
      temp_v5 = FUN_002ae6b0(temp_v6);
      temp_v18 = (float)(temp_v22 >> 0x20);
      temp_v20 = (float)temp_v21;
      if (temp_v5 != 0) {
        if (temp_v6 != 0xf814) {
          if (temp_v6 < 0xf814) {
            if (temp_v6 != 0xf804) {
              if (temp_v6 < 0xf804) {
                if (temp_v6 != 0xf801) {
                  if (temp_v6 == 0xf802) {
                    return;
                  }
                  FUN_002ae664();
                  temp_v8 = temp_v8 + temp_v6;
                }
                else {
                  if (iStack_8c != 0) {
                    temp_v20 = temp_v20 - temp_v13;
                    temp_v6 = (temp_v12 & 0xfffffff) | ((unsigned int)(temp_v20 < temp_v18) << 0x1f) |
                            ((unsigned int)(temp_v20 == temp_v18) << 0x1e);
                    temp_v12 = temp_v6 | ((unsigned int)(NAN(temp_v20) || NAN(temp_v18)) << 0x1c);
                    temp_v4 = (unsigned char)(temp_v6 >> 0x18);
                    if (!(unsigned char)((temp_v4 >> 6) & 1) && temp_v4 >> 7 == ((unsigned char)(temp_v12 >> 0x1c) & 1)) {
                      temp_v22 = (unsigned long long)(unsigned int)temp_v20 << 0x20;
                    }
                  }
                  temp_v21 = (unsigned long long)(unsigned int)temp_v13;
                  temp_v16 = (**(romwright_code **)(*piVar9 + 0x24))(piVar9);
                  VectorSignedToFloat(temp_v16,(unsigned char)(temp_v12 >> 0x16) & 3);
                }
              }
              else if (temp_v6 != 0xf812) {
                if (temp_v6 == 0xf813) {
                  temp_v8 = temp_v8 + 4;
                }
                else {
                  FUN_002ae664();
                  temp_v8 = temp_v8 + temp_v6;
                }
              }
              else {
                *(unsigned short *)(param_1 + 0x12) = 0;
                temp_v20 = 0.0f;
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
                  temp_v18 = (float)VectorSignedToFloat((int)*(char *)(*param_1 + temp_v8 * 0x20 + 10),
                                                      (unsigned char)(temp_v12 >> 0x16) & 3);
                  temp_v20 = (float)param_1[0x16] + temp_v18 + temp_v20;
                }
                param_1[0x13] = (int)temp_v20;
              }
            }
            else {
              temp_v8 = temp_v8 + 1;
              temp_v6 = (unsigned int)*(unsigned short *)(*param_1 + temp_v8 * 0x20);
              if (temp_v6 != 0) {
                uStack_1ac = *(unsigned int *)(DAT_00464d78 + temp_v6 * 4);
              }
              else {
                uStack_1ac = param_1[0xe];
              }
              uStack_1ac = uStack_1ac | uStack_184;
              uStack_1b0 = 0;
              if (DAT_00464d58 != 0) {
                uStack_1b0 = *(unsigned int *)(DAT_00464d58 + temp_v6 * 8 + 4);
              }
              uStack_1b0 = uStack_1b0 | uStack_a4;
              if (DAT_00464d58 != 0) {
                uStack_13c = (unsigned int)*(unsigned char *)(DAT_00464d58 + temp_v6 * 8);
              }
              else {
                uStack_13c = 0;
              }
            }
          }
          else {
            switch(temp_v6) {
            case 0xf816:
              temp_v18 = 0.0f;
              temp_v10 = 0;
              temp_v5 = 0;
              iStack_148 = 1;
              temp_v20 = temp_v18;
              do {
                temp_v1 = *(short *)(*param_1 + (temp_v8 + temp_v5) * 0x20);
                temp_v7 = FUN_002ae6b0(temp_v1);
                if (temp_v7 != 0) {
                  if (temp_v1 == -0x7e9) goto LAB_002b0f64;
                }
                else {
                  temp_v19 = (float)VectorSignedToFloat((int)*(char *)((temp_v8 + temp_v5) * 0x20 +
                                                                     *param_1 + 10),
                                                      (unsigned char)(temp_v12 >> 0x16) & 3);
                  temp_v18 = (float)param_1[6] + temp_v18 + temp_v19;
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
              temp_v8 = temp_v8 + 1;
              temp_v2 = *(unsigned short *)(*param_1 + temp_v8 * 0x20);
              uStack_1ac = FUN_001456c0(temp_v2);
              uStack_1ac = uStack_1ac | uStack_184;
              uStack_1b0 = FUN_001457a8(temp_v2);
              uStack_1b0 = uStack_1b0 | uStack_a4;
              uStack_13c = FUN_00145788(temp_v2);
              break;
            case 0xf81a:
              temp_v8 = temp_v8 + 1;
              temp_v3 = *(unsigned short *)(*param_1 + temp_v8 * 0x20);
              if (iStack_8c != 0) {
                temp_v20 = temp_v20 - temp_v13;
                temp_v6 = (temp_v12 & 0xfffffff) | ((unsigned int)(temp_v20 < temp_v18) << 0x1f) |
                        ((unsigned int)(temp_v20 == temp_v18) << 0x1e);
                temp_v12 = temp_v6 | ((unsigned int)(NAN(temp_v20) || NAN(temp_v18)) << 0x1c);
                temp_v4 = (unsigned char)(temp_v6 >> 0x18);
                if (!(unsigned char)((temp_v4 >> 6) & 1) && temp_v4 >> 7 == ((unsigned char)(temp_v12 >> 0x1c) & 1)) {
                  temp_v22 = (unsigned long long)(unsigned int)temp_v20 << 0x20;
                }
              }
              temp_v21 = (unsigned long long)(unsigned int)temp_v13;
              temp_v16 = (**(romwright_code **)(*piVar9 + 0x24))(piVar9);
              VectorSignedToFloat((unsigned int)temp_v3,(unsigned char)(temp_v12 >> 0x16) & 3);
              VectorSignedToFloat(temp_v16,(unsigned char)(temp_v12 >> 0x16) & 3);
              break;
            default:
              FUN_002ae664();
              temp_v8 = temp_v8 + temp_v6;
            }
          }
        }
        else if (DAT_00464d64 != (romwright_code *)0x0) {
          temp_v5 = temp_v8 + 1;
          temp_v8 = temp_v8 + 2;
          temp_v16 = (*DAT_00464d64)(*(unsigned short *)(*param_1 + temp_v5 * 0x20),
                                   *(unsigned short *)(*param_1 + temp_v8 * 0x20),0);
          temp_v18 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(temp_v12 >> 0x16) & 3);
          temp_v21 = (unsigned long long)(unsigned int)((float)param_1[6] + temp_v20 + temp_v18);
        }
        else {
          FUN_002ae664();
          temp_v8 = temp_v8 + temp_v6;
        }
      }
      else if (iStack_148 != 2) {
        temp_v5 = *param_1 + temp_v8 * 0x20 + 4;
        temp_v18 = (float)VectorSignedToFloat((int)*(char *)(temp_v5 + 6),(unsigned char)(temp_v12 >> 0x16) & 3);
        if ((DAT_00464d68 != 0) && (DAT_00464d68 == temp_v6)) {
          temp_v18 = (float)VectorSignedToFloat((int)(temp_v18 * temp_v15),(unsigned char)(temp_v12 >> 0x16) & 3);
        }
        temp_v0 = *(unsigned char *)(param_1[5] + 0x24);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v5 + 5),(unsigned char)(temp_v12 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v5 + 7),(unsigned char)(temp_v12 >> 0x16) & 3);
        temp_v16 = *(unsigned int *)
                  (*(int *)(param_1[5] + 0xc) + *(int *)(*param_1 + temp_v8 * 0x20 + 0x1c) * 4);
        if (uStack_13c != 0) {
          FUN_002aa48c(DAT_0044ea00,temp_v16,temp_v0);
          if (uStack_13c == 2) {
            temp_v22 = temp_v22 & 0xffffffff00000000;
            FUN_002aa38c(piVar9,temp_v5,temp_v14,temp_v14,temp_v14,temp_v14);
            FUN_002aa38c(piVar9,temp_v5,temp_v14,temp_v14,temp_v14,temp_v14);
          }
          FUN_002aa38c(piVar9,temp_v5,uStack_1b0,uStack_1b0,uStack_1b0,uStack_1b0);
          FUN_002aa38c(piVar9,temp_v5,uStack_1b0,uStack_1b0,uStack_1b0,uStack_1b0);
          FUN_002aa38c(piVar9,temp_v5,uStack_1b0,uStack_1b0,uStack_1b0,uStack_1b0);
          FUN_002aa38c(piVar9,temp_v5,uStack_1b0,uStack_1b0,uStack_1b0,uStack_1b0);
          FUN_002aa38c(piVar9,temp_v5,uStack_1ac,uStack_1ac,uStack_1ac,uStack_1ac);
        }
        else {
          FUN_002aa48c(DAT_0044ea00,temp_v16,temp_v0);
          FUN_002aa38c(piVar9,temp_v5,uStack_1ac,uStack_1ac,uStack_1ac,uStack_1ac);
        }
        temp_v21 = (unsigned long long)(unsigned int)((float)param_1[6] + temp_v20 + temp_v18);
      }
      goto LAB_002b1548;
    }
  }
  return;
LAB_002b0f64:
  do {
    while( 1 ) {
      temp_v5 = temp_v5 + 1;
      temp_v9 = temp_v8 + temp_v5;
      temp_v1 = *(short *)(*param_1 + temp_v9 * 0x20);
      temp_v7 = FUN_002ae6b0(temp_v1);
      if (temp_v7 != 0) break;
      temp_v19 = (float)VectorSignedToFloat((int)*(char *)(temp_v9 * 0x20 + *param_1 + 10),
                                          (unsigned char)(temp_v12 >> 0x16) & 3);
      aiStack_130[temp_v10] = temp_v9;
      temp_v10 = temp_v10 + 1;
      temp_v20 = (float)param_1[0x2a] + temp_v20 + temp_v19;
    }
  } while (temp_v1 != -0x7e8);
  if (iStack_9c != 0) {
    temp_v5 = 0;
    VectorSignedToFloat((int)(((float)temp_v21 + temp_v18 * temp_v15) - temp_v20 * temp_v15),
                        (unsigned char)(temp_v12 >> 0x16) & 3);
    if (0 < temp_v10) {
      do {
        temp_v7 = *param_1 + aiStack_130[temp_v5] * 0x20 + 4;
        VectorSignedToFloat((int)*(char *)(temp_v7 + 6),(unsigned char)(temp_v12 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v7 + 5),(unsigned char)(temp_v12 >> 0x16) & 3);
        VectorUnsignedToFloat((unsigned int)*(unsigned char *)(temp_v7 + 7),(unsigned char)(temp_v12 >> 0x16) & 3);
        FUN_002aa48c(DAT_0044ea00,
                     *(unsigned int *)
                      (*(int *)(param_1[0x29] + 0xc) +
                      *(int *)(*param_1 + aiStack_130[temp_v5] * 0x20 + 0x1c) * 4),
                     *(unsigned char *)(param_1[0x29] + 0x24),(unsigned int)*(unsigned char *)(temp_v7 + 7));
        FUN_002aa38c(iStack_9c,temp_v7,temp_v17,temp_v17,temp_v17,temp_v17);
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < temp_v10);
    }
  }
LAB_002b1548:
  temp_v8 = temp_v8 + 1;
  if (param_1[3] + param_1[4] <= temp_v8) {
    return;
  }
  goto LAB_002b0be8;
}
