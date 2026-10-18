/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b457c` (_code @ 0x4b457c, 0x884 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 25 slot(s), 100 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_3_stack;

extern unsigned char LAB_004b4d30; /* 0x4b4d30 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_0015688c(void);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: FUN_0016432c. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184e64. */
/* Supplied declaration required: FUN_00185dd4. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_002e342c. */
extern int FUN_003e4940(void);
extern int FUN_004ccbf0(int);


void FUN_004b457c(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int *piVar8;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  int temp_v27;
  unsigned int temp_v28;
  int temp_v29;
  int temp_v30;
  int iStack_30;
  int temp_v31;
  int iStack_28;
  
  temp_v10 = 0.27f;
  temp_v28 = 0x1d;
  iStack_30 = param_1;
  temp_v31 = param_2;
  iStack_28 = param_3;
  FUN_001879d0(DAT_0059dbb4);
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  temp_v17 = 0;
  temp_v18 = 0;
  temp_v19 = 0;
  temp_v20 = 0;
  temp_v21 = 0;
  temp_v7 = (int)temp_v10 + temp_v31;
  temp_v22 = 0;
  temp_v23 = 0;
  temp_v24 = 0;
  temp_v25 = 0;
  temp_v26 = 0;
  temp_v0 = FUN_0015688c();
  temp_v1 = FUN_003e4940();
  temp_v2 = DAT_0059dbb4;
  if (temp_v1 != 0) {
    temp_v8 = (unsigned int)*(unsigned short *)(temp_v0 + 100);
    temp_v1 = FUN_00169294(6,1,0);
    piVar8 = (int *)(temp_v2 + 0x12b8);
    temp_v6 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v1;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v6 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    temp_v2 = FUN_001834a4(temp_v28,0x137);
    temp_v27 = (int)*(short *)(temp_v2 + 10);
    temp_v29 = (int)*(short *)(temp_v2 + 8);
    FUN_001835b4(2,temp_v28,0x136,temp_v29 + temp_v7,temp_v27 + param_3,0x6a);
    temp_v2 = DAT_0059dbb4;
    temp_v1 = FUN_00169294(6,7,0);
    piVar8 = (int *)(temp_v2 + 0x12b8);
    temp_v6 = piVar8[*piVar8 + 2];
    piVar8[*piVar8 + 2] = temp_v1;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v6 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
    param_3 = param_3 + temp_v27;
    temp_v7 = temp_v7 + temp_v29;
    temp_v30 = param_3;
    FUN_001835b4(2,temp_v28,0x134,temp_v7,param_3,0x6a);
    FUN_001835b4(2,temp_v28,0x135,temp_v7,param_3,0x6a);
    FUN_001835b4(2,temp_v28,0x12d,temp_v7,param_3,0x6a);
    FUN_001835b4(2,temp_v28,0x12e,temp_v7,param_3,0x6a);
    FUN_001835b4(2,temp_v28,0x12f,temp_v7,param_3,0x6a);
    FUN_001835b4(2,temp_v28,0x130,temp_v7,param_3,0x6a);
    FUN_001835b4(2,temp_v28,0x131,temp_v7,param_3,0x6a);
    FUN_001835b4(2,temp_v28,0x132,temp_v7,param_3,0x6a);
    FUN_001835b4(2,temp_v28,0x133,temp_v7,param_3,0x6a);
    temp_v2 = FUN_001834a4(temp_v28,0x138);
    FUN_0018152c((int)*(short *)(temp_v0 + 0x62),*(short *)(temp_v2 + 8) + temp_v7,
                 *(short *)(temp_v2 + 10) + param_3,0x6a,0);
    temp_v2 = FUN_001834a4(temp_v28,0x7d1);
    FUN_001835b4(2,temp_v28,2000,*(short *)(temp_v2 + 8) + temp_v7,*(short *)(temp_v2 + 10) + param_3,0x6a
                );
    temp_v2 = FUN_001834a4(temp_v28,0x14c);
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 300);
    FUN_0016432c(temp_v3);
    FUN_002e342c(&temp_v11,temp_v3);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,0xff,&temp_v11);
    FUN_001835b4(2,temp_v28,0x13a,temp_v7,param_3,0x74);
    FUN_001835b4(2,temp_v28,0x139,temp_v7,param_3,0x74);
    temp_v4 = (unsigned int)*(short *)(param_1 + 0x7c72);
    temp_v9 = temp_v4 == 0;
    temp_v3 = temp_v4;
    temp_v5 = temp_v4;
    if ((int)temp_v4 < 1) {
      temp_v5 = (unsigned int)*(short *)(param_1 + 0x7c78);
      temp_v3 = temp_v8 - temp_v5;
      temp_v9 = temp_v8 == temp_v5;
    }
    if (!(temp_v9 || (int)temp_v3 < 0 != ((int)temp_v4 < 1 && SBORROW4(temp_v8,temp_v5)))) {
      FUN_001835b4(2,temp_v28,0x141,temp_v7,param_3,0x74);
      FUN_001835b4(2,temp_v28,0x15b,temp_v7,param_3,0x74);
    }
    else {
      FUN_001835b4(2,temp_v28,0x140,temp_v7,param_3,0x74);
    }
    temp_v2 = FUN_001834a4(temp_v28,0x149);
    FUN_00184e64(0xff);
    FUN_00180310(6,*(short *)(temp_v2 + 8) + temp_v7,*(short *)(temp_v2 + 10) + param_3,1,3,0x79,
                 &LAB_004b4d30,(int)*(short *)(param_1 + 0x7c72) + temp_v8);
    FUN_00183bb0();
    temp_v2 = FUN_001834a4(temp_v28,0x148);
    FUN_00184e64(0x57d8ffff);
    if (*(char *)(param_1 + 0x7c76) != '\0') {
      temp_v0 = 0;
    }
    else {
      temp_v0 = FUN_004ccbf0((int)*(short *)(param_1 + 0x7c72) + temp_v8);
      temp_v0 = temp_v0 - ((*(unsigned int *)(param_1 + 0x7c68) >> 0xc) | (*(int *)(param_1 + 0x7c6c) << 0x14));
    }
    FUN_00180310(0,*(short *)(temp_v2 + 8) + temp_v7,*(short *)(temp_v2 + 10) + param_3,1,7,0x79,
                 &LAB_004b4d30,temp_v0);
    FUN_00183bb0();
    temp_v2 = FUN_001834a4(temp_v28,0x13b);
    if (*(char *)(param_1 + 0x7c76) != '\0') {
      FUN_001835b4(2,temp_v28,0x13e,temp_v7,param_3,0x79);
      if (*(short *)(param_1 + 0x7c74) < 8) {
        VectorSignedToFloat((int)*(short *)(param_1 + 0x7c74),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001677c0();
      }
      FUN_001835b4(2,temp_v28,0x13f,temp_v7,param_3,0x7e);
      FUN_001677c0();
    }
    else {
      FUN_00185dd4(2,temp_v28,0x13b,temp_v7,param_3,(int)*(short *)(param_1 + 0x7c70),
                   (int)*(short *)(*(int *)(temp_v2 + 0xc) + 2),0x79);
    }
    if (*(char *)(param_1 + 0x7c76) == '\0') {
      FUN_001835b4(2,temp_v28,0x13c,*(short *)(param_1 + 0x7c70) + temp_v7,param_3,0x7e);
      FUN_001835b4(2,temp_v28,0x13d,*(short *)(param_1 + 0x7c70) + temp_v7,temp_v30,0x7e);
    }
    temp_v10 = 0.26f;
    FUN_001879d0(DAT_0059dbb4);
    temp_v0 = (int)temp_v10 + temp_v31;
    FUN_001834a4(temp_v28,0x137);
    FUN_001834a4(temp_v28,0x14c);
    temp_v2 = 0;
    temp_v3 = 1;
    do {
      if (temp_v3 <= *(unsigned int *)(param_1 + 0x7c58)) {
        VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001634b4(param_1 + (temp_v2 + 0x3c) * 0x8c + 0x20);
      }
      temp_v1 = DAT_0059dbb4;
      temp_v2 = temp_v2 + 1;
      temp_v3 = temp_v3 * 10;
    } while ((int)temp_v3 < 1000000);
    if (*(char *)(param_1 + 0x7c76) != '\0') {
      temp_v2 = FUN_00169294(6,1,0);
      piVar8 = (int *)(temp_v1 + 0x12b8);
      temp_v7 = piVar8[*piVar8 + 2];
      piVar8[*piVar8 + 2] = temp_v2;
      if (*(char *)(temp_v1 + 0x12d0) != '\0' || temp_v7 != temp_v2) {
        (**(romwright_code **)(temp_v1 + 0x12d4))();
        *(unsigned char *)(temp_v1 + 0x12d0) = 0;
      }
      VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001634b4(param_1 + 0x3270);
      temp_v2 = DAT_0059dbb4;
      temp_v1 = FUN_00169294(6,7,0);
      piVar8 = (int *)(temp_v2 + 0x12b8);
      temp_v7 = piVar8[*piVar8 + 2];
      piVar8[*piVar8 + 2] = temp_v1;
      if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v7 != temp_v1) {
        (**(romwright_code **)(temp_v2 + 0x12d4))();
        *(unsigned char *)(temp_v2 + 0x12d0) = 0;
      }
    }
    temp_v4 = (unsigned int)*(short *)(param_1 + 0x7c72);
    temp_v9 = temp_v4 == 0;
    temp_v3 = temp_v4;
    temp_v5 = temp_v4;
    if ((int)temp_v4 < 1) {
      temp_v5 = (unsigned int)*(short *)(param_1 + 0x7c78);
      temp_v3 = temp_v8 - temp_v5;
      temp_v9 = temp_v8 == temp_v5;
    }
    if (!temp_v9 && (int)temp_v3 < 0 == ((int)temp_v4 < 1 && SBORROW4(temp_v8,temp_v5))) {
      temp_v2 = (int)*(short *)(param_1 + 0x7c74);
      if ((0 < temp_v2) && (temp_v2 < 8)) {
        VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      }
      FUN_001677c0();
      temp_v1 = FUN_001834a4(temp_v28,0x14d);
      temp_v7 = FUN_001834a4(temp_v28,0x1b);
      temp_v2 = temp_v30;
      temp_v0 = temp_v0 + temp_v29;
      FUN_001835b4(2,temp_v28,0x1b,(*(short *)(temp_v1 + 8) + temp_v0) - (int)*(short *)(temp_v7 + 8),
                   (*(short *)(temp_v1 + 10) + temp_v30) - (int)*(short *)(temp_v7 + 10),0xce);
      FUN_001677c0();
      temp_v1 = FUN_001834a4(temp_v28,0x14d);
      FUN_001835b4(2,temp_v28,0x1c,(*(short *)(temp_v1 + 8) + temp_v0) - (int)*(short *)(temp_v7 + 8),
                   (*(short *)(temp_v1 + 10) + temp_v2) - (int)*(short *)(temp_v7 + 10),0xce);
      FUN_001677c0();
    }
  }
  return;
}
