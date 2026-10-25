/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014e444` (_code @ 0x14e444, 0xc60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int asdMemoryAlloc(...);
int FUN_001653a0(...);
int FUN_001655fc(...);
int asdMemFree(void);
int sysMemClear(...);
int rt_memclr(void);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
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

extern unsigned char LAB_0014f0a8; /* 0x14f0a8 */
extern unsigned char LAB_0014f0b0; /* 0x14f0b0 */
extern unsigned char LAB_0014f0bc; /* 0x14f0bc */
extern unsigned char LAB_0014f0c4; /* 0x14f0c4 */
extern unsigned char LAB_0014f0cc; /* 0x14f0cc */
extern unsigned char LAB_0014f0d4; /* 0x14f0d4 */
extern int *DAT_005b4030; /* 0x5b4030 */
extern int DAT_005b4040; /* 0x5b4040 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: qsort. */
/* Supplied declaration required: asdMemoryAlloc. */
extern int slotIsActive(unsigned int);
extern int padButtonRepeat(unsigned int);
/* Supplied declaration required: FUN_001653a0. */
/* Supplied declaration required: FUN_001655fc. */
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_memclr. */


unsigned int FUN_0014e444(int param_1,int param_2,int param_3)

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
  
  piVar16 = DAT_005b4030;
  DAT_005b4030[0xc] = param_2;
  piVar16[10] = param_1;
  piVar16[0xb] = param_3;
  sysMemClear(&temp_v18,0x1414);
  if ((param_1 == 0 && param_2 == 0) || param_3 == 0) {
    return 0;
  }
  if (DAT_005b4040 != 0) {
    temp_v0 = slotIsActive(8);
    if ((temp_v0 != 0) && (temp_v0 = padButtonIsPressed(2), temp_v0 != 0)) {
      for (temp_v0 = *DAT_005b4030; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 4)) {
      }
    }
    if ((DAT_005b4040 != 0) && (temp_v0 = padButtonIsPressed(5), temp_v0 != 0)) {
      DAT_005b4030[3] = DAT_005b4030[3] ^ 1;
    }
  }
  if ((DAT_005b4030[3] & 1U) != 0) {
    return 0;
  }
  temp_v18 = 0;
  temp_v19 = 0xf0;
  if (DAT_005b4040 != 0) {
    temp_v0 = slotIsActive(0xd);
    if (temp_v0 != 0) {
      temp_v4 = (short)DAT_005b4030[5] - 4;
      *(short *)(DAT_005b4030 + 5) = temp_v4;
    }
    else {
      if (DAT_005b4040 == 0) goto LAB_0014e5e0;
      temp_v0 = slotIsActive(0xc);
      if (temp_v0 != 0) {
        temp_v4 = (short)DAT_005b4030[5] + 4;
        *(short *)(DAT_005b4030 + 5) = temp_v4;
      }
    }
    if (DAT_005b4040 != 0) {
      temp_v0 = slotIsActive(0xf);
      if (temp_v0 != 0) {
        temp_v4 = *(short *)((int)DAT_005b4030 + 0x16) + 4;
        *(short *)((int)DAT_005b4030 + 0x16) = temp_v4;
      }
      else if (DAT_005b4040 != 0) {
        temp_v0 = slotIsActive(0xe);
        if (temp_v0 != 0) {
          temp_v4 = *(short *)((int)DAT_005b4030 + 0x16) - 4;
          *(short *)((int)DAT_005b4030 + 0x16) = temp_v4;
        }
      }
    }
  }
LAB_0014e5e0:
  temp_v18 = temp_v18 + (short)DAT_005b4030[5];
  temp_v19 = *(short *)((int)DAT_005b4030 + 0x16) + temp_v19;
  if (DAT_005b4040 != 0) {
    temp_v0 = padButtonRepeat(4);
    if (temp_v0 != 0) {
      if ((DAT_005b4040 != 0) && (temp_v0 = slotIsActive(10), temp_v0 != 0)) {
        temp_v0 = DAT_005b4030[4] + 10;
      }
      else {
        temp_v0 = DAT_005b4030[4] + 1;
      }
      DAT_005b4030[4] = temp_v0;
      if ((unsigned int)DAT_005b4030[6] < (unsigned int)DAT_005b4030[4]) {
        DAT_005b4030[4] = DAT_005b4030[6];
      }
    }
    else {
      if (DAT_005b4040 == 0) goto LAB_0014e6f0;
      temp_v0 = padButtonRepeat(3);
      if (temp_v0 == 0) goto LAB_0014e6f0;
      if ((DAT_005b4040 != 0) && (temp_v0 = slotIsActive(10), temp_v0 != 0)) {
        temp_v0 = DAT_005b4030[4] - 10;
      }
      else {
        temp_v0 = DAT_005b4030[4] - 1;
      }
      DAT_005b4030[4] = temp_v0;
      if (DAT_005b4030[4] < 0) {
        DAT_005b4030[4] = 0;
      }
    }
    temp_v1 = 1;
  }
  else {
LAB_0014e6f0:
    temp_v1 = 0;
  }
  temp_v8 = temp_v19;
  temp_v0 = temp_v18;
  temp_v17 = romwright_piece_4_4(temp_v1,0xff);
  (*(romwright_code *)DAT_005b4030[0xb])
            (temp_v18 - 5,temp_v19 - 0x2b,temp_v18 + 0x101,temp_v19 + 2,0xff);
  temp_v10 = temp_v8 - 0x22;
  temp_v9 = temp_v0 + 0x102;
  VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001653a0(&temp_v18,0xff00ff);
  VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001653a0(&temp_v18,0xff00ff);
  VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001653a0(&temp_v18,0xff00ff);
  VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001653a0(&temp_v18,0xff00ff);
  temp_v9 = 0;
  temp_v2 = DAT_005b4030[8];
  do {
    temp_v10 = temp_v0 + temp_v9 * 8;
    VectorSignedToFloat(temp_v8 - 0x22,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v8 - 0x27,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001653a0(&temp_v18,0xff00ff);
    temp_v3 = temp_v9 + (temp_v2 >> 0x14);
    if ((temp_v3 & 0x1f) != 0) {
      if ((temp_v3 & 7) == 0) {
        VectorSignedToFloat(temp_v8 - 0x22,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v8 - 0x2b,(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001653a0(&temp_v18,0xffffff);
      }
    }
    else {
      VectorSignedToFloat(temp_v8 - 2,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v8 - 0x2b,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001653a0(&temp_v18,0xffff80);
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0x20);
  temp_v9 = (int)((unsigned long long)temp_v17 >> 0x20);
  temp_v0 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,DAT_005b4030[6] * 4 + 4,1);
  temp_v20 = temp_v0;
  sysMemClear(temp_v0,DAT_005b4030[6] * 4 + 4);
  temp_v0 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,0x400);
  temp_v21 = temp_v0;
  rt_memclr();
  temp_v8 = temp_v20;
  temp_v17 = 0x37000000;
  temp_v0 = 0;
  piVar16 = (int *)DAT_005b4030[1];
  do {
    if (piVar16 == (int *)0x0) {
      if ((temp_v9 != 0) || (DAT_005b4030[2] == 0)) {
        temp_v0 = DAT_005b4030[6];
        if (temp_v0 >= 0x2001) {
          temp_v0 = 0x2000;
        }
        qsort(temp_v20,temp_v0,4);
        if ((unsigned int)DAT_005b4030[6] >= 0x2000) {
          temp_v0 = 0x1fff - DAT_005b4030[4];
        }
        else {
          temp_v0 = (DAT_005b4030[6] - DAT_005b4030[4]) - 1;
        }
        if (temp_v0 < 0) {
          temp_v0 = 0;
        }
        else if (temp_v0 >= 0x2000) {
          temp_v0 = 0x1fff;
        }
        DAT_005b4030[2] = *(int *)(temp_v8 + temp_v0 * 4);
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
            FUN_001653a0(piVar16,temp_v1,temp_v7,temp_v6);
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
            FUN_001653a0(piVar16,temp_v1,temp_v10,temp_v7);
          }
        }
        temp_v1 = temp_v14;
        piVar16 = piVar11;
        temp_v2 = temp_v3 + 1;
        if ((int)temp_v2 >= 0x2000) {
          if (DAT_005b4030[2] != 0) {
            piVar11 = (int *)(DAT_005b4030[2] - 0x14);
            temp_v9 = *piVar11;
            temp_v2 = (int)piVar11 - (DAT_005b4030[8] + DAT_005b4030[9]);
            if (((int)temp_v2 < 0) && (0 < (int)(temp_v2 + temp_v9))) {
              temp_v9 = temp_v9 + temp_v2;
              temp_v2 = 0;
LAB_0014ed64:
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
                FUN_001653a0(piVar11,0xff0000ff,temp_v10,temp_v5);
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
                FUN_001653a0(piVar11,0xff0000ff,temp_v8,temp_v0);
              }
            }
            else if (temp_v2 < 0x2000000) goto LAB_0014ed64;
            if ((romwright_code *)DAT_005b4030[0xc] != (romwright_code *)0x0 && piVar16 != (int *)0x0) {
              (*(romwright_code *)DAT_005b4030[0xc])(piVar16 + 4,piVar16[0x504]);
              piVar16[0x504] = 0;
            }
          }
          temp_v10 = temp_v19;
          temp_v9 = temp_v18;
          temp_v7 = temp_v18 + 0x105;
          temp_v5 = temp_v19 - 0x3b;
          temp_v6 = DAT_005b4030[2];
          temp_v0 = DAT_005b4030[7];
          (*(romwright_code *)DAT_005b4030[0xb])
                    (temp_v18 + 0x100,temp_v5,temp_v18 + 0x205,temp_v19 + 1,0xff);
          temp_v1 = VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001655fc(temp_v14,temp_v1,&LAB_0014f0a8,DAT_005b4030[9] + DAT_005b4030[8]);
          temp_v1 = VectorSignedToFloat(temp_v10 - 0x2f,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001655fc(temp_v14,temp_v1,&LAB_0014f0b0,temp_v0);
          temp_v0 = 0;
          temp_v8 = *DAT_005b4030;
          while (temp_v8 != 0) {
            psVar1 = (short *)(temp_v8 - 0xe);
            piVar16 = (int *)(temp_v8 - 0x14);
            temp_v8 = *(int *)(temp_v8 + 4);
            if (*psVar1 == 0) {
              temp_v0 = temp_v0 + *piVar16;
            }
          }
          temp_v13 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v15 = (double)(temp_v13 * 0.0009765625f * 0.0009765625f);
          temp_v1 = VectorSignedToFloat(temp_v10 - 0x23,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001655fc(temp_v14,temp_v1,&LAB_0014f0bc,temp_v0,temp_v15);
          temp_v1 = VectorSignedToFloat(temp_v10 - 0x17,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001655fc(temp_v14,temp_v1,&LAB_0014f0c4,DAT_005b4030[6]);
          if (temp_v6 != 0) {
            temp_v2 = *(unsigned short *)(temp_v6 - 0x10) - 1;
            temp_v1 = VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v14 = VectorSignedToFloat(temp_v9 + 0x155,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_001655fc(temp_v14,temp_v1,&LAB_0014f0cc,
                         (((unsigned int)*(unsigned short *)(temp_v6 - 0x10) - ((temp_v6 + 0x2cU) & temp_v2)) & temp_v2) +
                         temp_v6 + 0x2c,temp_v15);
            temp_v1 = VectorSignedToFloat(temp_v10 - 0x2f,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v14 = VectorSignedToFloat(temp_v9 + 0x155,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_001655fc(temp_v14,temp_v1,&LAB_0014f0d4,*(unsigned int *)(temp_v6 - 0x14));
          }
          if (temp_v20 != 0) {
            asdMemFree();
            temp_v20 = 0;
          }
          if (temp_v21 != 0) {
            asdMemFree();
          }
          return 0;
        }
      } while( 1 );
    }
    temp_v10 = DAT_005b4030[8];
    temp_v7 = DAT_005b4030[9];
    if (temp_v0 < 0x2000) {
      *(int **)(temp_v20 + temp_v0 * 4) = piVar16;
    }
    temp_v0 = temp_v0 + 1;
    temp_v10 = (int)(piVar16 + -5) - (temp_v10 + temp_v7);
    if (temp_v10 < 0x2000001) {
      temp_v5 = piVar16[-5];
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
          if (temp_v10 >= 0x100) goto LAB_0014eb34;
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
LAB_0014eb34:
    piVar16 = (int *)*piVar16;
  } while( 1 );
}

} /* extern "C" */
