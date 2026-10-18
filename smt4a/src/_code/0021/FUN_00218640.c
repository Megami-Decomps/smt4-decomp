/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00218640` (_code @ 0x218640, 0x13b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 13 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp17C; /* 0x17c: local_17c */
    unsigned int sp180; /* 0x180: local_180 */
    unsigned char sp181; /* 0x181: local_181 */
    unsigned char sp182; /* 0x182: local_182 */
    unsigned short sp184; /* 0x184: local_184 */
    unsigned int sp18C; /* 0x18c: local_18c */
    unsigned int sp190; /* 0x190: local_190 */
} void_stack;

extern unsigned char LAB_00218a40; /* 0x218a40 */
extern unsigned char LAB_00218e4c; /* 0x218e4c */
extern unsigned char LAB_00218e54; /* 0x218e54 */
extern unsigned char LAB_00218e58; /* 0x218e58 */
extern unsigned char LAB_00218e68; /* 0x218e68 */
extern unsigned char LAB_002196dc; /* 0x2196dc */
extern unsigned char LAB_002196e4; /* 0x2196e4 */
extern int DAT_0057f28c; /* 0x57f28c */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_00156850(unsigned int, unsigned int);
extern unsigned int FUN_00156868(unsigned int);
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: FUN_00164168. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001654d8. */
extern int FUN_001654e4(int);
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001689e8. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_00180114(unsigned int);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001879d0. */
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
extern int FUN_0019f18c(unsigned int);
/* Supplied declaration required: FUN_001ab940. */
/* Supplied declaration required: FUN_001ad9b4. */
extern short *FUN_00284fa4(int);
extern int FUN_002a4860(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002c0940. */
extern int FUN_002ebda8(void);
/* Supplied declaration required: FUN_002f7730. */
/* Supplied declaration required: FUN_0037ce80. */
extern int FUN_003de75c(unsigned int);
extern int FUN_003de830(unsigned int);
extern unsigned int FUN_003de9ec(unsigned short);
extern int FUN_003df004(unsigned int, int, unsigned char **);
extern int FUN_00418584(unsigned int);
extern unsigned int FUN_004186e0(void);


void FUN_00218640(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 20 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  short *psVar13;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int *piVar18;
  unsigned int temp_v16;
  unsigned char temp_v17;
  unsigned int in_fpscr;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned int temp_v21;
  long long temp_v22;
  unsigned char *puStack_188;
  unsigned short temp_v23;
  char temp_v24;
  char temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  int temp_v28;
  unsigned char temp_v29 [128];
  unsigned char temp_v30 [68];
  unsigned int temp_v31;
  int temp_v32;
  unsigned char temp_v33 [36];
  int temp_v34;
  unsigned char temp_v35 [32];
  int temp_v36;
  int temp_v37;
  
  temp_v3 = DAT_0057f28c;
  temp_v21 = 0x3ea66666;
  FUN_001879d0(DAT_0059dbb4);
  temp_v4 = FUN_001654d8(temp_v3 + 0x34);
  temp_v5 = FUN_001654e4(temp_v3 + 0x34);
  temp_v32 = temp_v3 + 0x900;
  if (*(char *)(temp_v3 + 0x90c) != '\0') {
    temp_v15 = temp_v3 + 0x948;
    temp_v14 = temp_v3 + 0xa10;
  }
  else {
    temp_v15 = temp_v3 + 0x9ac;
    temp_v14 = temp_v3 + 0xad6;
  }
  temp_v22 = (unsigned long long)temp_v21 << 0x20;
  FUN_001677c0();
  temp_v6 = FUN_002a4860(temp_v15);
  temp_v15 = FUN_002a4894(temp_v15);
  temp_v1 = *(unsigned short *)(temp_v14 + (temp_v15 + temp_v6) * 2);
  if (*(char *)(temp_v32 + 0x3e) != '\0') {
    temp_v1 = *(unsigned short *)(temp_v3 + 0xcca);
  }
  temp_v7 = (unsigned int)temp_v1;
  temp_v21 = 0;
  temp_v27 = temp_v7;
  if (temp_v7 != 0) {
    FUN_001ad9b4();
    temp_v21 = temp_v7;
  }
  temp_v20 = (float)((unsigned long long)temp_v22 >> 0x20);
  FUN_001879d0(DAT_0059dbb4);
  temp_v6 = *(int *)(temp_v3 + 4);
  temp_v15 = temp_v5;
  temp_v14 = temp_v4;
  if ((temp_v6 == 0x17 || temp_v6 == 0x18) || temp_v6 == 0x19) {
    temp_v14 = FUN_001654d8();
    temp_v14 = temp_v14 + temp_v4;
    temp_v15 = FUN_001654e4(temp_v3 + 0x494);
    temp_v15 = temp_v15 + temp_v5;
  }
  FUN_00164b5c(2,0x1e,2,temp_v14 + (int)temp_v20,temp_v15,0x65);
  temp_v20 = (float)((unsigned long long)temp_v22 >> 0x20);
  FUN_001879d0(DAT_0059dbb4);
  if ((temp_v21 != 0) && ((*(unsigned char *)(temp_v21 + 7) & 0x80) != 0)) {
    FUN_00164b5c(2,0x1e,0x14,temp_v4 + (int)temp_v20,temp_v5,0x65);
  }
  else {
    FUN_00164b5c(2,0x1e,1,temp_v4 + (int)temp_v20,temp_v5,0x65);
  }
  temp_v20 = (float)((unsigned long long)temp_v22 >> 0x20);
  FUN_001879d0(DAT_0059dbb4);
  FUN_00164b5c(2,0x1e,0,temp_v4 + (int)temp_v20,temp_v5,0x65);
  temp_v20 = (float)((unsigned long long)temp_v22 >> 0x20);
  if (temp_v27 != 0) {
    FUN_001879d0(DAT_0059dbb4);
    temp_v15 = FUN_00418584(temp_v27);
    temp_v14 = temp_v4 + (int)temp_v20;
    if (temp_v15 != 0) {
      FUN_001835b4(2,0x1e,0x10,temp_v14,temp_v5,0x68);
    }
    else {
      FUN_001835b4(2,0x1e,0xf,temp_v14,temp_v5,0x68);
    }
    temp_v15 = FUN_001834a4(0x1e,0x11);
    temp_v14 = temp_v4 + (int)temp_v20;
    FUN_0037ce80(temp_v27,*(short *)(temp_v15 + 8) + temp_v14,*(short *)(temp_v15 + 10) + temp_v5,0x6a);
    temp_v15 = FUN_001834a4(0x1e,0x12);
    temp_v8 = FUN_00156850(temp_v27,0);
    FUN_00100388(temp_v29,&LAB_00218a40,temp_v8);
    VectorSignedToFloat(*(short *)(temp_v15 + 8) + temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v15 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,0xffffffff,temp_v29);
    temp_v20 = (float)((unsigned long long)temp_v22 >> 0x20);
    FUN_001879d0(DAT_0059dbb4);
    temp_v18 = (float)((unsigned long long)temp_v22 >> 0x20);
    temp_v7 = 0;
    if (*(short *)(temp_v21 + 0xdc) != 0) {
      do {
        temp_v15 = FUN_001834a4(0x1e,(int)temp_v7 / 2 + 5);
        temp_v14 = *(short *)(temp_v15 + 10) + temp_v5;
        temp_v15 = (int)*(short *)(temp_v15 + 8) + temp_v4 + (int)temp_v20;
        if ((temp_v7 & 1) != 0) {
          FUN_001835b4(2,0x1e,0xe,temp_v15,temp_v14,0x6a);
        }
        else {
          FUN_001835b4(2,0x1e,0xd,temp_v15,temp_v14,0x6a);
        }
        temp_v18 = (float)((unsigned long long)temp_v22 >> 0x20);
        temp_v7 = temp_v7 + 1;
      } while ((int)temp_v7 < (int)(unsigned int)*(unsigned short *)(temp_v21 + 0xdc));
    }
    temp_v19 = temp_v18;
    FUN_001879d0(DAT_0059dbb4);
    temp_v15 = FUN_001834a4(0x1e,0x1a);
    temp_v8 = FUN_00156868(temp_v27);
    FUN_00100388(temp_v29,&LAB_00218a40,temp_v8);
    temp_v14 = temp_v4 + (int)temp_v18;
    VectorSignedToFloat(*(short *)(temp_v15 + 8) + temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v15 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,0xff,temp_v29);
    FUN_001ab940();
    temp_v2 = *(short *)(temp_v21 + 0xf0);
    if (temp_v2 != 1) {
      if (temp_v2 != 3) {
        if (temp_v2 != 4) {
          FUN_00100388(temp_v29,&LAB_00218e4c);
          temp_v15 = FUN_001834a4(0x1e,0x1b);
        }
        else {
          temp_v8 = FUN_003de9ec(*(unsigned short *)(temp_v21 + 0xf2));
          FUN_00100388(temp_v29,&LAB_00218a40,temp_v8);
          temp_v15 = FUN_001834a4(0x1e,0x1b);
        }
      }
      else {
        FUN_002c0940(temp_v30,*(unsigned int *)(temp_v21 + 0xf4));
        FUN_00100388(temp_v29,&LAB_00218e68,temp_v30);
        temp_v15 = FUN_001834a4(0x1e,0x1b);
      }
      VectorSignedToFloat(*(short *)(temp_v15 + 8) + temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v15 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0xffffffff,temp_v29);
    }
    else if (*(short *)(temp_v21 + 0xf2) != 0) {
      temp_v15 = FUN_001834a4(0x1e,0x1b);
      FUN_001689e8((int)*(short *)(temp_v21 + 0xf2),*(short *)(temp_v15 + 8) + temp_v14,
                   *(short *)(temp_v15 + 10) + temp_v5,0x6a,0);
      temp_v15 = FUN_001834a4(0x1e,0x1c);
      temp_v7 = (unsigned int)*(unsigned short *)(temp_v21 + 0xf2);
      FUN_0015f858(temp_v7,0);
      FUN_00100388(temp_v29,&LAB_00218a40,temp_v7);
      temp_v20 = (float)VectorSignedToFloat(*(short *)(temp_v15 + 8) + temp_v14,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v15 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0xffffffff,temp_v29);
      puStack_188 = &LAB_00218e54;
      temp_v14 = (int)temp_v20 + (int)temp_v18;
      FUN_00180310(0,*(short *)(temp_v15 + 8) + temp_v4 + temp_v14 + 3,
                   (temp_v5 - 1) + (int)*(short *)(temp_v15 + 10),0,7,0x6a);
      FUN_002c0940(temp_v30,*(unsigned int *)(temp_v21 + 0xf4));
      VectorSignedToFloat(*(short *)(temp_v15 + 10) + temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v15 + 8) + temp_v4 + temp_v14 + 10,(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      FUN_00162790(2,0xffffffff,temp_v30);
    }
    else {
      FUN_00100388(temp_v29,&LAB_00218e58,*(unsigned int *)(temp_v21 + 0xf4));
      FUN_001834a4(0x1e,0x1c);
    }
    temp_v20 = temp_v19;
    FUN_001879d0(DAT_0059dbb4);
    temp_v14 = *(int *)(temp_v3 + 4);
    temp_v6 = temp_v4 + (int)temp_v19;
    temp_v15 = temp_v5;
    if ((temp_v14 == 0x17 || temp_v14 == 0x18) || temp_v14 == 0x19) {
      temp_v15 = FUN_001654d8();
      temp_v6 = temp_v15 + temp_v4 + (int)temp_v19;
      temp_v15 = FUN_001654e4(temp_v3 + 0x494);
      temp_v15 = temp_v15 + temp_v5;
      if (*(int *)(temp_v3 + 4) != 0x18) goto LAB_00218d20;
LAB_00218eb4:
      FUN_001677c0();
      temp_v14 = DAT_0059dbb4;
      temp_v9 = FUN_00169294(6,1,0);
      piVar18 = (int *)(temp_v14 + 0x12b8);
      temp_v10 = piVar18[*piVar18 + 2];
      piVar18[*piVar18 + 2] = temp_v9;
      if (*(char *)(temp_v14 + 0x12d0) != '\0' || temp_v10 != temp_v9) {
        (**(romwright_code **)(temp_v14 + 0x12d4))();
        *(unsigned char *)(temp_v14 + 0x12d0) = 0;
      }
      FUN_001835b4(2,0x1e,0x60,temp_v6,temp_v15,0x68);
      temp_v14 = DAT_0059dbb4;
      temp_v9 = FUN_00169294(6,7,0);
      piVar18 = (int *)(temp_v14 + 0x12b8);
      temp_v10 = piVar18[*piVar18 + 2];
      piVar18[*piVar18 + 2] = temp_v9;
      if (*(char *)(temp_v14 + 0x12d0) != '\0' || temp_v10 != temp_v9) {
        (**(romwright_code **)(temp_v14 + 0x12d4))();
        *(unsigned char *)(temp_v14 + 0x12d0) = 0;
      }
      FUN_001677c0();
      FUN_001835b4(2,0x1e,0x24,temp_v6,temp_v15,0x6a);
    }
    else {
LAB_00218d20:
      if (*(int *)(temp_v3 + 8) == 0x18) goto LAB_00218eb4;
      if ((temp_v21 != 0) && ((*(unsigned char *)(temp_v21 + 7) & 0x80) != 0)) {
        FUN_001835b4(2,0x1e,0xc9,temp_v6,temp_v15,0x6a);
      }
      else {
        FUN_001835b4(2,0x1e,0x23,temp_v6,temp_v15,0x6a);
      }
    }
    temp_v14 = FUN_001834a4(0x1e,0x25);
    FUN_00164168(*(unsigned int *)(temp_v3 + 0x920),*(short *)(temp_v14 + 8) + temp_v6,
                 *(short *)(temp_v14 + 10) + temp_v15,0x6f,6,0);
    temp_v14 = FUN_001834a4(0x1e,0x26);
    FUN_00164168(*(unsigned int *)(temp_v3 + 0x920),*(short *)(temp_v14 + 8) + temp_v6,
                 *(short *)(temp_v14 + 10) + temp_v15,0x6f,6,1);
  }
  temp_v22 = (unsigned long long)(unsigned int)temp_v20 << 0x20;
  FUN_001879d0(DAT_0059dbb4);
  temp_v14 = (int)temp_v20;
  temp_v15 = FUN_001654d8(temp_v3 + 0x1d8);
  temp_v6 = temp_v15 + temp_v4 + temp_v14;
  temp_v15 = FUN_001654e4(temp_v3 + 0x1d8);
  temp_v15 = temp_v15 + temp_v5;
  FUN_001677c0();
  FUN_00164b5c(2,0x1e,3,temp_v6,temp_v15,0x65);
  if (temp_v27 == 0) {
    FUN_001677c0();
    return;
  }
  temp_v21 = temp_v27;
  FUN_001ad9b4();
  temp_v31 = temp_v21;
  if (*(char *)(temp_v32 + 0xc) != '\0') {
    temp_v9 = FUN_00418584(temp_v27);
    if (temp_v9 != 0) {
      FUN_001835b4(2,0x1e,0x2b,temp_v6,temp_v15,0x68);
    }
  }
  else {
    temp_v0 = *(char *)(temp_v21 + 6);
    if ((temp_v0 != '\x06') && (temp_v0 != '\t' && temp_v0 != '\v')) {
      temp_v9 = FUN_00418584(temp_v27);
      if (temp_v9 != 0) {
        FUN_001835b4(2,0x1e,0x2b,temp_v6,temp_v15,0x68);
      }
    }
    else {
      temp_v9 = FUN_003de75c(temp_v27);
      if (temp_v9 != 0) {
        temp_v21 = FUN_004186e0();
        if (temp_v21 == temp_v27) {
          if (*(int *)(temp_v3 + 4) != 0xc) {
            FUN_001835b4(2,0x1e,0x2a,temp_v6,temp_v15,0x68);
          }
          else {
            VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_001634b4(temp_v3 + 0x264);
          }
        }
        else {
          temp_v9 = FUN_00418584(temp_v27);
          if (temp_v9 != 0) {
            FUN_001835b4(2,0x1e,0x2b,temp_v6,temp_v15,0x68);
          }
        }
      }
      else {
        temp_v9 = FUN_00418584(temp_v27);
        if (temp_v9 != 0) {
          FUN_001835b4(2,0x1e,0x2b,temp_v6,temp_v15,0x68);
        }
      }
    }
  }
  FUN_001677c0();
  temp_v9 = 0;
  if (0 < *(int *)(temp_v3 + 0x918)) {
    temp_v14 = temp_v4 + temp_v14;
    do {
      if (*(int *)(temp_v3 + 0x910) != temp_v9) {
        temp_v10 = FUN_001834a4(0x1e,temp_v9 + 0x48);
        FUN_001835b4(2,0x1e,0x40,*(short *)(temp_v10 + 8) + temp_v14,*(short *)(temp_v10 + 10) + temp_v5,
                     0x65);
        temp_v11 = FUN_002f7730(temp_v9,temp_v27);
        if (temp_v11 != 0) {
          if (temp_v11 != 1) {
            if (temp_v11 != 2) {
              if (temp_v11 == 3) {
                FUN_001835b4(2,0x1e,0xc3,*(short *)(temp_v10 + 8) + temp_v14,
                             *(short *)(temp_v10 + 10) + temp_v5,0x6a);
              }
            }
            else {
              FUN_001835b4(2,0x1e,0x43,*(short *)(temp_v10 + 8) + temp_v14,
                           *(short *)(temp_v10 + 10) + temp_v5,0x6a);
            }
          }
          else {
            FUN_001835b4(2,0x1e,0x42,*(short *)(temp_v10 + 8) + temp_v14,*(short *)(temp_v10 + 10) + temp_v5
                         ,0x6a);
          }
        }
        else {
          FUN_001835b4(2,0x1e,0x41,*(short *)(temp_v10 + 8) + temp_v14,*(short *)(temp_v10 + 10) + temp_v5,
                       0x6a);
        }
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < *(int *)(temp_v3 + 0x918));
  }
  FUN_001677c0();
  temp_v14 = FUN_002f7730(*(unsigned int *)(temp_v3 + 0x910),temp_v27);
  if (temp_v14 == 0) {
    temp_v14 = 0;
    do {
      temp_v9 = FUN_001834a4(0x1e,0x34);
      FUN_00164168(*(unsigned int *)(temp_v3 + 0x91c),*(short *)(temp_v9 + 8) + temp_v6,
                   *(short *)(temp_v9 + 10) + temp_v15 + (temp_v14 * 0x10 - 5),0x6f,6,temp_v14);
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < 8);
    temp_v20 = (float)((unsigned long long)temp_v22 >> 0x20);
    FUN_001879d0(DAT_0059dbb4);
    FUN_001677c0();
    temp_v14 = FUN_001834a4(0x1e,0x48);
    FUN_001835b4(2,0x1e,0x44,(int)*(short *)(temp_v14 + 8) + (int)temp_v20 + temp_v4,
                 *(short *)(temp_v14 + 10) + temp_v5,0x6f);
    FUN_001835b4(2,0x1e,0x45,(int)*(short *)(temp_v14 + 8) + (int)temp_v20 + temp_v4,
                 *(short *)(temp_v14 + 10) + temp_v5,0x74);
  }
  temp_v14 = FUN_002f7730(*(unsigned int *)(temp_v3 + 0x910),temp_v27);
  if (temp_v14 == 1) {
    temp_v36 = 1;
    temp_v14 = 0;
    temp_v34 = 0;
    do {
      temp_v9 = FUN_003df004(temp_v27,temp_v14,&puStack_188);
      if (temp_v9 != 0) {
        temp_v28 = FUN_001834a4(0x1e,0x34);
        FUN_002c0940(temp_v35,temp_v26);
        temp_v37 = temp_v31 + temp_v14 * 8;
        FUN_002c0940(temp_v33,*(unsigned int *)(temp_v37 + 0x104));
        if (temp_v25 != '\0') {
          temp_v10 = FUN_002ebda8();
          temp_v9 = 0;
          if (0 < temp_v10) {
            do {
              psVar13 = (short *)FUN_00284fa4(temp_v9);
              temp_v13 = (int)(short)temp_v23;
              temp_v12 = (int)*psVar13;
              temp_v17 = SBORROW4(temp_v12,temp_v13);
              temp_v11 = temp_v12 - temp_v13;
              if (temp_v12 != temp_v13) {
                temp_v9 = temp_v9 + 1;
                temp_v17 = SBORROW4(temp_v10,temp_v9);
                temp_v11 = temp_v10 - temp_v9;
              }
            } while ((temp_v12 != temp_v13 && temp_v10 != temp_v9) && temp_v11 < 0 == temp_v17);
            if (psVar13 != (short *)0x0) {
              FUN_00100388(temp_v29,&LAB_002196dc,psVar13 + 1,temp_v35,temp_v33);
            }
          }
        }
        else {
          temp_v21 = (unsigned int)temp_v23;
          if (temp_v24 != '\0') {
            FUN_0015f858(temp_v21,0);
            FUN_00100388(temp_v29,&LAB_002196dc,temp_v21,temp_v35,temp_v33);
          }
          else {
            temp_v8 = FUN_00180114(temp_v21);
            FUN_00100388(temp_v29,&LAB_002196dc,temp_v8,temp_v35,temp_v33);
          }
        }
        if (temp_v26 < *(unsigned int *)(temp_v37 + 0x104)) {
          temp_v36 = 0;
        }
        VectorSignedToFloat(*(short *)(temp_v28 + 10) + temp_v15 + (temp_v14 * 0x10 - 5),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(short *)(temp_v28 + 8) + temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(3,0xffffffff,temp_v29);
        temp_v34 = temp_v34 + 1;
      }
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < 4);
    if (*(char *)(temp_v31 + 6) == '\0') {
      temp_v14 = FUN_0019f18c(temp_v27);
      if ((temp_v14 != 0) && (temp_v14 = FUN_003de830(temp_v27), temp_v14 == 0)) {
        temp_v36 = 0;
      }
      if ((*(char *)(temp_v31 + 6) == '\0') && (temp_v36 != 0)) {
        temp_v14 = FUN_001834a4(0x1e,0x34);
        temp_v9 = FUN_0019f18c(temp_v27);
        if (temp_v9 != 0) {
          temp_v21 = 9;
        }
        else if (*(short *)(temp_v31 + 0x124) == 1) {
          temp_v21 = 7;
        }
        else {
          temp_v21 = 8;
        }
        temp_v8 = FUN_00187180(0x34,0);
        temp_v9 = FUN_00192798();
        temp_v7 = FUN_00192748(temp_v8);
        if ((temp_v21 < temp_v7) && (temp_v9 + temp_v21 * 0x60 != -1)) {
          FUN_00100388(temp_v29,&LAB_002196e4);
          VectorSignedToFloat(temp_v34 * 0x10 + 0xb + *(short *)(temp_v14 + 10) + temp_v15,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v14 + 8) + temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(3,0xffffffff,temp_v29,0xb);
        }
      }
    }
    temp_v20 = (float)((unsigned long long)temp_v22 >> 0x20);
    FUN_001879d0(DAT_0059dbb4);
    FUN_001677c0();
    temp_v14 = FUN_001834a4(0x1e,0x49);
    FUN_001835b4(2,0x1e,0x44,(int)*(short *)(temp_v14 + 8) + (int)temp_v20 + temp_v4,
                 *(short *)(temp_v14 + 10) + temp_v5,0x6f);
    FUN_001835b4(2,0x1e,0x46,(int)*(short *)(temp_v14 + 8) + (int)temp_v20 + temp_v4,
                 *(short *)(temp_v14 + 10) + temp_v5,0x74);
  }
  temp_v14 = FUN_002f7730(*(unsigned int *)(temp_v3 + 0x910),temp_v27);
  if (temp_v14 == 2) {
    temp_v14 = 0;
    do {
      temp_v9 = FUN_001834a4(0x1e,0x34);
      FUN_00164168(*(unsigned int *)(temp_v3 + 0x924),*(short *)(temp_v9 + 8) + temp_v6,
                   *(short *)(temp_v9 + 10) + temp_v15 + (temp_v14 * 0x10 - 5),0x6f,6,temp_v14);
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < 8);
    temp_v20 = (float)((unsigned long long)temp_v22 >> 0x20);
    FUN_001879d0(DAT_0059dbb4);
    if (*(int *)(temp_v3 + 0x910) != 2) {
      temp_v14 = FUN_001834a4(0x1e,0x49);
    }
    else {
      temp_v14 = FUN_001834a4(0x1e,0x4a);
    }
    FUN_001677c0();
    FUN_001835b4(2,0x1e,0x44,(int)*(short *)(temp_v14 + 8) + (int)temp_v20 + temp_v4,
                 *(short *)(temp_v14 + 10) + temp_v5,0x6f);
    FUN_001835b4(2,0x1e,0x47,(int)*(short *)(temp_v14 + 8) + (int)temp_v20 + temp_v4,
                 *(short *)(temp_v14 + 10) + temp_v5,0x74);
  }
  temp_v14 = FUN_002f7730(*(unsigned int *)(temp_v3 + 0x910),temp_v27);
  if (temp_v14 == 3) {
    temp_v14 = 0;
    do {
      temp_v9 = FUN_001834a4(0x1e,0x34);
      FUN_00164168(*(unsigned int *)(temp_v3 + 0x928),*(short *)(temp_v9 + 8) + temp_v6,
                   *(short *)(temp_v9 + 10) + temp_v15 + (temp_v14 * 0x10 - 5),0x6f,6,temp_v14);
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < 8);
    temp_v20 = (float)((unsigned long long)temp_v22 >> 0x20);
    FUN_001879d0(DAT_0059dbb4);
    if (*(int *)(temp_v3 + 0x910) != 3) {
      if (*(int *)(temp_v3 + 0x910) != 2) {
        temp_v15 = FUN_001834a4(0x1e,0x49);
      }
      else {
        temp_v15 = FUN_001834a4(0x1e,0x4a);
      }
    }
    else {
      temp_v15 = FUN_001834a4(0x1e,0xc5);
    }
    FUN_001677c0();
    FUN_001835b4(2,0x1e,0x44,(int)*(short *)(temp_v15 + 8) + (int)temp_v20 + temp_v4,
                 *(short *)(temp_v15 + 10) + temp_v5,0x6f);
    FUN_001835b4(2,0x1e,0xc4,(int)*(short *)(temp_v15 + 8) + (int)temp_v20 + temp_v4,
                 *(short *)(temp_v15 + 10) + temp_v5,0x74);
  }
  FUN_001677c0();
  if (*(int *)(temp_v3 + 0x918) >= 2) {
    temp_v20 = 0.305f;
    FUN_001879d0(DAT_0059dbb4);
    temp_v8 = 4;
    temp_v16 = 5;
    if (*(int *)(temp_v3 + 4) == 5 || *(int *)(temp_v3 + 4) == 4) {
      temp_v2 = *(short *)(temp_v3 + 0x228);
      if (temp_v2 == 3 || temp_v2 == 1) {
        temp_v8 = 6;
      }
      else if (temp_v2 == 2 || temp_v2 == 0) {
        temp_v16 = 7;
      }
    }
    FUN_00164b5c(2,0x1e,temp_v8,temp_v4 + (int)temp_v20,temp_v5,0x79);
    FUN_00164b5c(2,0x1e,temp_v16,temp_v4 + (int)temp_v20,temp_v5,0x79);
  }
  FUN_001677c0();
  return;
}
