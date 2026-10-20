/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025f6b8` (_code @ 0x25f6b8, 0x2af0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025765c(...);
int FUN_0026e6a0(...);
int FUN_00288790(...);
int FUN_00288844(...);
int FUN_0028f048(...);
int FUN_00293f10(...);
int FUN_0029a268(...);
int FUN_002b05d0(...);
int FUN_002b2650(...);
int FUN_002b6758(...);
int FUN_002b6940(...);
int FUN_002b70cc(void);
int FUN_002bcf4c(...);
int FUN_002bed3c(void);
int FUN_002bf380(...);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(...);

int FUN_0026242c(void);
int FUN_00269bf0(void);
int FUN_002888a8(...);
int FUN_00288ddc(...);
int FUN_0029a17c(...);
int FUN_002b6dd8(...);
int FUN_002bdf94(...);
int FUN_002be304(...);
int FUN_002be5a4(...);
int FUN_002be624(...);
int FUN_002be90c(...);
int FUN_002beda4(...);
int FUN_002bf288(...);
int FUN_002bf4f8(...);
int FUN_002bf538(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_5: 31 slot(s), 124 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
} param_5_stack;

extern unsigned char LAB_00260730; /* 0x260730 */
extern unsigned char LAB_00260738; /* 0x260738 */
extern unsigned char DAT_00435e00; /* 0x435e00 */
extern unsigned char DAT_00435e01; /* 0x435e01 */
extern unsigned char DAT_00435e02; /* 0x435e02 */
extern unsigned char DAT_00435e03; /* 0x435e03 */
extern unsigned int DAT_00435e04; /* 0x435e04 */
extern float DAT_00435e08; /* 0x435e08 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0025765c. */
/* Supplied declaration required: FUN_0026242c. */
/* Supplied declaration required: FUN_00269bf0. */
/* Supplied declaration required: FUN_0026e6a0. */
/* Supplied declaration required: FUN_00288790. */
/* Supplied declaration required: FUN_00288844. */
/* Supplied declaration required: FUN_002888a8. */
extern int isLowThreshold(int, int);
/* Supplied declaration required: FUN_00288ddc. */
extern int FUN_0028dba8(unsigned int);
/* Supplied declaration required: FUN_0028f048. */
extern int btlGetMainState(void);
/* Supplied declaration required: FUN_00293f10. */
/* Supplied declaration required: FUN_0029a17c. */
/* Supplied declaration required: FUN_0029a268. */
extern int FUN_002a8740(int);
/* Supplied declaration required: FUN_002b05d0. */
/* Supplied declaration required: FUN_002b2650. */
extern int FUN_002b63ac(void);
/* Supplied declaration required: FUN_002b6758. */
/* Supplied declaration required: FUN_002b6940. */
extern int FUN_002b6a54(int, unsigned short);
extern int FUN_002b6ad0(void);
extern int gameGetOptions(void);
/* Supplied declaration required: FUN_002b6dd8. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: FUN_002bcf4c. */
extern unsigned int FUN_002bd068(unsigned short);
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be304. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002be90c. */
/* Supplied declaration required: FUN_002bed3c. */
extern int FUN_002bed98(int);
/* Supplied declaration required: FUN_002beda4. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_0025f6b8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: irregular input(s): in_fpscr; 33 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char *puVar10;
  unsigned int *puVar11;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int *puVar17;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  int *piVar21;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int in_fpscr;
  unsigned int temp_v19;
  float temp_v20;
  unsigned int temp_v21;
  float temp_v22;
  float temp_v23;
  unsigned long long temp_v24;
  short temp_v25;
  short temp_v26;
  int temp_v27;
  int temp_v28;
  unsigned char temp_v29 [40];
  unsigned char temp_v30 [8];
  int temp_v31;
  int temp_v32;
  int temp_v33;
  int temp_v34;
  int temp_v35;
  int temp_v36;
  unsigned int *temp_v37;
  int temp_v38;
  unsigned int temp_v39 [5];
  unsigned char temp_v40 [8];
  unsigned char temp_v41 [8];
  int temp_v42;
  int temp_v43;
  int temp_v44;
  int temp_v45;
  int iStack_34;
  int temp_v46;
  int temp_v47;
  int iStack_28;
  
  temp_v34 = param_1 + 0x3000;
  temp_v24 = 0x3f80000000000000;
  temp_v47 = param_3;
  if (*(char *)(param_1 + 0x3084) != '\0') {
    temp_v47 = 1;
  }
  temp_v28 = param_4 * 8;
  if (temp_v28 >= 0x29) {
    temp_v28 = 0x28;
  }
  temp_v3 = *(int *)(param_1 + 0x3884);
  temp_v27 = 0;
  temp_v4 = *(int *)(param_1 + 0x3888);
  temp_v15 = 0;
  temp_v31 = 0;
  temp_v37 = (unsigned int *)(param_1 + 0x3800);
  temp_v35 = param_1 + 0x9f8;
  temp_v38 = param_1 + 0x12b8;
  temp_v42 = temp_v28 - (temp_v28 >> 0x1f);
  iStack_34 = param_1;
  temp_v46 = param_2;
  iStack_28 = param_4;
  do {
    temp_v24 = temp_v24 & 0xffffffff00000000;
    FUN_002bf538();
    temp_v5 = FUN_002bf4f8(0x15,temp_v15 + 0x36);
    temp_v36 = param_1 + temp_v15 * 0x8c;
    temp_v16 = temp_v36 + 0x73c;
    temp_v6 = FUN_002beda4(temp_v16);
    temp_v26 = *(short *)(temp_v5 + 8);
    temp_v16 = FUN_002bed98(temp_v16);
    temp_v25 = *(short *)(temp_v5 + 10);
    temp_v5 = FUN_002beda4(temp_v38);
    temp_v7 = FUN_002bed98(temp_v38);
    temp_v12 = param_1 + temp_v15;
    temp_v43 = temp_v12 + 0x5900;
    temp_v6 = temp_v6 + temp_v26 + temp_v5 + temp_v3;
    temp_v5 = temp_v7 + temp_v16 + temp_v25 + temp_v4;
    if (*(char *)(temp_v12 + 0x5925) != '\0') {
      temp_v16 = FUN_002bf4f8(0x15,temp_v15 + 0x46);
      temp_v7 = *(int *)(param_1 + temp_v15 * 4 + 0x592c);
      temp_v10 = (unsigned int)(temp_v24 >> 0x20);
      if (temp_v7 < 7) {
        VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v24 = (unsigned long long)temp_v10 << 0x20;
        temp_v5 = ((int)*(short *)(*(int *)(temp_v16 + 0xc) + 2) / 7) * temp_v7 + temp_v5;
      }
      else if (temp_v7 < 0x16) {
        temp_v24 = (unsigned long long)temp_v10 << 0x20;
        temp_v5 = temp_v5 + *(short *)(*(int *)(temp_v16 + 0xc) + 2);
      }
      else if (temp_v7 < 0x1e) {
        temp_v8 = (int)*(short *)(*(int *)(temp_v16 + 0xc) + 2);
        temp_v8 = ((int)(temp_v8 + ((unsigned int)(temp_v8 >> 0x1f) >> 0x1d)) >> 3) * (0x16 - temp_v7) + temp_v8;
        if (*(char *)(temp_v43 + 0x4a) != '\0') {
          temp_v5 = temp_v5 + temp_v8;
          VectorSignedToFloat(temp_v7 - 0x16,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v24 = (unsigned long long)temp_v10 << 0x20;
        }
        else {
          temp_v5 = temp_v5 - temp_v8;
          VectorSignedToFloat(temp_v7 - 0x16,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v24 = (unsigned long long)temp_v10 << 0x20;
        }
      }
      FUN_002bf538();
      temp_v7 = g_titleScene;
      piVar21 = (int *)(g_titleScene + 0x130c);
      temp_v8 = piVar21[*piVar21 + 2];
      piVar21[*piVar21 + 2] = 3;
      if (*(char *)(temp_v7 + 0x1324) != '\0' || temp_v8 != 3) {
        (**(romwright_code **)(temp_v7 + 0x1328))(3);
        *(unsigned char *)(temp_v7 + 0x1324) = 0;
      }
      FUN_0029a17c((int)*(short *)(temp_v16 + 8),(int)*(short *)(temp_v16 + 10),
                   (int)**(short **)(temp_v16 + 0xc),(*(short **)(temp_v16 + 0xc))[1] - temp_v28,1);
    }
    temp_v16 = g_titleScene;
    if (!(*(char *)(temp_v12 + 0x38d1) == '\0' || temp_v15 < 1)) {
      if (temp_v46 != 0) {
        temp_v7 = FUN_002bf4f8(0x15,0x3a);
        temp_v16 = g_titleScene;
        piVar21 = (int *)(g_titleScene + 0x130c);
        temp_v12 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = 3;
        if (*(char *)(temp_v16 + 0x1324) != '\0' || temp_v12 != 3) {
          (**(romwright_code **)(temp_v16 + 0x1328))(3);
          *(unsigned char *)(temp_v16 + 0x1324) = 0;
        }
        FUN_0029a17c(*(short *)(temp_v7 + 8) + temp_v6,*(short *)(temp_v7 + 10) + temp_v5,
                     (int)**(short **)(temp_v7 + 0xc),(*(short **)(temp_v7 + 0xc))[1] - temp_v28,1);
        temp_v16 = g_titleScene;
        temp_v7 = packNibblesAndByte(6,1,0);
        piVar21 = (int *)(temp_v16 + 0x12ac);
        temp_v12 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = temp_v7;
        if (*(char *)(temp_v16 + 0x12c4) != '\0' || temp_v12 != temp_v7) {
          (**(romwright_code **)(temp_v16 + 0x12c8))(temp_v7);
          *(unsigned char *)(temp_v16 + 0x12c4) = 0;
        }
        FUN_002bf288(2,0x15,0x3a,temp_v6,temp_v5,6);
        temp_v16 = g_titleScene;
        temp_v7 = packNibblesAndByte(6,7,0);
        piVar21 = (int *)(temp_v16 + 0x12ac);
        temp_v12 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = temp_v7;
        if (*(char *)(temp_v16 + 0x12c4) != '\0' || temp_v12 != temp_v7) {
          (**(romwright_code **)(temp_v16 + 0x12c8))();
          *(unsigned char *)(temp_v16 + 0x12c4) = 0;
        }
        temp_v16 = FUN_002bf4f8(0x15,0x45);
        FUN_002bf288(2,0x15,0x1b,
                     (int)*(short *)(temp_v16 + 8) + temp_v6 + (int)**(short **)(temp_v16 + 0xc) / 2,
                     ((int)*(short *)(temp_v16 + 10) + temp_v5 + (int)(*(short **)(temp_v16 + 0xc))[1] / 2
                     ) - (temp_v42 >> 1),0xb);
        temp_v5 = g_titleScene;
        piVar21 = (int *)(g_titleScene + 0x130c);
        temp_v6 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = 0;
        if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v6 != 0) {
          (**(romwright_code **)(temp_v5 + 0x1328))();
          *(unsigned char *)(temp_v5 + 0x1324) = 0;
        }
      }
      else {
        temp_v7 = packNibblesAndByte(6,1,0);
        piVar21 = (int *)(temp_v16 + 0x12ac);
        temp_v12 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = temp_v7;
        if (*(char *)(temp_v16 + 0x12c4) != '\0' || temp_v12 != temp_v7) {
          (**(romwright_code **)(temp_v16 + 0x12c8))(temp_v7);
          *(unsigned char *)(temp_v16 + 0x12c4) = 0;
        }
        FUN_002bf288(2,0x15,0,temp_v6,temp_v5,6);
        temp_v16 = g_titleScene;
        temp_v7 = packNibblesAndByte(6,7,0);
        piVar21 = (int *)(temp_v16 + 0x12ac);
        temp_v12 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = temp_v7;
        if (*(char *)(temp_v16 + 0x12c4) != '\0' || temp_v12 != temp_v7) {
          (**(romwright_code **)(temp_v16 + 0x12c8))(temp_v7);
          *(unsigned char *)(temp_v16 + 0x12c4) = 0;
        }
        temp_v16 = FUN_002bf4f8(0x15,0x35);
        FUN_002bf288(2,0x15,0x1b,
                     (int)*(short *)(temp_v16 + 8) +
                     temp_v6 + ((*(unsigned short *)(temp_v16 + 4) & 0xffff7fff) >> 1),
                     (int)*(short *)(temp_v16 + 10) +
                     temp_v5 + ((*(unsigned short *)(temp_v16 + 6) & 0xffff7fff) >> 1),0xb);
      }
    }
    else {
      if (temp_v46 != 0) {
        temp_v7 = FUN_002bf4f8(0x15,0x3a);
        temp_v16 = g_titleScene;
        if (*(char *)(temp_v43 + 0x25) == '\0') {
          piVar21 = (int *)(g_titleScene + 0x130c);
          temp_v8 = piVar21[*piVar21 + 2];
          piVar21[*piVar21 + 2] = 3;
          if (*(char *)(temp_v16 + 0x1324) != '\0' || temp_v8 != 3) {
            (**(romwright_code **)(temp_v16 + 0x1328))(3);
            *(unsigned char *)(temp_v16 + 0x1324) = 0;
          }
          FUN_0029a17c(*(short *)(temp_v7 + 8) + temp_v6,*(short *)(temp_v7 + 10) + temp_v5,
                       (int)**(short **)(temp_v7 + 0xc),(*(short **)(temp_v7 + 0xc))[1] - temp_v28,1);
        }
        temp_v16 = g_titleScene;
        temp_v7 = packNibblesAndByte(6,1,0);
        piVar21 = (int *)(temp_v16 + 0x12ac);
        temp_v8 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = temp_v7;
        if (*(char *)(temp_v16 + 0x12c4) != '\0' || temp_v8 != temp_v7) {
          (**(romwright_code **)(temp_v16 + 0x12c8))();
          *(unsigned char *)(temp_v16 + 0x12c4) = 0;
        }
        FUN_002bf288(2,0x15,0x3a,temp_v6,temp_v5,6);
        temp_v16 = g_titleScene;
        temp_v7 = packNibblesAndByte(6,7,0);
        piVar21 = (int *)(temp_v16 + 0x12ac);
        temp_v8 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = temp_v7;
        if (*(char *)(temp_v16 + 0x12c4) != '\0' || temp_v8 != temp_v7) {
          (**(romwright_code **)(temp_v16 + 0x12c8))();
          *(unsigned char *)(temp_v16 + 0x12c4) = 0;
        }
        temp_v10 = (unsigned int)(temp_v24 >> 0x20);
        if (*(char *)(temp_v12 + 0x38cc) != '\0') {
          if (temp_v15 != 0) {
            if (*(char *)(temp_v36 + 0xa82) != '\0') {
              temp_v16 = FUN_002bf4f8(0x15,0x45);
              temp_v7 = temp_v36 + 0xc28;
              temp_v8 = FUN_002beda4();
              temp_v7 = FUN_002bed98(temp_v7);
              FUN_002bf538();
              FUN_002bf288(2,0x15,0x1b,
                           *(short *)(temp_v16 + 8) + temp_v6 +
                           temp_v8 + (int)**(short **)(temp_v16 + 0xc) / 2,
                           temp_v7 + (int)(*(short **)(temp_v16 + 0xc))[1] / 2 +
                           *(short *)(temp_v16 + 10) + temp_v5,0x1f);
              FUN_002bf538();
            }
            temp_v24 = (unsigned long long)temp_v10 << 0x20;
            FUN_002bf538();
          }
          else {
            temp_v24 = (unsigned long long)temp_v10 << 0x20;
            FUN_002bf538();
            if (*(char *)((int)temp_v37 + 0xd1) != '\0') {
              temp_v24 = temp_v24 & 0xffffffff00000000;
              FUN_002bf538();
            }
          }
        }
        else if (temp_v15 == 0) {
          if (*(char *)((int)temp_v37 + 0xd1) != '\0') {
            temp_v24 = temp_v24 & 0xffffffff00000000;
            FUN_002bf538();
          }
        }
        FUN_002bf288(2,0x15,0x3b,temp_v6,temp_v5,0xb);
        FUN_002bf288(2,0x15,0x3c,temp_v6,temp_v5,0xb);
        FUN_002bf288(2,0x15,0x3d,temp_v6,temp_v5,0xb);
        FUN_002bf288(2,0x15,0x3e,temp_v6,temp_v5 - temp_v28,0xb);
        temp_v16 = g_titleScene;
        if (*(char *)(temp_v43 + 0x25) == '\0') {
          piVar21 = (int *)(g_titleScene + 0x130c);
          temp_v7 = piVar21[*piVar21 + 2];
          piVar21[*piVar21 + 2] = 0;
          if (*(char *)(temp_v16 + 0x1324) != '\0' || temp_v7 != 0) {
            (**(romwright_code **)(temp_v16 + 0x1328))(0);
            *(unsigned char *)(temp_v16 + 0x1324) = 0;
          }
        }
      }
      else {
        temp_v7 = packNibblesAndByte(6,1,0);
        piVar21 = (int *)(temp_v16 + 0x12ac);
        temp_v8 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = temp_v7;
        if (*(char *)(temp_v16 + 0x12c4) != '\0' || temp_v8 != temp_v7) {
          (**(romwright_code **)(temp_v16 + 0x12c8))();
          *(unsigned char *)(temp_v16 + 0x12c4) = 0;
        }
        FUN_002bf288(2,0x15,0,temp_v6,temp_v5,6);
        temp_v16 = g_titleScene;
        temp_v7 = packNibblesAndByte(6,7,0);
        piVar21 = (int *)(temp_v16 + 0x12ac);
        temp_v8 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = temp_v7;
        if (*(char *)(temp_v16 + 0x12c4) != '\0' || temp_v8 != temp_v7) {
          (**(romwright_code **)(temp_v16 + 0x12c8))();
          *(unsigned char *)(temp_v16 + 0x12c4) = 0;
        }
        temp_v10 = (unsigned int)(temp_v24 >> 0x20);
        if (*(char *)(temp_v12 + 0x38cc) != '\0') {
          if (temp_v15 != 0) {
            if (*(char *)(temp_v36 + 0xa82) != '\0') {
              temp_v16 = FUN_002bf4f8(0x15,0x35);
              temp_v7 = temp_v36 + 0xc28;
              temp_v8 = FUN_002beda4();
              temp_v7 = FUN_002bed98(temp_v7);
              FUN_002bf538();
              FUN_002bf288(2,0x15,0x1b,
                           *(short *)(temp_v16 + 8) + temp_v6 +
                           temp_v8 + (int)**(short **)(temp_v16 + 0xc) / 2,
                           temp_v7 + (int)(*(short **)(temp_v16 + 0xc))[1] / 2 +
                           *(short *)(temp_v16 + 10) + temp_v5,0x1f);
              FUN_002bf538();
            }
            temp_v24 = (unsigned long long)temp_v10 << 0x20;
            FUN_002bf538();
          }
          else {
            temp_v24 = (unsigned long long)temp_v10 << 0x20;
            FUN_002bf538();
          }
        }
        if ((*(char *)(temp_v12 + 0x38d1) != '\0') && (temp_v15 == 0)) {
          temp_v24 = temp_v24 & 0xffffffff00000000;
          FUN_002bf538();
        }
        FUN_002bf288(2,0x15,1,temp_v6,temp_v5,0xb);
        FUN_002bf288(2,0x15,2,temp_v6,temp_v5,0xb);
        FUN_002bf288(2,0x15,3,temp_v6,temp_v5,0xb);
        FUN_002bf288(2,0x15,4,temp_v6,temp_v5,0xb);
      }
      FUN_002bf288(2,0x15,6,temp_v6,temp_v5,0xe);
      FUN_002bf288(2,0x15,7,temp_v6,temp_v5,0xe);
      FUN_002bf288(2,0x15,8,temp_v6,temp_v5,0xe);
      FUN_002bf288(2,0x15,9,temp_v6,temp_v5,0xe);
      temp_v16 = param_1 + temp_v15 * 2;
      temp_v8 = 0;
      temp_v7 = 0;
      if (*(char *)(temp_v12 + 0x37bc) != '\0') {
        temp_v7 = param_1 + temp_v15 * 4;
        temp_v26 = (short)*(unsigned int *)(temp_v7 + 0x37c8);
        temp_v8 = (int)temp_v26;
        temp_v25 = (short)*(unsigned int *)(temp_v7 + 0x37dc);
        temp_v7 = (int)temp_v25;
        if (*(char *)(temp_v12 + 0x3804) == '\0') {
          temp_v8 = (int)-temp_v26;
          temp_v7 = (int)-temp_v25;
        }
      }
      temp_v44 = temp_v16;
      FUN_002be624(temp_v41,&LAB_00260730,(int)*(short *)(temp_v16 + 0x38ea));
      temp_v45 = 0;
      if (temp_v15 != 0) {
        if (-1 < *(short *)(temp_v16 + 0x38f4)) {
          temp_v12 = param_1 + temp_v15 * 0x604;
          if (*(short *)(temp_v12 + 0x3946) != 0) {
            temp_v13 = temp_v12 + 0x3900;
            *(unsigned short *)(temp_v16 + 0x38d6) = *(unsigned short *)(temp_v12 + 0x392a);
            *(unsigned short *)(temp_v16 + 0x38e0) = *(unsigned short *)(temp_v12 + 0x392c);
          }
          else {
            temp_v13 = FUN_002a8740((int)*(short *)(temp_v16 + 0x38f4));
          }
          temp_v12 = temp_v13;
          FUN_00269bf0();
          temp_v27 = (int)(short)temp_v12;
          temp_v31 = (int)*(short *)(temp_v13 + 0x10);
          temp_v18 = FUN_002bd068(*(unsigned short *)(temp_v13 + 0x46));
          FUN_002be624(temp_v29,&LAB_00260738,temp_v18);
          temp_v45 = FUN_00288ddc(temp_v27,*(unsigned short *)(temp_v13 + 0x46));
        }
      }
      else {
        temp_v13 = FUN_002b63ac();
        temp_v12 = temp_v13;
        FUN_0026242c();
        temp_v27 = (int)(short)temp_v12;
        temp_v31 = (int)*(short *)(temp_v13 + 0x1e);
        temp_v18 = FUN_002bd1fc();
        FUN_002be624(temp_v29,&LAB_00260738,temp_v18);
        temp_v45 = FUN_00288ddc(temp_v27,0xffffffff);
      }
      temp_v32 = param_1 + temp_v15 * 4;
      temp_v33 = *(int *)(temp_v32 + 0x3460);
      puVar17 = (unsigned int *)(temp_v32 + 0x37f0);
      temp_v12 = (int)*(short *)(temp_v16 + 0x38d6);
      if (temp_v33 != 0) {
        if (temp_v33 >= 1) {
          FUN_002be90c(temp_v12,temp_v27,temp_v33,0,0x15,10,0xd,0xc,0xb,temp_v6,temp_v5,0x15,0);
        }
        else {
          FUN_002be90c(temp_v12,temp_v27,temp_v33,0,0x15,10,0xd,0xc,0xb,temp_v6,temp_v5,0x15,0);
        }
      }
      else {
        FUN_002be90c(temp_v12,temp_v27,temp_v8,*puVar17,0x15,10,0xd,0xc,0xb,temp_v6,temp_v5,0x15,0);
      }
      if (*(int *)(temp_v32 + 0x3470) != 0) {
        FUN_002888a8((int)*(short *)(temp_v16 + 0x38e0),temp_v31,*(int *)(temp_v32 + 0x3470),0,0x15,
                     0xe,0x10,0xf,temp_v6,temp_v5,0x15,0);
      }
      else {
        FUN_002888a8((int)*(short *)(temp_v16 + 0x38e0),temp_v31,temp_v7,*puVar17,0x15,0xe,0x10,0xf,
                     temp_v6,temp_v5,0x15,0);
      }
      temp_v12 = (int)(short)(*(short *)(temp_v16 + 0x38d6) + (short)temp_v8);
      temp_v7 = (int)(short)(*(short *)(temp_v16 + 0x38e0) + (short)temp_v7);
      if (temp_v27 < temp_v12) {
        temp_v12 = temp_v27;
      }
      if (temp_v12 < 0) {
        temp_v12 = 0;
      }
      FUN_002be624(temp_v30,&LAB_00260730,temp_v12);
      if (temp_v31 < temp_v7) {
        temp_v7 = temp_v31;
      }
      if (temp_v7 < 0) {
        temp_v7 = 0;
      }
      FUN_002be624(temp_v40,&LAB_00260730,temp_v7);
      temp_v8 = FUN_002bf4f8(0x15,0x1c);
      puVar10 = temp_v29;
      FUN_002b6dd8(puVar10,1);
      temp_v7 = ((int)**(short **)(temp_v8 + 0xc) - (int)puVar10) / 2;
      VectorSignedToFloat(temp_v6 + temp_v7 + (int)*(short *)(temp_v8 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v8 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(1,0xffffffff,temp_v29,temp_v7);
      temp_v7 = isLowThreshold(temp_v12,temp_v27);
      if (temp_v7 != 0) {
        temp_v18 = 0xdc0f14ff;
        FUN_002be304(temp_v18);
      }
      else if (temp_v45 != 0) {
        temp_v18 = 0x6ef0ffff;
        FUN_002be304(temp_v18);
      }
      FUN_002bf538();
      temp_v7 = FUN_002bf4f8(0x15,0x20);
      FUN_002bdf94(0,*(short *)(temp_v7 + 8) + temp_v6,*(short *)(temp_v7 + 10) + temp_v5,1,4,0x10,
                   temp_v30);
      FUN_002bed3c();
      temp_v7 = FUN_002bf4f8(0x15,0x24);
      FUN_002bdf94(0,*(short *)(temp_v7 + 8) + temp_v6,*(short *)(temp_v7 + 10) + temp_v5,1,4,0x10,
                   temp_v40);
      if (temp_v46 != 0) {
        temp_v7 = FUN_002bf4f8(0x15,0x43);
      }
      else {
        temp_v7 = FUN_002bf4f8(0x15,0x33);
      }
      temp_v12 = g_titleScene;
      if (*(char *)(temp_v43 + 0x25) != '\0') {
        temp_v8 = FUN_002bf4f8(0x15,temp_v15 + 0x46);
        temp_v12 = g_titleScene;
        temp_v8 = (int)*(short *)(temp_v8 + 10) + (int)*(short *)(*(int *)(temp_v8 + 0xc) + 2);
        temp_v13 = *(short *)(temp_v7 + 10) + temp_v5;
        if (temp_v13 < temp_v8) {
          temp_v14 = (int)*(short *)(*(int *)(temp_v7 + 0xc) + 2);
          if (temp_v8 < (int)*(short *)(temp_v7 + 10) + temp_v5 + temp_v14) {
            temp_v14 = temp_v8 - temp_v13;
          }
          piVar21 = (int *)(g_titleScene + 0x130c);
          temp_v8 = piVar21[*piVar21 + 2];
          piVar21[*piVar21 + 2] = 0;
          if (*(char *)(temp_v12 + 0x1324) != '\0' || temp_v8 != 0) {
            (**(romwright_code **)(temp_v12 + 0x1328))(0);
            *(unsigned char *)(temp_v12 + 0x1324) = 0;
          }
          temp_v12 = g_titleScene;
          piVar21 = (int *)(g_titleScene + 0x130c);
          temp_v8 = piVar21[*piVar21 + 2];
          piVar21[*piVar21 + 2] = 3;
          if (*(char *)(temp_v12 + 0x1324) != '\0' || temp_v8 != 3) {
            (**(romwright_code **)(temp_v12 + 0x1328))(3);
            *(unsigned char *)(temp_v12 + 0x1324) = 0;
          }
          FUN_0029a17c(*(short *)(temp_v7 + 8) + temp_v6,*(short *)(temp_v7 + 10) + temp_v5,
                       (int)**(short **)(temp_v7 + 0xc),temp_v14 - temp_v28,1);
        }
      }
      else {
        piVar21 = (int *)(g_titleScene + 0x130c);
        temp_v8 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = 3;
        if (*(char *)(temp_v12 + 0x1324) != '\0' || temp_v8 != 3) {
          (**(romwright_code **)(temp_v12 + 0x1328))(3);
          *(unsigned char *)(temp_v12 + 0x1324) = 0;
        }
        FUN_0029a17c(*(short *)(temp_v7 + 8) + temp_v6,*(short *)(temp_v7 + 10) + temp_v5,
                     (int)**(short **)(temp_v7 + 0xc),(*(short **)(temp_v7 + 0xc))[1] - temp_v28,1);
      }
      temp_v7 = temp_v32;
      temp_v10 = *(unsigned int *)(temp_v32 + 0x385c);
      if ((int)temp_v10 >= 1) {
        temp_v23 = *(float *)(temp_v32 + 0x3870);
        if ((temp_v10 & 1) != 0) {
          temp_v23 = -temp_v23;
        }
        temp_v8 = (int)temp_v23;
        temp_v23 = (float)VectorSignedToFloat(0xf - temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v23 = temp_v23 * 1.5707964f * 0.06666667f * 40.743664f;
        temp_v12 = temp_v8;
        FUN_002b70cc();
        *(float *)(temp_v7 + 0x3870) = ((float)(temp_v24 >> 0x20) - temp_v23) * 8.0f;
      }
      else {
        temp_v12 = 0;
        temp_v8 = 0;
      }
      temp_v10 = 1;
      temp_v17 = 0;
      puVar11 = (unsigned int *)(temp_v32 + 0x351c);
      do {
        temp_v9 = 0;
        if (temp_v15 != 0) {
          if (-1 < *(short *)(temp_v16 + 0x38f4)) {
            temp_v7 = FUN_002a8740((int)*(short *)(temp_v16 + 0x38f4));
            temp_v9 = (unsigned int)*(unsigned short *)(temp_v7 + 0x44);
          }
        }
        else {
          temp_v7 = FUN_002b63ac();
          temp_v9 = (unsigned int)*(unsigned short *)(temp_v7 + 0x72);
        }
        if ((temp_v9 & (1 << (temp_v10 & 0xff))) != 0) {
          if (*puVar11 == temp_v17) {
            FUN_002b05d0((int)(short)temp_v10);
            FUN_002be304();
            break;
          }
          temp_v17 = (temp_v17 + 1) & 0xffff;
        }
        temp_v10 = temp_v10 + 1;
      } while ((int)temp_v10 < 0xb);
      temp_v7 = FUN_002bf4f8(0x15,0x44);
      if (temp_v15 != 0) {
        piVar21 = (int *)(temp_v32 + 0x340c);
        temp_v13 = *piVar21;
        if (0 < temp_v13) {
          temp_v13 = (int)(short)temp_v13;
          FUN_00293f10(temp_v13,1);
          if (temp_v13 != 0) {
            temp_v14 = temp_v12 + temp_v6 + (int)*(short *)(temp_v7 + 8);
            temp_v13 = (int)(short)*piVar21;
            temp_v11 = (int)*(short *)(temp_v7 + 10) + temp_v5 + temp_v8;
            FUN_0028f048(temp_v13,temp_v14,temp_v11,0x15,1);
          }
        }
      }
      else {
        temp_v11 = (int)*(short *)(temp_v7 + 10) + temp_v5 + temp_v8;
        temp_v14 = temp_v12 + temp_v6 + (int)*(short *)(temp_v7 + 8);
        temp_v13 = -1;
        FUN_0028f048(temp_v13,temp_v14,temp_v11,0x15,1);
      }
      temp_v7 = temp_v44;
      if (*(short *)(temp_v44 + 0x5950) != 0) {
        if (*(short *)(temp_v44 + 0x5950) == 5) {
          temp_v2 = 0;
          if (temp_v15 != 0) {
            if (-1 < *(short *)(temp_v16 + 0x38f4)) {
              temp_v13 = FUN_002a8740((int)*(short *)(temp_v16 + 0x38f4));
              temp_v2 = *(unsigned short *)(temp_v13 + 0x44);
            }
          }
          else {
            temp_v13 = FUN_002b63ac();
            temp_v2 = *(unsigned short *)(temp_v13 + 0x72);
          }
          if ((temp_v2 & 0x10) != 0) {
            FUN_002bf538();
            temp_v13 = g_titleScene;
            temp_v14 = packNibblesAndByte(6,1,0);
            piVar21 = (int *)(temp_v13 + 0x12ac);
            temp_v11 = piVar21[*piVar21 + 2];
            piVar21[*piVar21 + 2] = temp_v14;
            if (*(char *)(temp_v13 + 0x12c4) != '\0' || temp_v11 != temp_v14) {
              (**(romwright_code **)(temp_v13 + 0x12c8))();
              *(unsigned char *)(temp_v13 + 0x12c4) = 0;
            }
            temp_v17 = (unsigned int)DAT_00435e01;
            temp_v10 = (unsigned int)DAT_00435e02;
            temp_v22 = (float)VectorUnsignedToFloat((unsigned int)DAT_00435e00,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v20 = (float)VectorUnsignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v23 = (float)VectorUnsignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v19 = VectorFloatToUnsigned(temp_v22 * DAT_00435e08,3);
            temp_v21 = VectorFloatToUnsigned(temp_v20 * DAT_00435e08,3);
            temp_v9 = VectorFloatToUnsigned(temp_v23 * DAT_00435e08,3) & 0xff;
            temp_v13 = FUN_0026e6a0(temp_v19 & 0xff,(unsigned int)DAT_00435e00,DAT_00435e04,
                                  *(unsigned short *)(temp_v7 + 0x595a),0);
            temp_v17 = FUN_0026e6a0(temp_v21 & 0xff,temp_v17,DAT_00435e04,*(unsigned short *)(temp_v7 + 0x595a),
                                  0);
            temp_v10 = FUN_0026e6a0(temp_v9,temp_v10,DAT_00435e04,*(unsigned short *)(temp_v7 + 0x595a),0);
            FUN_002be304((temp_v13 << 0x18) | ((temp_v17 & 0xff) << 0x10) | ((temp_v10 & 0xff) << 8) |
                         (unsigned int)DAT_00435e03);
            temp_v13 = FUN_002bf4f8(0x15,0x43);
            FUN_002bf288(2,0x15,2000,(int)*(short *)(temp_v13 + 8) + temp_v12 + temp_v6,
                         (int)*(short *)(temp_v13 + 10) + temp_v5 + temp_v8,0x1f);
            FUN_002bed3c();
            temp_v13 = g_titleScene;
            temp_v14 = packNibblesAndByte(6,7,0);
            piVar21 = (int *)(temp_v13 + 0x12ac);
            temp_v11 = piVar21[*piVar21 + 2];
            piVar21[*piVar21 + 2] = temp_v14;
            if (*(char *)(temp_v13 + 0x12c4) != '\0' || temp_v11 != temp_v14) {
              (**(romwright_code **)(temp_v13 + 0x12c8))();
              *(unsigned char *)(temp_v13 + 0x12c4) = 0;
            }
            FUN_002bf538();
          }
          else {
            *(unsigned short *)(temp_v7 + 0x5950) = 0;
          }
        }
        FUN_002bf538();
        if (temp_v46 != 0) {
          FUN_002bf288(2,0x15,0x1c8,temp_v6 + temp_v12,temp_v8 + temp_v5,0x1a);
          temp_v26 = (short)temp_v8;
          temp_v25 = (short)temp_v12;
        }
        else {
          FUN_002bf288(2,0x15,0x1c7,temp_v6 + temp_v12,temp_v8 + temp_v5,0x1a);
          temp_v26 = (short)temp_v8;
          temp_v25 = (short)temp_v12;
        }
        FUN_002bf538();
        temp_v12 = g_titleScene;
        piVar21 = (int *)(g_titleScene + 0x130c);
        temp_v8 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = 0;
        if (*(char *)(temp_v12 + 0x1324) != '\0' || temp_v8 != 0) {
          (**(romwright_code **)(temp_v12 + 0x1328))(0);
          *(unsigned char *)(temp_v12 + 0x1324) = 0;
        }
        if (temp_v46 != 0) {
          temp_v12 = FUN_002bf4f8(0x15,0x1ca);
        }
        else {
          temp_v12 = FUN_002bf4f8(0x15,0x1c9);
        }
        temp_v26 = (short)temp_v5 + temp_v26;
        temp_v25 = (short)temp_v6 + temp_v25;
        FUN_002b2650(temp_v36 + 0x1600,
                     (int)(short)(*(short *)(temp_v12 + 8) + *(short *)(temp_v7 + 0x59a6) + temp_v25),
                     (int)(short)(*(short *)(temp_v12 + 10) + *(short *)(temp_v7 + 0x59b0) + temp_v26));
        FUN_0029a268(temp_v36 + 0x1600);
        temp_v8 = g_titleScene;
        if (*(char *)(temp_v36 + 0x18b5) != '\0') {
          temp_v13 = packNibblesAndByte(6,1,0);
          piVar21 = (int *)(temp_v8 + 0x12ac);
          temp_v14 = piVar21[*piVar21 + 2];
          piVar21[*piVar21 + 2] = temp_v13;
          if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v14 != temp_v13) {
            (**(romwright_code **)(temp_v8 + 0x12c8))(temp_v13);
            *(unsigned char *)(temp_v8 + 0x12c4) = 0;
          }
          temp_v8 = temp_v36 + 0x1830;
          FUN_002b2650(temp_v8,(int)(short)(*(short *)(temp_v12 + 8) + temp_v25),
                       (int)(short)(*(short *)(temp_v12 + 10) + temp_v26));
          *(unsigned int *)(temp_v8 + 0x30) = *(unsigned int *)(temp_v32 + 0x5964);
          FUN_0029a268(temp_v8);
          FUN_0029a268(temp_v8);
          temp_v12 = g_titleScene;
          temp_v8 = packNibblesAndByte(6,7,0);
          piVar21 = (int *)(temp_v12 + 0x12ac);
          temp_v13 = piVar21[*piVar21 + 2];
          piVar21[*piVar21 + 2] = temp_v8;
          if (*(char *)(temp_v12 + 0x12c4) != '\0' || temp_v13 != temp_v8) {
            (**(romwright_code **)(temp_v12 + 0x12c8))(temp_v8);
            *(unsigned char *)(temp_v12 + 0x12c4) = 0;
          }
        }
      }
      FUN_002bed3c();
      if (temp_v46 != 0) {
        FUN_002bf288(2,0x15,0x3f,temp_v6,temp_v5 - temp_v28,0x1f);
        temp_v12 = FUN_002bf4f8(0x15,0x42);
        FUN_002bdf94(0,*(short *)(temp_v12 + 8) + temp_v6,(*(short *)(temp_v12 + 10) + temp_v5) - temp_v28,1
                     ,2,0x24,temp_v41);
      }
      else {
        FUN_002bf288(2,0x15,5,temp_v6,temp_v5,0x1f);
        temp_v12 = FUN_002bf4f8(0x15,0x26);
        FUN_002bdf94(0,*(short *)(temp_v12 + 8) + temp_v6,*(short *)(temp_v12 + 10) + temp_v5,1,2,0x24,
                     temp_v41);
      }
      temp_v17 = 0;
      temp_v10 = 1;
      do {
        temp_v9 = 0;
        if (temp_v15 != 0) {
          if (-1 < *(short *)(temp_v16 + 0x38f4)) {
            temp_v12 = FUN_002a8740((int)*(short *)(temp_v16 + 0x38f4));
            temp_v9 = (unsigned int)*(unsigned short *)(temp_v12 + 0x44);
          }
        }
        else {
          temp_v12 = FUN_002b63ac();
          temp_v9 = (unsigned int)*(unsigned short *)(temp_v12 + 0x72);
        }
        if ((temp_v9 & (1 << (temp_v10 & 0xff))) != 0) {
          if (temp_v10 == 4) {
            temp_v0 = *(char *)(temp_v43 + 0x78);
            temp_v12 = FUN_002bf4f8(0x15,temp_v17 * 2 + 0x27);
            *(short *)(temp_v7 + 0x5992) = *(short *)(temp_v12 + 8) + (short)temp_v6;
            *(short *)(temp_v7 + 0x599c) = *(short *)(temp_v12 + 10) + (short)temp_v5;
            if (temp_v0 != '\0') {
              temp_v12 = FUN_002bf4f8(0x15,temp_v17 * 2 + 0x28);
              FUN_00288844(*(short *)(temp_v12 + 8) + temp_v6,*(short *)(temp_v12 + 10) + temp_v5,0x24);
              temp_v12 = FUN_002bf4f8(0x15,temp_v17 * 2 + 0x27);
              FUN_00288790((int)(short)temp_v10,*(short *)(temp_v12 + 8) + temp_v6,
                           *(short *)(temp_v12 + 10) + temp_v5,0x24);
            }
          }
          else {
            temp_v12 = FUN_002bf4f8(0x15,temp_v17 * 2 + 0x28);
            FUN_00288844(*(short *)(temp_v12 + 8) + temp_v6,*(short *)(temp_v12 + 10) + temp_v5,0x24);
            temp_v12 = FUN_002bf4f8(0x15,temp_v17 * 2 + 0x27);
            FUN_00288790((int)(short)temp_v10,*(short *)(temp_v12 + 8) + temp_v6,
                         *(short *)(temp_v12 + 10) + temp_v5,0x24);
          }
          temp_v17 = (temp_v17 + 1) & 0xffff;
          if (temp_v17 >= 6) break;
        }
        temp_v10 = temp_v10 + 1;
      } while ((int)temp_v10 < 0xb);
      temp_v5 = g_titleScene;
      piVar21 = (int *)(g_titleScene + 0x130c);
      temp_v6 = piVar21[*piVar21 + 2];
      piVar21[*piVar21 + 2] = 0;
      if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v6 != 0) {
        (**(romwright_code **)(temp_v5 + 0x1328))();
        *(unsigned char *)(temp_v5 + 0x1324) = 0;
      }
      FUN_002bed3c();
    }
    if ((*(char *)(temp_v43 + 0x25) != '\0') &&
       (temp_v10 = *(int *)(param_1 + temp_v15 * 4 + 0x592c) - 0x1d, temp_v10 < 0xc)) {
      VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v24 = temp_v24 & 0xffffffff00000000;
      FUN_002bf538();
      temp_v6 = FUN_002bf4f8(0x15,temp_v15 + 0x52);
      temp_v5 = g_titleScene;
      temp_v16 = packNibblesAndByte(6,1,0);
      piVar21 = (int *)(temp_v5 + 0x12ac);
      temp_v7 = piVar21[*piVar21 + 2];
      piVar21[*piVar21 + 2] = temp_v16;
      if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v7 != temp_v16) {
        (**(romwright_code **)(temp_v5 + 0x12c8))();
        *(unsigned char *)(temp_v5 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x15,0x4f,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0x2e);
      FUN_002bf288(2,0x15,0x4e,(int)*(short *)(temp_v6 + 8),*(short *)(temp_v6 + 10) - temp_v28,0x2e);
      temp_v5 = g_titleScene;
      piVar21 = (int *)(g_titleScene + 0x130c);
      temp_v16 = piVar21[*piVar21 + 2];
      piVar21[*piVar21 + 2] = 3;
      if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v16 != 3) {
        (**(romwright_code **)(temp_v5 + 0x1328))();
        *(unsigned char *)(temp_v5 + 0x1324) = 0;
      }
      FUN_0029a17c((int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),
                   (int)**(short **)(temp_v6 + 0xc),(*(short **)(temp_v6 + 0xc))[1] - temp_v28,1);
      temp_v5 = g_titleScene;
      temp_v16 = packNibblesAndByte(6,1,0);
      piVar21 = (int *)(temp_v5 + 0x12ac);
      temp_v7 = piVar21[*piVar21 + 2];
      piVar21[*piVar21 + 2] = temp_v16;
      if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v7 != temp_v16) {
        (**(romwright_code **)(temp_v5 + 0x12c8))();
        *(unsigned char *)(temp_v5 + 0x12c4) = 0;
      }
      FUN_002bf288(2,0x15,0x50,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0x2e);
      FUN_002bf288(2,0x15,0x51,(int)*(short *)(temp_v6 + 8),(int)*(short *)(temp_v6 + 10),0x2e);
      temp_v5 = g_titleScene;
      piVar21 = (int *)(g_titleScene + 0x130c);
      temp_v6 = piVar21[*piVar21 + 2];
      piVar21[*piVar21 + 2] = 0;
      if (*(char *)(temp_v5 + 0x1324) != '\0' || temp_v6 != 0) {
        (**(romwright_code **)(temp_v5 + 0x1328))();
        *(unsigned char *)(temp_v5 + 0x1324) = 0;
      }
      temp_v5 = g_titleScene;
      temp_v6 = packNibblesAndByte(6,7,0);
      piVar21 = (int *)(temp_v5 + 0x12ac);
      temp_v16 = piVar21[*piVar21 + 2];
      piVar21[*piVar21 + 2] = temp_v6;
      if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v16 != temp_v6) {
        (**(romwright_code **)(temp_v5 + 0x12c8))();
        *(unsigned char *)(temp_v5 + 0x12c4) = 0;
      }
    }
    FUN_002bf538();
    temp_v23 = (float)(temp_v24 >> 0x20);
    temp_v15 = temp_v15 + 1;
  } while (temp_v15 < 4);
  if ((*(int *)(temp_v34 + 0x48) == 0x1f) || (*(int *)(temp_v34 + 0x4c) == 0x1f)) {
    FUN_002bf538();
    FUN_002bf288(2,0xe,0x106,0,0,0x33);
    FUN_002bf538();
  }
  temp_v3 = gameGetOptions();
  if ((*(short *)(temp_v3 + 0x46) != 0) &&
     (temp_v4 = btlGetMainState(), (*(unsigned int *)(temp_v4 + 0x44a0) & 0x40000) == 0)) {
    temp_v10 = *(unsigned int *)(param_1 + 0x386c);
    if ((int)temp_v10 < 1) {
      temp_v4 = 0;
    }
    else {
      temp_v20 = (float)temp_v37[0x20] * 0.5f;
      if ((temp_v10 & 1) != 0) {
        temp_v20 = -temp_v20;
      }
      temp_v4 = (int)temp_v20;
      temp_v20 = (float)VectorSignedToFloat(0xf - temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v20 = temp_v20 * 1.5707964f * 0.06666667f * 40.743664f;
      FUN_002b70cc();
      temp_v37[0x20] = (temp_v23 - temp_v20) * 8.0f;
    }
    if ((temp_v47 == 0) && (*(int *)(temp_v34 + 0x5c) != 4)) {
      temp_v23 = 0.5f;
    }
    if (param_5 != 0) {
      temp_v23 = 0.5f;
    }
    FUN_002bf538();
    if (temp_v46 != 0) {
      temp_v15 = FUN_002bf4f8(0x15,0x71);
    }
    else {
      temp_v15 = FUN_002bf4f8(0x15,0x70);
    }
    temp_v5 = FUN_0028dba8(*(unsigned int *)(temp_v34 + 0x40));
    if ((temp_v5 != 0) && (temp_v5 = FUN_002b6ad0(), temp_v5 != 0)) {
      temp_v5 = FUN_002beda4();
      temp_v6 = temp_v5 + temp_v4 + (int)*(short *)(temp_v15 + 8);
      temp_v5 = FUN_002bed98(param_1 + 0x96c);
      temp_v4 = temp_v5 + temp_v4 + (int)*(short *)(temp_v15 + 10);
    }
    else {
      temp_v5 = FUN_002beda4();
      temp_v6 = temp_v5 + temp_v4 + (int)*(short *)(temp_v15 + 8);
      temp_v5 = FUN_002bed98(param_1 + 0x7c8);
      temp_v4 = temp_v5 + temp_v4 + (int)*(short *)(temp_v15 + 10);
    }
    temp_v5 = FUN_002beda4(temp_v38);
    temp_v5 = temp_v5 + temp_v6;
    temp_v6 = FUN_002bed98(temp_v38);
    temp_v15 = g_titleScene;
    temp_v6 = temp_v6 + temp_v4;
    temp_v4 = packNibblesAndByte(6,1,0);
    piVar21 = (int *)(temp_v15 + 0x12ac);
    temp_v16 = piVar21[*piVar21 + 2];
    piVar21[*piVar21 + 2] = temp_v4;
    if (*(char *)(temp_v15 + 0x12c4) != '\0' || temp_v16 != temp_v4) {
      (**(romwright_code **)(temp_v15 + 0x12c8))();
      *(unsigned char *)(temp_v15 + 0x12c4) = 0;
    }
    temp_v4 = temp_v6 - temp_v28;
    FUN_002bf288(2,0x15,0x5e,temp_v5,temp_v4,0x38);
    if ((*(int *)(temp_v34 + 0x48) == 0x1f) || (*(int *)(temp_v34 + 0x4c) == 0x1f)) {
      FUN_002bf538();
      FUN_002bf288(2,0x15,0x5e,temp_v5,temp_v4,0x38);
      FUN_002bf538();
    }
    temp_v15 = g_titleScene;
    temp_v16 = packNibblesAndByte(6,7,0);
    piVar21 = (int *)(temp_v15 + 0x12ac);
    temp_v7 = piVar21[*piVar21 + 2];
    piVar21[*piVar21 + 2] = temp_v16;
    if (*(char *)(temp_v15 + 0x12c4) != '\0' || temp_v7 != temp_v16) {
      (**(romwright_code **)(temp_v15 + 0x12c8))();
      *(unsigned char *)(temp_v15 + 0x12c4) = 0;
    }
    FUN_002bf288(2,0x15,0x5f,temp_v5,temp_v4,0x3d);
    FUN_002bf288(2,0x15,0x60,temp_v5,temp_v4,0x3d);
    FUN_002bf288(2,0x15,0x61,temp_v5,temp_v4,0x3d);
    FUN_002bf288(2,0x15,0x62,temp_v5,temp_v4,0x3d);
    FUN_002bf288(2,0x15,99,temp_v5,temp_v4,0x3d);
    FUN_002bf288(2,0x15,100,temp_v5,temp_v4,0x42);
    FUN_002bf288(2,0x15,0x65,temp_v5,temp_v4,0x42);
    temp_v15 = 0;
    if (*(char *)(param_1 + 0x37c0) != '\0') {
      if (*(char *)(param_1 + 0x380d) == '\0') {
        temp_v15 = (int)(short)*(unsigned int *)(param_1 + 0x37d8);
      }
      if (*(char *)(param_1 + 0x3808) == '\0') {
        temp_v15 = (int)(short)-(short)temp_v15;
      }
    }
    FUN_002be90c((int)*(short *)((int)temp_v37 + 0xde),(int)*(short *)(temp_v3 + 0xe),temp_v15,*temp_v37
                 ,0x15,0x66,0x69,0x68,0x67,temp_v5,temp_v4,0x47,0);
    temp_v4 = FUN_002bf4f8(0x15,0x6f);
    temp_v15 = FUN_002b6ad0();
    if (temp_v15 != 0) {
      if ((*(unsigned short *)(temp_v3 + 0x44) & 2) != 0) {
        FUN_002b05d0(1);
        FUN_002be304();
      }
      temp_v3 = FUN_002b6a54((int)*(short *)(temp_v3 + 0x604),*(unsigned short *)(temp_v3 + 0x606));
      FUN_002b6940(*(unsigned short *)(temp_v3 + 0x5a),*(short *)(temp_v4 + 8) + temp_v5,
                   (*(short *)(temp_v4 + 10) + temp_v6) - temp_v28,0x42);
      FUN_002bed3c();
      temp_v3 = gameGetOptions();
      temp_v10 = (unsigned int)*(unsigned short *)(temp_v3 + 0x604);
      FUN_002bcf4c(temp_v10);
      FUN_002be624(temp_v29,temp_v10);
    }
    else {
      if ((*(unsigned short *)(temp_v3 + 0x44) & 2) != 0) {
        FUN_002b05d0(1);
        FUN_002be304();
      }
      FUN_002b6758((int)*(short *)(temp_v3 + 0x46),*(short *)(temp_v4 + 8) + temp_v5,
                   (*(short *)(temp_v4 + 10) + temp_v6) - temp_v28,0x42,0);
      FUN_002bed3c();
      temp_v18 = FUN_002bd068(*(unsigned short *)(temp_v3 + 0x46));
      FUN_002be624(temp_v29,temp_v18);
    }
    temp_v3 = FUN_002bf4f8(0x15,0x6e);
    temp_v20 = 0.0f;
    VectorSignedToFloat(*(short *)(temp_v3 + 8) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((*(short *)(temp_v3 + 10) + temp_v6) - temp_v28,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(2,0xff,temp_v29);
    temp_v3 = FUN_002b6ad0();
    if ((temp_v3 != 0) && ((*(int *)(temp_v34 + 0x48) == 0x1f || (*(int *)(temp_v34 + 0x4c) == 0x1f)))
       ) {
      if (*(char *)(temp_v34 + 0x81) != '\0') {
        if ((int)temp_v23 >= 0x3f800000) {
          FUN_002bf538();
        }
        temp_v3 = g_titleScene;
        temp_v4 = packNibblesAndByte(6,1,0);
        piVar21 = (int *)(temp_v3 + 0x12ac);
        temp_v15 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = temp_v4;
        if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v15 != temp_v4) {
          (**(romwright_code **)(temp_v3 + 0x12c8))();
          *(unsigned char *)(temp_v3 + 0x12c4) = 0;
        }
        FUN_002bf380(2,0x15,0xc,0,0,0x5b);
        temp_v3 = g_titleScene;
        temp_v4 = packNibblesAndByte(6,7,0);
        piVar21 = (int *)(temp_v3 + 0x12ac);
        temp_v15 = piVar21[*piVar21 + 2];
        piVar21[*piVar21 + 2] = temp_v4;
        if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v15 != temp_v4) {
          (*(romwright_code *)piVar21[7])();
          *(unsigned char *)(piVar21 + 6) = 0;
        }
        FUN_002bf538();
      }
      else {
        temp_v23 = *(float *)(param_1 + 0x1364);
        if (temp_v23 > temp_v20) {
          FUN_002bf538();
          temp_v4 = FUN_002beda4(param_1 + 0x1344);
          temp_v3 = g_titleScene;
          temp_v15 = packNibblesAndByte(6,1,0);
          piVar21 = (int *)(temp_v3 + 0x12ac);
          temp_v5 = piVar21[*piVar21 + 2];
          piVar21[*piVar21 + 2] = temp_v15;
          if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v5 != temp_v15) {
            (**(romwright_code **)(temp_v3 + 0x12c8))();
            *(unsigned char *)(temp_v3 + 0x12c4) = 0;
          }
          FUN_002bf288(2,0x15,0x1b4,temp_v4,0,0x51);
          FUN_002bf288(2,0x15,0x1b4,temp_v4,0,0x51);
          temp_v3 = g_titleScene;
          temp_v15 = packNibblesAndByte(6,7,0);
          piVar21 = (int *)(temp_v3 + 0x12ac);
          temp_v5 = piVar21[*piVar21 + 2];
          piVar21[*piVar21 + 2] = temp_v15;
          if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v5 != temp_v15) {
            (**(romwright_code **)(temp_v3 + 0x12c8))();
            *(unsigned char *)(temp_v3 + 0x12c4) = 0;
          }
          temp_v15 = FUN_002bf4f8(0x15,0x1b9);
          temp_v3 = g_titleScene;
          piVar21 = (int *)(g_titleScene + 0x130c);
          temp_v5 = piVar21[*piVar21 + 2];
          piVar21[*piVar21 + 2] = 3;
          if (*(char *)(temp_v3 + 0x1324) != '\0' || temp_v5 != 3) {
            (**(romwright_code **)(temp_v3 + 0x1328))();
            *(unsigned char *)(temp_v3 + 0x1324) = 0;
          }
          FUN_0029a17c(*(short *)(temp_v15 + 8) + temp_v4,(int)*(short *)(temp_v15 + 10),
                       (int)**(short **)(temp_v15 + 0xc),(int)(*(short **)(temp_v15 + 0xc))[1],1);
          temp_v3 = FUN_002bf4f8(0x15,0x1ba);
          temp_v15 = gameGetOptions();
          temp_v1 = *(unsigned short *)(temp_v15 + 0x606);
          temp_v15 = gameGetOptions();
          temp_v15 = FUN_002b6a54((int)*(short *)(temp_v15 + 0x604),temp_v1);
          FUN_0028f048((int)(short)(*(short *)(temp_v15 + 0x5a) + 1),*(short *)(temp_v3 + 8) + temp_v4,
                       (int)*(short *)(temp_v3 + 10),0x54,0);
          temp_v3 = g_titleScene;
          piVar21 = (int *)(g_titleScene + 0x130c);
          temp_v15 = piVar21[*piVar21 + 2];
          piVar21[*piVar21 + 2] = 0;
          if (*(char *)(temp_v3 + 0x1324) != '\0' || temp_v15 != 0) {
            (**(romwright_code **)(temp_v3 + 0x1328))(0);
            *(unsigned char *)(temp_v3 + 0x1324) = 0;
          }
          FUN_002bf380(2,0x15,10,temp_v4,0,0x56);
          if ((int)temp_v23 >= 0x3f800000) {
            FUN_002bf538();
          }
          temp_v3 = g_titleScene;
          temp_v15 = packNibblesAndByte(6,1,0);
          piVar21 = (int *)(temp_v3 + 0x12ac);
          temp_v5 = piVar21[*piVar21 + 2];
          piVar21[*piVar21 + 2] = temp_v15;
          if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v5 != temp_v15) {
            (**(romwright_code **)(temp_v3 + 0x12c8))();
            *(unsigned char *)(temp_v3 + 0x12c4) = 0;
          }
          FUN_002bf380(2,0x15,0xc,0,0,0x5b);
          FUN_002bf380(2,0x15,0xb,temp_v4,0,0x5b);
          temp_v3 = g_titleScene;
          temp_v4 = packNibblesAndByte(6,7,0);
          piVar21 = (int *)(temp_v3 + 0x12ac);
          temp_v15 = piVar21[*piVar21 + 2];
          piVar21[*piVar21 + 2] = temp_v4;
          if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v15 != temp_v4) {
            (*(romwright_code *)piVar21[7])();
            *(unsigned char *)(piVar21 + 6) = 0;
          }
          FUN_002bf538();
        }
      }
    }
    FUN_002bf538();
  }
  temp_v4 = 0;
  temp_v3 = 0x71;
  temp_v39[0] = 0x46;
  temp_v39[1] = 0x47;
  temp_v39[2] = 0x48;
  temp_v39[3] = 0x49;
  temp_v39[4] = 0x71;
  do {
    if (*(char *)(param_1 + temp_v4 + 0x389c) != '\0') {
      temp_v5 = FUN_002bf4f8(0x15,temp_v39[temp_v4]);
      temp_v15 = g_titleScene;
      temp_v6 = packNibblesAndByte(6,1,0);
      piVar21 = (int *)(temp_v15 + 0x12ac);
      temp_v16 = piVar21[*piVar21 + 2];
      piVar21[*piVar21 + 2] = temp_v6;
      if (*(char *)(temp_v15 + 0x12c4) != '\0' || temp_v16 != temp_v6) {
        (**(romwright_code **)(temp_v15 + 0x12c8))();
        *(unsigned char *)(temp_v15 + 0x12c4) = 0;
      }
      temp_v15 = param_1 + temp_v4 * 4;
      FUN_0025765c(*(unsigned int *)(temp_v15 + 0x38b8),*(unsigned int *)(temp_v15 + 0x38a4));
      FUN_002be304();
      temp_v15 = g_titleScene;
      temp_v18 = 2000;
      piVar21 = (int *)(g_titleScene + 0x130c);
      if (temp_v4 == 4) {
        temp_v18 = 0x7d1;
      }
      temp_v6 = piVar21[*piVar21 + 2];
      piVar21[*piVar21 + 2] = 3;
      if (*(char *)(temp_v15 + 0x1324) != '\0' || temp_v6 != 3) {
        (**(romwright_code **)(temp_v15 + 0x1328))();
        *(unsigned char *)(temp_v15 + 0x1324) = 0;
      }
      if (temp_v46 != 0) {
        temp_v3 = temp_v28;
      }
      temp_v15 = (int)(*(short **)(temp_v5 + 0xc))[1];
      if (temp_v46 != 0) {
        temp_v15 = temp_v15 - temp_v3;
      }
      else {
        temp_v15 = temp_v15 - 0x28;
      }
      FUN_0029a17c((int)*(short *)(temp_v5 + 8),(int)*(short *)(temp_v5 + 10),
                   (int)**(short **)(temp_v5 + 0xc),temp_v15,1);
      FUN_002bf288(2,0x15,temp_v18,(int)*(short *)(temp_v5 + 8),(int)*(short *)(temp_v5 + 10),0xe7);
      temp_v15 = g_titleScene;
      piVar21 = (int *)(g_titleScene + 0x130c);
      temp_v5 = piVar21[*piVar21 + 2];
      piVar21[*piVar21 + 2] = 0;
      if (*(char *)(temp_v15 + 0x1324) != '\0' || temp_v5 != 0) {
        (**(romwright_code **)(temp_v15 + 0x1328))();
        *(unsigned char *)(temp_v15 + 0x1324) = 0;
      }
      FUN_002bed3c();
      temp_v15 = g_titleScene;
      temp_v5 = packNibblesAndByte(6,7,0);
      piVar21 = (int *)(temp_v15 + 0x12ac);
      temp_v6 = piVar21[*piVar21 + 2];
      piVar21[*piVar21 + 2] = temp_v5;
      if (*(char *)(temp_v15 + 0x12c4) != '\0' || temp_v6 != temp_v5) {
        (**(romwright_code **)(temp_v15 + 0x12c8))();
        *(unsigned char *)(temp_v15 + 0x12c4) = 0;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 5);
  return;
}

} /* extern "C" */
