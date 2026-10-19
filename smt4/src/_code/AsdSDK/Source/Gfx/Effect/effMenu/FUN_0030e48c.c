/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030e48c` (_code @ 0x30e48c, 0x8cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_3_stack;

extern int DAT_0044ea00; /* 0x44ea00 */
extern float DAT_004724cc; /* 0x4724cc */
extern float DAT_004724d0; /* 0x4724d0 */
extern unsigned int *DAT_004ea7e0; /* 0x4ea7e0 */
extern unsigned int *DAT_004ea7f4; /* 0x4ea7f4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_0024ac4c(unsigned int);
/* Supplied declaration required: FUN_00256dbc. */
/* Supplied declaration required: FUN_00256f88. */
/* Supplied declaration required: FUN_002573c8. */
/* Supplied declaration required: FUN_0025b750. */
/* Supplied declaration required: FUN_00263028. */
/* Supplied declaration required: FUN_002630e0. */
/* Supplied declaration required: FUN_002b011c. */
/* Supplied declaration required: FUN_002b7d30. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: FUN_002c39a4. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c4f8c. */
extern unsigned int FUN_002c501c(void);
extern int FUN_002c5d80(unsigned int);
/* Supplied declaration required: FUN_002c733c. */
/* Supplied declaration required: FUN_002cbc40. */
/* Supplied declaration required: FUN_002f2ea0. */
/* Supplied declaration required: nn_math_ARMv6_MTX44TransposeAsm. */


void FUN_0030e48c(unsigned int param_1,int *param_2,int param_3)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 18 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar9;
  int *piVar10;
  unsigned int *puVar11;
  unsigned int temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  unsigned long long temp_v13;
  unsigned long long temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  
  temp_v2 = DAT_0044ea00;
  temp_v1 = FUN_002c5d80(1);
  piVar9 = (int *)(temp_v2 + 0x124c);
  temp_v5 = *piVar9;
  temp_v6 = piVar9[temp_v5 + 2];
  *piVar9 = temp_v5 + 1;
  piVar9[temp_v5 + 3] = temp_v1;
  if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v6 != temp_v1) {
    (**(romwright_code **)(temp_v2 + 0x1268))();
    *(unsigned char *)(temp_v2 + 0x1264) = 0;
  }
  do {
    temp_v2 = DAT_0044ea00;
    if (param_2 == (int *)0x0) {
      piVar9 = (int *)(DAT_0044ea00 + 0x124c);
      temp_v1 = *piVar9;
      temp_v5 = piVar9[temp_v1 + 2];
      *piVar9 = temp_v1 - 1;
      if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v5 != piVar9[temp_v1 + 1]) {
        (**(romwright_code **)(temp_v2 + 0x1268))();
        *(unsigned char *)(temp_v2 + 0x1264) = 0;
      }
      return;
    }
    piVar9 = (int *)*param_2;
    switch(param_2[1]) {
    case 0:
      temp_v12 = *(unsigned long long *)(param_2 + 2);
      temp_v13 = *(unsigned long long *)(param_2 + 4);
      temp_v15 = 0x10;
      temp_v16 = 1;
      puVar3 = (unsigned int *)0x10000;
      FUN_002c32a0(0x10000,0x100,0,0x68);
      puVar3[2] = (int)temp_v12;
      puVar3[3] = (int)((unsigned long long)temp_v12 >> 0x20);
      puVar3[4] = (int)temp_v13;
      puVar3[5] = (int)((unsigned long long)temp_v13 >> 0x20);
      puVar3[1] = 5;
      puVar3[7] = 0xc0000000;
      puVar3[6] = 0xffffc040;
      puVar11 = DAT_004ea7f4;
      goto joined_r0x0030e620;
    case 1:
      temp_v12 = *(unsigned long long *)(param_2 + 2);
      temp_v13 = *(unsigned long long *)(param_2 + 4);
      temp_v14 = *(unsigned long long *)(param_2 + 6);
      temp_v15 = 0x10;
      temp_v16 = 1;
      puVar3 = (unsigned int *)0x10000;
      FUN_002c32a0(0x10000,0x100,0,0x68);
      puVar3[2] = (int)temp_v12;
      puVar3[3] = (int)((unsigned long long)temp_v12 >> 0x20);
      puVar3[4] = (int)temp_v13;
      puVar3[5] = (int)((unsigned long long)temp_v13 >> 0x20);
      puVar3[6] = (int)temp_v14;
      puVar3[7] = (int)((unsigned long long)temp_v14 >> 0x20);
      puVar3[1] = 5;
      puVar11 = DAT_004ea7f4;
joined_r0x0030e620:
      DAT_004ea7f4 = puVar3;
      puVar3 = DAT_004ea7f4;
      if (DAT_004ea7e0 != (unsigned int *)0x0) {
        *puVar11 = (unsigned int)DAT_004ea7f4;
        puVar3 = DAT_004ea7e0;
      }
      DAT_004ea7e0 = puVar3;
      *DAT_004ea7f4 = 0;
      break;
    case 2:
      temp_v15 = 0xff00ffff;
      temp_v16 = 0xff00ffff;
      FUN_002c733c(param_2[2] - 1,param_2[3] - 1,3);
      break;
    case 3:
      temp_v15 = param_2[4];
      temp_v4 = 3;
      temp_v7 = 3;
      temp_v1 = param_2[3] - 1;
      temp_v2 = param_2[2] - 1;
      temp_v16 = temp_v15;
      FUN_002c733c(temp_v2,temp_v1,temp_v7,temp_v4);
      break;
    case 4:
      temp_v15 = param_2[6];
      temp_v16 = param_2[7];
      temp_v2 = param_2[2];
      temp_v1 = param_2[3];
      temp_v7 = param_2[4];
      temp_v4 = param_2[5];
      FUN_002c733c(temp_v2,temp_v1,temp_v7,temp_v4);
      break;
    case 5:
      temp_v15 = param_2[6];
      temp_v16 = param_2[7];
      FUN_002f2ea0(param_2[2],param_2[3],param_2[4],param_2[5]);
      break;
    case 6:
      temp_v10 = (float)VectorSignedToFloat(param_2[2],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = (float)VectorSignedToFloat(param_2[3],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (float)VectorSignedToFloat(param_2[4],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (float)VectorSignedToFloat(param_2[5],(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = param_2[6];
      temp_v12 = romwright_piece_4_4((int)(temp_v11 + DAT_004724d0),(int)(temp_v10 + DAT_004724cc));
      temp_v13 = romwright_piece_4_4((int)(temp_v8 + DAT_004724d0),(int)(temp_v9 + DAT_004724cc));
      temp_v1 = FUN_002c5d80(1);
      piVar10 = (int *)(temp_v2 + 0x124c);
      temp_v6 = *piVar10;
      temp_v5 = piVar10[temp_v6 + 2];
      *piVar10 = temp_v6 + 1;
      piVar10[temp_v6 + 3] = temp_v1;
      if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v5 != temp_v1) {
        (**(romwright_code **)(temp_v2 + 0x1268))();
        *(unsigned char *)(temp_v2 + 0x1264) = 0;
      }
      FUN_002c1b64(DAT_0044ea00,0);
      VectorSignedToFloat((int)((unsigned long long)temp_v13 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)((unsigned long long)temp_v12 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00263028((temp_v3 << 0x18) | (((temp_v3 & 0xffff) >> 8) << 0x10) |
                   (((temp_v3 & 0xffffff) >> 0x10) << 8) | (temp_v3 >> 0x18));
      temp_v2 = DAT_0044ea00;
      piVar10 = (int *)(DAT_0044ea00 + 0x124c);
      temp_v1 = *piVar10;
      temp_v5 = piVar10[temp_v1 + 2];
      *piVar10 = temp_v1 - 1;
      if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v5 != piVar10[temp_v1 + 1]) {
        (**(romwright_code **)(temp_v2 + 0x1268))(piVar10[temp_v1 + 1]);
        *(unsigned char *)(temp_v2 + 0x1264) = 0;
      }
      break;
    case 8:
      temp_v3 = param_2[10];
      temp_v15 = param_2[2];
      temp_v16 = param_2[3];
      temp_v17 = param_2[4];
      temp_v18 = param_2[6];
      temp_v19 = param_2[7];
      temp_v20 = param_2[8];
      temp_v7 = *(unsigned int *)(DAT_0044ea00 + 0x528);
      temp_v4 = FUN_0024ac4c(temp_v7);
      FUN_002630e0(&temp_v15,0,temp_v4);
      FUN_002630e0(&temp_v18,0,temp_v4,&temp_v18);
      FUN_002c1b64(DAT_0044ea00,0);
      FUN_002c39a4(DAT_0044ea00);
      FUN_00263028((temp_v3 << 0x18) | (((temp_v3 & 0xffff) >> 8) << 0x10) |
                   (((temp_v3 & 0xffffff) >> 0x10) << 8) | (temp_v3 >> 0x18));
      temp_v7 = FUN_0024ac4c(temp_v7);
      FUN_002c4f8c(DAT_0044ea00,temp_v7);
      break;
    case 9:
      temp_v15 = param_2[2];
      temp_v16 = param_2[3];
      temp_v17 = param_2[4];
      temp_v7 = FUN_002c501c();
      FUN_002630e0(&temp_v15,0,temp_v7,param_2 + 2);
      temp_v17 = 0;
      FUN_002c1b64(DAT_0044ea00,0);
      FUN_002b011c();
      FUN_002573c8(0xffffffff);
      FUN_002573c8(0xffffffff);
      FUN_002573c8(0xffffffff);
      FUN_002573c8(0xffffffff);
      FUN_0025b750();
      break;
    case 10:
      temp_v7 = param_2[8];
      nn_math_ARMv6_MTX44TransposeAsm(&temp_v15,param_2 + 9);
      FUN_002cbc40(param_2 + 2,temp_v7,&temp_v15);
      break;
    case 0xb:
      puVar11 = (unsigned int *)param_2[2];
      temp_v7 = 0;
      temp_v0 = *(short *)(puVar11 + 0x11);
      if (temp_v0 == 1) {
        temp_v7 = puVar11[0xe];
      }
      else if (temp_v0 != 2) {
        if (temp_v0 == 8) {
          temp_v7 = puVar11[0xf];
        }
      }
      else {
        FUN_00256f88(puVar11[0x10],*(unsigned short *)((int)puVar11 + 0x46));
        FUN_00256dbc(puVar11[0x10],&temp_v15);
        *(short *)((int)puVar11 + 0x46) = *(short *)((int)puVar11 + 0x46) + 1;
        temp_v7 = temp_v20;
      }
      VectorSignedToFloat(*puVar11,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(puVar11[1] + 0xea,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002c1b64(DAT_0044ea00,temp_v7,puVar11[1] + 0xea);
      temp_v0 = *(short *)(puVar11 + 0x11);
      if (temp_v0 != 1) {
        if (temp_v0 != 2) {
          if (temp_v0 == 8) {
            FUN_002b7d30();
          }
        }
        else {
          FUN_002b7d30();
        }
      }
      else {
        FUN_002b7d30();
      }
      break;
    case 0xc:
      temp_v7 = param_2[6];
      temp_v12 = *(unsigned long long *)(param_2 + 2);
      FUN_002c1b64(DAT_0044ea00,0);
      temp_v15 = 0xffffffff;
      temp_v16 = 0xff64646;
      FUN_002f2ea0((int)(float)temp_v12,(int)(float)((unsigned long long)temp_v12 >> 0x20),0x80);
      temp_v15 = 0xffffff00;
      temp_v16 = 0xff000000;
      FUN_002f2ea0((int)((float)temp_v12 + 48.0f),(int)((float)((unsigned long long)temp_v12 >> 0x20) + 48.0f),0x20
                  );
      FUN_002c1b64(DAT_0044ea00,temp_v7);
      FUN_002b7d30();
      FUN_002c1b64(DAT_0044ea00,0);
      FUN_00263028(0xffffffff);
      FUN_00263028(0xffffffff);
      FUN_00263028(0xff0000ff);
      FUN_00263028(0xff0000ff);
    }
    param_2 = piVar9;
    if (param_3 != 0) {
      FUN_002c415c();
    }
  } while( 1 );
}
