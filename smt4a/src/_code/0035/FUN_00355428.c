/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00355428` (_code @ 0x355428, 0xed0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp120; /* 0x120: local_120 */
} void_stack;

extern unsigned char LAB_0035580c; /* 0x35580c */
extern unsigned char LAB_00355ef4; /* 0x355ef4 */
extern int DAT_005806c4; /* 0x5806c4 */
extern int DAT_0059dbb4; /* 0x59dbb4 */
extern unsigned int DAT_005f16d4; /* 0x5f16d4 */
extern short DAT_005f1d72; /* 0x5f1d72 */
extern short DAT_005f1e1a; /* 0x5f1e1a */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001689e8. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00184c40. */
/* Supplied declaration required: FUN_003799d0. */
extern int FUN_0039a678(void);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00355428(void)

{
/* irregular: 1 unstructured edge(s); 1 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  int temp_v9;
  unsigned char temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned long long temp_v15;
  int temp_v16;
  int temp_v17;
  unsigned char temp_v18 [68];
  unsigned int temp_v19;
  unsigned char temp_v20 [80];
  int temp_v21;
  int temp_v22;
  int temp_v23;
  int temp_v24;
  int temp_v25;
  int temp_v26;
  int temp_v27;
  int temp_v28;
  int temp_v29;
  
  temp_v1 = DAT_005806c4;
  if (*(char *)(DAT_005806c4 + 0x50) != '\0') {
    temp_v15 = 0;
    temp_v11 = 0.0f;
    temp_v3 = *(int *)(DAT_005806c4 + 0x54);
    if (temp_v3 < 6) {
      VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = (float)VectorSignedToFloat(temp_v3 * 0x43,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = temp_v11 + -400.0f;
    }
    if (*(int *)(DAT_005806c4 + 0xc) == 0) {
      temp_v3 = FUN_001834a4(8,0x10b);
      temp_v14 = (int)temp_v11;
      temp_v7 = 0x107;
      do {
        FUN_001835b4(2,8,temp_v7,temp_v14,0,0xb);
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 0x10b);
      temp_v4 = DAT_005f16d4;
      FUN_003799d0(DAT_005f16d4);
      FUN_00100388(temp_v18,&LAB_0035580c,temp_v4);
      VectorSignedToFloat((int)*(short *)(temp_v3 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(3,0xffffffff,temp_v18);
    }
    if (*(int *)(temp_v1 + 0x54) >= 6) {
      temp_v15 = temp_v15 & 0xffffffff;
    }
    else {
      temp_v11 = (float)VectorSignedToFloat(*(int *)(temp_v1 + 0x54) * 0x43,(unsigned char)(in_fpscr >> 0x16) & 3
                                         );
      temp_v15 = (unsigned long long)(unsigned int)(400.0f - temp_v11);
    }
    rt_memcpy_w(temp_v20,"骁骁骁骁骁",0x50);
    temp_v13 = (unsigned int)temp_v15;
    temp_v3 = 0;
    if ((*(unsigned int *)(temp_v1 + 0xc) < 2) || (*(char *)(temp_v1 + 0x4c8) == '\x01')) {
      temp_v7 = FUN_0039a678();
      temp_v25 = FUN_001834a4(0x13,0x11ce);
      temp_v26 = FUN_001834a4(0x13,0x11ca);
      temp_v27 = FUN_001834a4(0x13,0x11cb);
      temp_v28 = FUN_001834a4(0x13,0x11cc);
      temp_v29 = FUN_001834a4(0x13,0x11cd);
      FUN_001677c0();
      temp_v2 = 0 < *(int *)(temp_v1 + 0xbc);
      if (0 < *(int *)(temp_v1 + 0xc0)) {
        temp_v2 = temp_v2 + '\x01';
      }
      if (0 < *(int *)(temp_v1 + 0xc4)) {
        temp_v2 = temp_v2 + '\x01';
      }
      if (0 < *(int *)(temp_v1 + 200)) {
        temp_v2 = temp_v2 + '\x01';
      }
      if (0 < *(int *)(temp_v1 + 0xcc)) {
        temp_v2 = temp_v2 + '\x01';
      }
      if (temp_v2 != '\0') {
        FUN_00164b5c(2,0x13,temp_v2 + ' ',temp_v7,0,0xb);
      }
      temp_v15 = (unsigned long long)temp_v13;
      temp_v14 = 0;
      do {
        temp_v8 = *(int *)(temp_v1 + (4 - temp_v3) * 4 + 0xbc);
        temp_v10 = temp_v8 == 9999;
        temp_v9 = temp_v8;
        if (temp_v8 >= 10000) {
          temp_v9 = 9999;
        }
        temp_v5 = temp_v8 - 9999;
        if (9999 >= temp_v8) {
          temp_v10 = temp_v9 == 0;
          temp_v5 = temp_v9;
        }
        if (!temp_v10 && temp_v5 < 0 == (temp_v8 >= 10000 && SBORROW4(temp_v8,9999))) {
          temp_v8 = temp_v14 + 1;
          temp_v14 = FUN_001834a4(0x13,temp_v14 + 0x11cf);
          VectorSignedToFloat(*(short *)(temp_v14 + 8) + temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v14 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(2,0xffffffff,temp_v20 + temp_v3 * 0x10);
          FUN_001835b4(2,0x13,0x11c7,*(short *)(temp_v14 + 8) + temp_v7,(int)*(short *)(temp_v14 + 10),0xb
                      );
          FUN_001835b4(2,7,0xd,(int)*(short *)(temp_v14 + 8) + (int)*(short *)(temp_v25 + 8) + temp_v7,
                       (int)*(short *)(temp_v25 + 10) + (int)*(short *)(temp_v14 + 10),0xb);
          if (temp_v9 >= 1000) {
            FUN_001835b4(2,7,temp_v9 / 1000,
                         (int)*(short *)(temp_v14 + 8) + (int)*(short *)(temp_v29 + 8) + temp_v7,
                         (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v29 + 10),0xb);
          }
          if (temp_v9 >= 100) {
            FUN_001835b4(2,7,(temp_v9 % 1000) / 100,
                         (int)*(short *)(temp_v14 + 8) + (int)*(short *)(temp_v28 + 8) + temp_v7,
                         (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v28 + 10),0xb);
          }
          if (temp_v9 >= 10) {
            FUN_001835b4(2,7,(temp_v9 % 100) / 10,
                         (int)*(short *)(temp_v14 + 8) + (int)*(short *)(temp_v27 + 8) + temp_v7,
                         (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v27 + 10),0xb);
          }
          FUN_001835b4(2,7,temp_v9 % 10,
                       (int)*(short *)(temp_v26 + 8) + (int)*(short *)(temp_v14 + 8) + temp_v7,
                       (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v26 + 10),0xb);
          temp_v9 = DAT_0059dbb4;
          temp_v5 = FUN_00169294(6,1,0);
          piVar10 = (int *)(temp_v9 + 0x12b8);
          temp_v6 = piVar10[*piVar10 + 2];
          piVar10[*piVar10 + 2] = temp_v5;
          if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v6 != temp_v5) {
            (**(romwright_code **)(temp_v9 + 0x12d4))();
            *(unsigned char *)(temp_v9 + 0x12d0) = 0;
          }
          temp_v9 = temp_v1 + (5 - temp_v3) * 0x8c;
          FUN_001677c0();
          FUN_00184c40(temp_v9 + 0x148,(int)(short)(*(short *)(temp_v14 + 8) + (short)temp_v7),
                       (int)*(short *)(temp_v14 + 10));
          FUN_001634b4(temp_v9 + 0x148);
          FUN_001677c0();
          temp_v9 = DAT_0059dbb4;
          temp_v5 = FUN_00169294(6,7,0);
          piVar10 = (int *)(temp_v9 + 0x12b8);
          temp_v6 = piVar10[*piVar10 + 2];
          piVar10[*piVar10 + 2] = temp_v5;
          temp_v14 = temp_v8;
          if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v6 != temp_v5) {
            (**(romwright_code **)(temp_v9 + 0x12d4))();
            *(unsigned char *)(temp_v9 + 0x12d0) = 0;
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 5);
      FUN_001677c0();
    }
    temp_v16 = 0x110d;
    if (!(*(int *)(temp_v1 + 0xc) == 2 || *(int *)(temp_v1 + 0xc) == 3)) {
      temp_v3 = (int)(float)temp_v15;
      if (*(char *)(temp_v1 + 0x8c) != '\0') {
        FUN_00164b5c(2,0x13,0x29,temp_v3,0,0xb);
        temp_v17 = 0x1142;
        temp_v16 = 0x1148;
      }
      else {
        FUN_00164b5c(2,0x13,0x1a,temp_v3,0,0xb);
        temp_v17 = 0x1105;
      }
    }
    else {
      FUN_00164b5c(2,0x13,0x1e,(int)(float)temp_v15,0,0xb);
      temp_v16 = 0x110d;
      temp_v17 = 0x1105;
    }
    temp_v3 = 0;
    if (temp_v3 < DAT_005f1d72) {
      do {
        temp_v14 = FUN_001834a4(0x13,temp_v17 + temp_v3);
        temp_v9 = FUN_001834a4(0x13,temp_v16 + temp_v3);
        temp_v8 = FUN_001834a4(0x13,0x1101);
        temp_v5 = FUN_001834a4(0x13,0x1100);
        temp_v23 = FUN_001834a4(0x13,0x1104);
        temp_v22 = FUN_001834a4(0x13,0x1102);
        temp_v21 = FUN_001834a4(0x13,0x1103);
        temp_v7 = temp_v3 * 2;
        temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v14 + 8),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
        temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        FUN_001689e8((int)*(short *)(temp_v7 + 0x5f1d20),(int)(temp_v12 + (float)temp_v15 + temp_v11),
                     (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v5 + 10),0x6f,0);
        if (*(char *)(temp_v3 + 0x5f1d40) != '\0') {
          temp_v6 = temp_v1 + temp_v3 * 4;
          temp_v5 = *(int *)(temp_v6 + 0x4a0);
          if (temp_v5 < 0x11) {
            VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          else {
            temp_v5 = temp_v5 - 0x10;
            VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          FUN_001677c0(temp_v5);
          temp_v5 = *(int *)(temp_v6 + 0x4a0) + 1;
          *(int *)(temp_v6 + 0x4a0) = temp_v5;
          if (temp_v5 >= 0x21) {
            *(unsigned int *)(temp_v6 + 0x4a0) = 0;
          }
          if (*(int *)(temp_v1 + 0x54) % 6 < 6) {
            temp_v5 = 0x10b9;
            do {
              temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              FUN_001835b4(2,0x13,temp_v5,(int)(temp_v11 + (float)temp_v15),(int)*(short *)(temp_v9 + 10),
                           0xb);
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < 0x10bc);
            FUN_001677c0();
          }
        }
        temp_v9 = (int)*(short *)(temp_v7 + 0x5f1d20);
        FUN_0015f858(temp_v9,0);
        FUN_00100388(temp_v18,&LAB_00355ef4,temp_v9);
        VectorSignedToFloat((int)*(short *)(temp_v14 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v8 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v8 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(2,0xffffffff,temp_v18,(int)*(short *)(temp_v8 + 8));
        temp_v0 = *(short *)(temp_v7 + 0x5f1d50);
        temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v14 + 8),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
        FUN_001835b4(2,0x13,0x10fe,(int)(temp_v11 + (float)temp_v15),(int)*(short *)(temp_v14 + 10),0xb);
        temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v14 + 8),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
        temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v23 + 8),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001835b4(2,7,0xd,(int)(temp_v12 + (float)temp_v15 + temp_v11),
                     (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v23 + 10),0xb);
        temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v14 + 8),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
        temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v21 + 8),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001835b4(2,7,(int)temp_v0 / 10,(int)(temp_v11 + (float)temp_v15 + temp_v12),
                     (int)*(short *)(temp_v21 + 10) + (int)*(short *)(temp_v14 + 10),0xb);
        temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v14 + 8),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
        temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v22 + 8),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001835b4(2,7,(int)temp_v0 % 10,(int)(temp_v12 + (float)temp_v15 + temp_v11),
                     (int)*(short *)(temp_v22 + 10) + (int)*(short *)(temp_v14 + 10),0xb);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < DAT_005f1d72);
    }
    temp_v3 = 0;
    if (0 < DAT_005f1e1a) {
      do {
        temp_v15 = temp_v15 & 0xffffffff;
        temp_v19 = 0x1146;
        temp_v21 = 0x114c;
LAB_00355f74:
        temp_v14 = FUN_001834a4(0x13,temp_v19);
        temp_v9 = FUN_001834a4(0x13,temp_v21);
        temp_v8 = FUN_001834a4(0x13,0x1101);
        temp_v5 = FUN_001834a4(0x13,0x1100);
        temp_v24 = FUN_001834a4(0x13,0x1104);
        temp_v22 = FUN_001834a4(0x13,0x1102);
        temp_v23 = FUN_001834a4(0x13,0x1103);
        temp_v7 = temp_v3 * 2;
        temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v14 + 8),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
        temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 8),(unsigned char)(in_fpscr >> 0x16) & 3)
        ;
        FUN_001689e8((int)*(short *)(temp_v7 + 0x5f1dc8),(int)(temp_v12 + (float)temp_v15 + temp_v11),
                     (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v5 + 10),0x6f,0);
        if (*(char *)(temp_v3 + 0x5f1de8) != '\0') {
          temp_v6 = temp_v1 + temp_v3 * 4;
          temp_v5 = *(int *)(temp_v6 + 0x4b0);
          if (temp_v5 < 0x11) {
            VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          else {
            temp_v5 = temp_v5 - 0x10;
            VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          }
          FUN_001677c0(temp_v5);
          temp_v5 = *(int *)(temp_v6 + 0x4b0) + 1;
          *(int *)(temp_v6 + 0x4b0) = temp_v5;
          if (temp_v5 >= 0x21) {
            *(unsigned int *)(temp_v6 + 0x4b0) = 0;
          }
          if (*(int *)(temp_v1 + 0x94) % 10 < 10) {
            temp_v5 = 0x10b9;
            do {
              temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              FUN_001835b4(2,0x13,temp_v5,(int)(temp_v11 + (float)temp_v15),(int)*(short *)(temp_v9 + 10),
                           0xb);
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < 0x10bc);
            FUN_001677c0();
          }
        }
        temp_v9 = (int)*(short *)(temp_v7 + 0x5f1dc8);
        FUN_0015f858(temp_v9,0);
        FUN_00100388(temp_v18,&LAB_00355ef4,temp_v9);
        VectorSignedToFloat((int)*(short *)(temp_v14 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v8 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v8 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(2,0xffffffff,temp_v18,(int)*(short *)(temp_v8 + 8));
        temp_v0 = *(short *)(temp_v7 + 0x5f1df8);
        temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v14 + 8),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
        FUN_001835b4(2,0x13,0x10fe,(int)(temp_v11 + (float)temp_v15),(int)*(short *)(temp_v14 + 10),0xb);
        temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v14 + 8),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
        temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v24 + 8),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001835b4(2,7,0xd,(int)(temp_v12 + (float)temp_v15 + temp_v11),
                     (int)*(short *)(temp_v14 + 10) + (int)*(short *)(temp_v24 + 10),0xb);
        temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v14 + 8),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
        temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v23 + 8),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001835b4(2,7,(int)temp_v0 / 10,(int)(temp_v11 + (float)temp_v15 + temp_v12),
                     (int)*(short *)(temp_v23 + 10) + (int)*(short *)(temp_v14 + 10),0xb);
        temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v14 + 8),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
        temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v22 + 8),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001835b4(2,7,(int)temp_v0 % 10,(int)(temp_v12 + (float)temp_v15 + temp_v11),
                     (int)*(short *)(temp_v22 + 10) + (int)*(short *)(temp_v14 + 10),0xb);
        temp_v3 = temp_v3 + 1;
        if (DAT_005f1e1a <= temp_v3) {
          return;
        }
      } while (temp_v3 == 0);
      if (temp_v3 != 1) {
        if (temp_v3 != 2) {
          if (temp_v3 == 3) {
            temp_v21 = 0x114f;
            temp_v19 = 0x114f;
            temp_v21 = temp_v21 + 2;
          }
        }
        else {
          temp_v21 = 0x114e;
          temp_v19 = 0x114e;
          temp_v21 = temp_v21 + 2;
        }
      }
      else {
        temp_v19 = 0x1147;
        temp_v21 = 0x114d;
      }
      goto LAB_00355f74;
    }
  }
  return;
}
