/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115cd0` (_code @ 0x115cd0, 0xc60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 7 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp1454; /* 0x1454: local_1454 */
    unsigned int sp1458; /* 0x1458: local_1458 */
    unsigned int sp145C; /* 0x145c: local_145c */
    unsigned int sp1460; /* 0x1460: local_1460 */
    unsigned int sp1464; /* 0x1464: local_1464 */
    unsigned int sp1468; /* 0x1468: local_1468 */
    unsigned long long sp1470; /* 0x1470: local_1470 */
} param_3_stack;

extern unsigned char LAB_00116934; /* 0x116934 */
extern unsigned char LAB_0011693c; /* 0x11693c */
extern unsigned char LAB_00116948; /* 0x116948 */
extern unsigned char LAB_00116950; /* 0x116950 */
extern unsigned char LAB_00116958; /* 0x116958 */
extern unsigned char LAB_00116960; /* 0x116960 */
extern int *DAT_00465128; /* 0x465128 */
extern int DAT_00465138; /* 0x465138 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b7928. */
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: FUN_002b7c54. */
extern int FUN_002b8cec(unsigned int);
extern int FUN_002bfde4(unsigned int);
extern int FUN_002c15fc(unsigned int);
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c5300. */


unsigned int FUN_00115cd0(int param_1,int param_2,int param_3)

{
/* irregular: 8 unstructured edge(s); 5 goto(s); irregular input(s): in_fpscr; 9 native warning(s); review required */
  short *psVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  short temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar11;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  int *piVar16;
  unsigned int in_fpscr;
  float temp_v13;
  unsigned int temp_v14;
  double temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  int temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  
  piVar16 = DAT_00465128;
  DAT_00465128[0xc] = param_2;
  piVar16[10] = param_1;
  piVar16[0xb] = param_3;
  FUN_002c4938(&temp_v18,0x1414);
  if ((param_1 == 0 && param_2 == 0) || param_3 == 0) {
    return 0;
  }
  if (DAT_00465138 != 0) {
    temp_v0 = FUN_002c15fc(8);
    if ((temp_v0 != 0) && (temp_v0 = FUN_002bfde4(2), temp_v0 != 0)) {
      for (temp_v0 = *DAT_00465128; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 4)) {
      }
    }
    if ((DAT_00465138 != 0) && (temp_v0 = FUN_002bfde4(5), temp_v0 != 0)) {
      DAT_00465128[3] = DAT_00465128[3] ^ 1;
    }
  }
  if ((DAT_00465128[3] & 1U) != 0) {
    return 0;
  }
  temp_v18 = 0;
  temp_v19 = 0xf0;
  if (DAT_00465138 != 0) {
    temp_v0 = FUN_002c15fc(0xd);
    if (temp_v0 != 0) {
      temp_v4 = (short)DAT_00465128[5] - 4;
      *(short *)(DAT_00465128 + 5) = temp_v4;
    }
    else {
      if (DAT_00465138 == 0) goto LAB_00115e6c;
      temp_v0 = FUN_002c15fc(0xc);
      if (temp_v0 != 0) {
        temp_v4 = (short)DAT_00465128[5] + 4;
        *(short *)(DAT_00465128 + 5) = temp_v4;
      }
    }
    if (DAT_00465138 != 0) {
      temp_v0 = FUN_002c15fc(0xf);
      if (temp_v0 != 0) {
        temp_v4 = *(short *)((int)DAT_00465128 + 0x16) + 4;
        *(short *)((int)DAT_00465128 + 0x16) = temp_v4;
      }
      else if (DAT_00465138 != 0) {
        temp_v0 = FUN_002c15fc(0xe);
        if (temp_v0 != 0) {
          temp_v4 = *(short *)((int)DAT_00465128 + 0x16) - 4;
          *(short *)((int)DAT_00465128 + 0x16) = temp_v4;
        }
      }
    }
  }
LAB_00115e6c:
  temp_v18 = temp_v18 + (short)DAT_00465128[5];
  temp_v19 = *(short *)((int)DAT_00465128 + 0x16) + temp_v19;
  if (DAT_00465138 != 0) {
    temp_v0 = FUN_002b8cec(4);
    if (temp_v0 != 0) {
      if ((DAT_00465138 != 0) && (temp_v0 = FUN_002c15fc(10), temp_v0 != 0)) {
        temp_v0 = DAT_00465128[4] + 10;
      }
      else {
        temp_v0 = DAT_00465128[4] + 1;
      }
      DAT_00465128[4] = temp_v0;
      if ((unsigned int)DAT_00465128[6] < (unsigned int)DAT_00465128[4]) {
        DAT_00465128[4] = DAT_00465128[6];
      }
    }
    else {
      if (DAT_00465138 == 0) goto LAB_00115f7c;
      temp_v0 = FUN_002b8cec(3);
      if (temp_v0 == 0) goto LAB_00115f7c;
      if ((DAT_00465138 != 0) && (temp_v0 = FUN_002c15fc(10), temp_v0 != 0)) {
        temp_v0 = DAT_00465128[4] - 10;
      }
      else {
        temp_v0 = DAT_00465128[4] - 1;
      }
      DAT_00465128[4] = temp_v0;
      if (DAT_00465128[4] < 0) {
        DAT_00465128[4] = 0;
      }
    }
    temp_v1 = 1;
  }
  else {
LAB_00115f7c:
    temp_v1 = 0;
  }
  temp_v8 = temp_v19;
  temp_v0 = temp_v18;
  temp_v17 = romwright_piece_4_4(temp_v1,0xff);
  (*(romwright_code *)DAT_00465128[0xb])
            (temp_v18 - 5,temp_v19 - 0x2b,temp_v18 + 0x101,temp_v19 + 2,0xff);
  temp_v10 = temp_v8 - 0x22;
  temp_v9 = temp_v0 + 0x102;
  VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002b7c54(&temp_v18,0xff00ff);
  VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002b7c54(&temp_v18,0xff00ff);
  VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002b7c54(&temp_v18,0xff00ff);
  VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002b7c54(&temp_v18,0xff00ff);
  temp_v9 = 0;
  temp_v2 = DAT_00465128[8];
  do {
    temp_v10 = temp_v0 + temp_v9 * 8;
    VectorSignedToFloat(temp_v8 - 0x22,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v8 - 0x27,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b7c54(&temp_v18,0xff00ff);
    temp_v3 = temp_v9 + (temp_v2 >> 0x14);
    if ((temp_v3 & 0x1f) != 0) {
      if ((temp_v3 & 7) == 0) {
        VectorSignedToFloat(temp_v8 - 0x22,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v8 - 0x2b,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002b7c54(&temp_v18,0xffffff);
      }
    }
    else {
      VectorSignedToFloat(temp_v8 - 2,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v8 - 0x2b,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002b7c54(&temp_v18,0xffff80);
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0x20);
  temp_v9 = (int)((unsigned long long)temp_v17 >> 0x20);
  temp_v0 = 0x100;
  FUN_002c5300(0x100,0x100,0,DAT_00465128[6] * 4 + 4,1);
  temp_v20 = temp_v0;
  FUN_002c4938(temp_v0,DAT_00465128[6] * 4 + 4);
  temp_v0 = 0x100;
  FUN_002c5300(0x100,0x100,0,0x400);
  temp_v21 = temp_v0;
  FUN_002c3944();
  temp_v8 = temp_v20;
  temp_v17 = 0x37000000;
  temp_v0 = 0;
  piVar16 = (int *)DAT_00465128[1];
  do {
    if (piVar16 == (int *)0x0) {
      if ((temp_v9 != 0) || (DAT_00465128[2] == 0)) {
        temp_v0 = DAT_00465128[6];
        if (temp_v0 >= 0x2001) {
          temp_v0 = 0x2000;
        }
        FUN_002b7bca(temp_v20,temp_v0,4);
        if ((unsigned int)DAT_00465128[6] >= 0x2000) {
          temp_v0 = 0x1fff - DAT_00465128[4];
        }
        else {
          temp_v0 = (DAT_00465128[6] - DAT_00465128[4]) - 1;
        }
        if (temp_v0 < 0) {
          temp_v0 = 0;
        }
        else if (temp_v0 >= 0x2000) {
          temp_v0 = 0x1fff;
        }
        DAT_00465128[2] = *(int *)(temp_v8 + temp_v0 * 4);
      }
      temp_v9 = temp_v21;
      temp_v8 = temp_v19;
      temp_v0 = temp_v18;
      piVar16 = &temp_v18;
      temp_v1 = 0xffff00c0;
      temp_v2 = 0;
      do {
        temp_v3 = temp_v2;
        piVar11 = piVar16;
        temp_v14 = temp_v1;
        if (((unsigned int)*(unsigned char *)(temp_v9 + (temp_v2 >> 3)) & (1 << (temp_v2 & 3))) != 0) {
          temp_v7 = (int)temp_v2 % 0x20;
          temp_v10 = (int)(temp_v2 + ((unsigned int)((int)temp_v2 >> 0x1f) >> 0x1b)) >> 5;
          do {
            if (((unsigned int)*(unsigned char *)(temp_v9 + (temp_v3 >> 3)) & (1 << (temp_v3 & 3))) == 0) break;
            temp_v3 = temp_v3 + 1;
          } while ((int)temp_v3 < 0x2000);
          temp_v5 = temp_v3 - temp_v2;
          temp_v6 = temp_v7 + temp_v5;
          while (temp_v6 >= 0x21) {
            temp_v6 = temp_v8 - temp_v7;
            temp_v12 = 0x20 - temp_v7;
            temp_v7 = temp_v0 + temp_v10;
            VectorSignedToFloat(temp_v6 - temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002b7c54(piVar16,temp_v1,temp_v7,temp_v6);
            temp_v10 = temp_v10 + 1;
            temp_v7 = 0;
            temp_v5 = temp_v5 - temp_v12;
            temp_v6 = temp_v5;
          }
          if (temp_v5 != 0) {
            temp_v7 = temp_v8 - temp_v7;
            temp_v10 = temp_v0 + temp_v10;
            VectorSignedToFloat(temp_v7 - temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002b7c54(piVar16,temp_v1,temp_v10,temp_v7);
          }
        }
        temp_v1 = temp_v14;
        piVar16 = piVar11;
        temp_v2 = temp_v3 + 1;
        if ((int)temp_v2 >= 0x2000) {
          if (DAT_00465128[2] != 0) {
            piVar11 = (int *)(DAT_00465128[2] - 0xc);
            temp_v9 = *piVar11;
            temp_v2 = (int)piVar11 - (DAT_00465128[8] + DAT_00465128[9]);
            if (((int)temp_v2 < 0) && (0 < (int)(temp_v2 + temp_v9))) {
              temp_v9 = temp_v9 + temp_v2;
              temp_v2 = 0;
LAB_001165f0:
              temp_v13 = (float)VectorUnsignedToFloat(temp_v9 << 5,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v16 = (float)temp_v17;
              temp_v9 = (int)(temp_v13 * temp_v16);
              if (temp_v9 < 1) {
                temp_v9 = 1;
              }
              temp_v13 = (float)VectorSignedToFloat(((int)temp_v2 % 0x20000) * 0x20,
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v10 = (int)(temp_v13 * temp_v16);
              temp_v13 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v7 = (int)(temp_v13 * temp_v16);
              temp_v5 = (0x100 - temp_v7) * 0x20 - temp_v10;
              if (temp_v5 < temp_v9) {
                temp_v9 = temp_v5;
              }
              piVar11 = piVar16;
              temp_v5 = temp_v10 + temp_v9;
              while (temp_v5 >= 0x21) {
                temp_v5 = temp_v8 - temp_v10;
                temp_v6 = 0x20 - temp_v10;
                temp_v10 = temp_v0 + temp_v7;
                VectorSignedToFloat(temp_v5 - temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_002b7c54(piVar11,0xff0000ff,temp_v10,temp_v5);
                temp_v7 = temp_v7 + 1;
                temp_v10 = 0;
                temp_v9 = temp_v9 - temp_v6;
                temp_v5 = temp_v9;
              }
              if (temp_v9 != 0) {
                temp_v8 = temp_v8 - temp_v10;
                temp_v0 = temp_v0 + temp_v7;
                VectorSignedToFloat(temp_v8 - temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_002b7c54(piVar11,0xff0000ff,temp_v8,temp_v0);
              }
            }
            else if (temp_v2 < 0x2000000) goto LAB_001165f0;
            if ((romwright_code *)DAT_00465128[0xc] != (romwright_code *)0x0 && piVar16 != (int *)0x0) {
              (*(romwright_code *)DAT_00465128[0xc])(piVar16 + 4,piVar16[0x504]);
              piVar16[0x504] = 0;
            }
          }
          temp_v10 = temp_v19;
          temp_v9 = temp_v18;
          temp_v7 = temp_v18 + 0x105;
          temp_v5 = temp_v19 - 0x3b;
          temp_v6 = DAT_00465128[2];
          temp_v0 = DAT_00465128[7];
          (*(romwright_code *)DAT_00465128[0xb])
                    (temp_v18 + 0x100,temp_v5,temp_v18 + 0x205,temp_v19 + 1,0xff);
          temp_v1 = VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002b7928(temp_v14,temp_v1,&LAB_00116934,DAT_00465128[9] + DAT_00465128[8]);
          temp_v1 = VectorSignedToFloat(temp_v10 - 0x2f,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002b7928(temp_v14,temp_v1,&LAB_0011693c,temp_v0);
          temp_v0 = 0;
          temp_v8 = *DAT_00465128;
          while (temp_v8 != 0) {
            psVar1 = (short *)(temp_v8 - 6);
            piVar16 = (int *)(temp_v8 - 0xc);
            temp_v8 = *(int *)(temp_v8 + 4);
            if (*psVar1 == 0) {
              temp_v0 = temp_v0 + *piVar16;
            }
          }
          temp_v13 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v15 = (double)(temp_v13 * 0.0009765625f * 0.0009765625f);
          temp_v1 = VectorSignedToFloat(temp_v10 - 0x23,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002b7928(temp_v14,temp_v1,&LAB_00116948,temp_v0,temp_v15);
          temp_v1 = VectorSignedToFloat(temp_v10 - 0x17,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002b7928(temp_v14,temp_v1,&LAB_00116950,DAT_00465128[6]);
          if (temp_v6 != 0) {
            temp_v2 = *(unsigned short *)(temp_v6 - 8) - 1;
            temp_v1 = VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v14 = VectorSignedToFloat(temp_v9 + 0x155,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002b7928(temp_v14,temp_v1,&LAB_00116958,
                         (((unsigned int)*(unsigned short *)(temp_v6 - 8) - ((temp_v6 + 0x30U) & temp_v2)) & temp_v2) +
                         temp_v6 + 0x30,temp_v15);
            temp_v1 = VectorSignedToFloat(temp_v10 - 0x2f,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v14 = VectorSignedToFloat(temp_v9 + 0x155,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_002b7928(temp_v14,temp_v1,&LAB_00116960,*(unsigned int *)(temp_v6 - 0xc));
          }
          if (temp_v20 != 0) {
            FUN_002c415c();
            temp_v20 = 0;
          }
          if (temp_v21 != 0) {
            FUN_002c415c();
          }
          return 0;
        }
      } while( 1 );
    }
    temp_v10 = DAT_00465128[8];
    temp_v7 = DAT_00465128[9];
    if (temp_v0 < 0x2000) {
      *(int **)(temp_v20 + temp_v0 * 4) = piVar16;
    }
    temp_v0 = temp_v0 + 1;
    temp_v10 = (int)(piVar16 + -3) - (temp_v10 + temp_v7);
    if (temp_v10 < 0x2000001) {
      temp_v5 = piVar16[-3];
      temp_v13 = (float)VectorUnsignedToFloat(temp_v5 << 5,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = (int)(temp_v13 * 7.6293945e-06f);
      if (temp_v7 < 1) {
        temp_v7 = 1;
      }
      if (temp_v10 < 0) {
        if (temp_v5 + temp_v10 < 1) {
          piVar16 = (int *)*piVar16;
          continue;
        }
        temp_v5 = temp_v10 * -0x20;
        temp_v10 = 0;
        temp_v13 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v7 = temp_v7 - (int)(temp_v13 * 7.6293945e-06f);
      }
      temp_v13 = (float)VectorSignedToFloat((temp_v10 % 0x20000) * 0x20,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = (int)(temp_v13 * 7.6293945e-06f);
      temp_v13 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v10 = (int)(temp_v13 * 7.6293945e-06f);
      if (temp_v5 + temp_v7 >= 0x21) {
        do {
          temp_v6 = 0x20 - temp_v5;
          temp_v2 = temp_v5 + temp_v10 * 0x20;
          temp_v3 = temp_v2 & 0x1f;
          temp_v2 = temp_v2 >> 5;
          while (temp_v6 != 0) {
            temp_v11 = temp_v3 + temp_v6;
            if (temp_v11 >= 0x20) {
              temp_v6 = temp_v6 - (0x20 - temp_v3);
              temp_v11 = ~((1 << temp_v3) - 1U);
            }
            else {
              temp_v6 = 0;
              temp_v11 = ((1 << (temp_v11 & 0xff)) - 1U) & ~((1 << temp_v3) - 1U);
            }
            temp_v3 = 0;
            *(unsigned int *)(temp_v21 + temp_v2 * 4) = temp_v11 | *(unsigned int *)(temp_v21 + temp_v2 * 4);
            temp_v2 = temp_v2 + 1;
          }
          temp_v10 = temp_v10 + 1;
          temp_v7 = temp_v7 - (0x20 - temp_v5);
          if (temp_v10 >= 0x100) goto LAB_001163c0;
          temp_v5 = 0;
        } while (temp_v7 >= 0x21);
      }
      else if (temp_v10 >= 0x100) {
        piVar16 = (int *)*piVar16;
        continue;
      }
      temp_v2 = temp_v5 + temp_v10 * 0x20;
      temp_v3 = temp_v2 & 0x1f;
      temp_v2 = temp_v2 >> 5;
      while (temp_v7 != 0) {
        temp_v11 = temp_v3 + temp_v7;
        if (temp_v11 >= 0x20) {
          temp_v7 = temp_v7 - (0x20 - temp_v3);
          temp_v11 = ~((1 << temp_v3) - 1U);
        }
        else {
          temp_v7 = 0;
          temp_v11 = ((1 << (temp_v11 & 0xff)) - 1U) & ~((1 << temp_v3) - 1U);
        }
        temp_v3 = 0;
        *(unsigned int *)(temp_v21 + temp_v2 * 4) = temp_v11 | *(unsigned int *)(temp_v21 + temp_v2 * 4);
        temp_v2 = temp_v2 + 1;
      }
    }
LAB_001163c0:
    piVar16 = (int *)*piVar16;
  } while( 1 );
}
