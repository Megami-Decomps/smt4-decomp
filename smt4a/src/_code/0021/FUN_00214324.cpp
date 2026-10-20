/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00214324` (_code @ 0x214324, 0xa70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00262790(void);
int FUN_003423cc(...);
int FUN_003fd63c(...);

int FUN_00100388(...);
int FUN_00137ee0(...);
int FUN_001631d0(unsigned int, int);
int FUN_001656e0(...);
int FUN_001681cc(...);
int FUN_00168980(...);
int FUN_0018719c(...);
int FUN_0019a5a0(...);
int FUN_0019a7f4(int, int);
int FUN_0019c364(...);
int FUN_001add24(int);
int FUN_001f4908(...);
int FUN_0020214c(void);
int FUN_0021c354(int);
int FUN_00224880(...);
int FUN_00275bc8(void);
int FUN_00275f44(...);
int FUN_003491e8(void);
int FUN_0035b304(void);
int FUN_0037b450(void);
int FUN_003c3e14(void);
int FUN_003c8f94(...);
int FUN_003d2d6c(int);
int FUN_003d54f8(...);

/* stack frame of void: 6 slot(s), 22 byte(s) */
typedef struct {
    unsigned short sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern unsigned char LAB_00214b8c; /* 0x214b8c */
extern unsigned char LAB_00214ba8; /* 0x214ba8 */
extern unsigned int *DAT_00588124; /* 0x588124 */
extern int DAT_005f1610; /* 0x5f1610 */
extern signed char DAT_005f1b70; /* 0x5f1b70 */
extern unsigned int DAT_005f1b74; /* 0x5f1b74 */
extern unsigned int DAT_005f1b78; /* 0x5f1b78 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00137ee0. */
/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_001656e0. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00168980. */
extern int FUN_001801b8(unsigned short, unsigned char);
extern int FUN_0018206c(unsigned int, unsigned short);
extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018719c. */
extern unsigned int FUN_00192748(unsigned int);
extern short *FUN_00192798(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_001f4908. */
/* Supplied declaration required: FUN_0020214c. */
extern int FUN_002121c4(unsigned int);
/* Supplied declaration required: FUN_0021c354. */
/* Supplied declaration required: FUN_00224880. */
/* Supplied declaration required: FUN_00262790. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_002a4b60(void);
extern int FUN_002a4b74(void);
extern int FUN_0031d62c(void);
extern int FUN_00331194(void);
/* Supplied declaration required: FUN_003423cc. */
/* Supplied declaration required: FUN_003491e8. */
extern unsigned int FUN_00357bc8(unsigned int, int);
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_003c3e14. */
/* Supplied declaration required: FUN_003c8f94. */
/* Supplied declaration required: FUN_003d2d6c. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_00214324(void)

{
/* irregular: 7 goto(s); 27 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  short *psVar7;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar10;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int uStack_64;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned short temp_v13;
  
  puVar2 = DAT_00588124;
  puVar4 = &temp_v8;
  puVar5 = &temp_v8;
  switch(DAT_00588124[0x3c]) {
  case 0:
    temp_v7 = FUN_0018206c(0,*(unsigned short *)((int)DAT_00588124 + 0x102));
    if (temp_v7 != 0) {
      FUN_003d54f8(0,1);
      FUN_003d54f8(1);
      temp_v7 = 0;
      do {
        if (((*(short *)(puVar2[9] + temp_v7 * 0x18 + 0x24) != 0) &&
            (temp_v5 = FUN_0018719c(), temp_v5 != 0)) &&
           ((*(short *)(puVar2[9] + temp_v7 * 0x18 + 0x26) == 0 ||
            (temp_v5 = FUN_0018719c(), temp_v5 == 0)))) {
          temp_v8 = (unsigned int)*(unsigned short *)(puVar2[9] + temp_v7 * 0x18 + 0x28);
          uStack_64 = 0xffffffff;
          puVar2 = (unsigned int *)(temp_v7 * 0x18 + 0x2a + puVar2[9]);
          temp_v9 = *puVar2;
          temp_v10 = puVar2[1];
          temp_v11 = puVar2[2];
          temp_v12 = puVar2[3];
          temp_v13 = *(unsigned short *)(puVar2 + 4);
          FUN_00137ee0(4,&temp_v8,0x20);
          puVar2 = DAT_00588124;
          if (DAT_00588124 != (unsigned int *)0x0) {
            FUN_003c3e14();
            if (*(short *)(puVar2 + 0x40) == 0x22) {
              FUN_003d2d6c(0xf);
              FUN_0021c354(0x3c);
            }
            FUN_0019a7f4(0,*(unsigned short *)((int)puVar2 + 0x102));
            temp_v7 = 0;
            do {
              if (puVar2[temp_v7 + 10] != 0) {
                FUN_001631d0(puVar2[temp_v7 + 1],0);
              }
              temp_v7 = temp_v7 + 1;
            } while (temp_v7 < 8);
            FUN_0019c364(puVar2[0x14]);
            FUN_0019c364(puVar2[0x15]);
            FUN_0019a5a0(puVar2[0x13]);
            FUN_0019a5a0(puVar2[0x12]);
            FUN_001631d0(*puVar2,0);
            FUN_0019a5a0(puVar2);
            DAT_00588124 = (unsigned int *)0x0;
            FUN_001add24(0x1a);
            FUN_0037b450();
            FUN_0035b304();
          }
          return 0xffffffff;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 3);
      puVar2[0x41] = 0;
      temp_v7 = 0;
      if (temp_v7 < (int)puVar2[0x39]) {
        do {
          temp_v5 = 0;
          do {
            temp_v6 = (int)*(short *)((int)puVar2 + temp_v5 * 2 + temp_v7 * 0x10 + 100);
            if (-1 < temp_v6) {
              FUN_001656e0(puVar2[temp_v6 + 1],0);
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 8);
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < (int)puVar2[0x39]);
      }
      temp_v5 = 8;
      temp_v7 = 0;
      do {
        temp_v5 = temp_v5 - 1;
        puVar2[temp_v7 * 3 + 0x42] = 0;
        puVar2[temp_v7 * 3 + 0x43] = 0;
        puVar2[temp_v7 * 3 + 0x44] = 5;
        temp_v7 = temp_v7 + 1;
      } while (temp_v5 != 0);
      puVar2[0x5a] = 0;
      puVar4 = DAT_00588124;
      DAT_00588124[0x3b] = 0;
      puVar4[0x3c] = 1;
    }
    break;
  case 1:
    temp_v7 = FUN_002121c4(0);
    if (temp_v7 != 0) break;
    temp_v7 = puVar2[0x3d];
    if (temp_v7 < 1) {
      temp_v7 = FUN_00275f44(puVar2[0x14],2);
      if (temp_v7 != 0) {
        FUN_001681cc(0xa4);
        puVar4 = DAT_00588124;
        DAT_00588124[0x3b] = 0;
        puVar4[0x3c] = 5;
      }
      break;
    }
    if (temp_v7 != 1) {
      if (temp_v7 != 2) {
        if (temp_v7 == 3) {
          temp_v7 = puVar2[0x39];
          goto joined_r0x002146ac;
        }
        if (temp_v7 == 4) {
          temp_v7 = puVar2[0x39];
          goto joined_r0x002146ac;
        }
        if (temp_v7 < 2) break;
      }
      else {
        temp_v7 = puVar2[0x39];
joined_r0x002146ac:
        if (temp_v7 == 1) goto LAB_002146c0;
      }
      temp_v7 = FUN_00275f44(puVar2[0x14],0);
      if (temp_v7 != 0) {
        FUN_00275f44(puVar2[0x15],1);
        puVar4 = DAT_00588124;
        DAT_00588124[0x3b] = 0;
        puVar4[0x3c] = 2;
      }
    }
    else {
LAB_002146c0:
      puVar2[0x3e] = 0;
      puVar2[0x3f] = 0;
      puVar4 = DAT_00588124;
      DAT_00588124[0x3b] = 0;
      puVar4[0x3c] = 3;
    }
    break;
  case 2:
    temp_v7 = FUN_0031d62c();
    if ((temp_v7 != 0) && (temp_v7 = 0, 0 < (int)puVar2[0x39])) {
      do {
        temp_v5 = FUN_002a4b60();
        temp_v6 = 0;
        do {
          temp_v1 = (int)*(short *)((int)puVar2 + temp_v6 * 2 + temp_v7 * 0x10 + 100);
          if (-1 < temp_v1) {
            FUN_001656e0(puVar2[temp_v1 + 1],temp_v5 == temp_v7);
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 8);
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < (int)puVar2[0x39]);
    }
    FUN_00224880(puVar2[0x14]);
    FUN_00224880(puVar2[0x15]);
    temp_v7 = FUN_00331194();
    if (temp_v7 == 0) break;
    FUN_003491e8();
    temp_v7 = FUN_002a4b74();
    if (-1 < temp_v7) {
      temp_v7 = FUN_002a4b74();
      puVar2[0x3f] = temp_v7;
      puVar2[0x3e] = (int)*(short *)(puVar2 + temp_v7 * 4 + 0x19);
      puVar4 = DAT_00588124;
      DAT_00588124[0x3b] = 0;
      puVar4[0x3c] = 3;
      puVar2[0x41] = puVar2[0x3f];
      break;
    }
    FUN_001f4908(0,10,0xff);
    FUN_001f4908(1,10,0xff);
    puVar4 = DAT_00588124;
    DAT_00588124[0x3b] = 0;
    puVar4[0x3c] = 6;
    break;
  case 3:
    temp_v7 = 0;
    do {
      temp_v5 = (int)*(short *)((int)puVar2 + temp_v7 * 2 + puVar2[0x3f] * 0x10 + 100);
      if (-1 < temp_v5) {
        FUN_003c8f94(puVar2[temp_v5 + 1]);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 8);
    temp_v7 = 0;
    if (0 < (int)puVar2[0x39]) {
      do {
        temp_v5 = FUN_002a4b60();
        temp_v6 = 0;
        do {
          temp_v1 = (int)*(short *)((int)puVar2 + temp_v6 * 2 + temp_v7 * 0x10 + 100);
          if (-1 < temp_v1) {
            FUN_001656e0(puVar2[temp_v1 + 1],temp_v5 == temp_v7);
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 8);
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < (int)puVar2[0x39]);
    }
    FUN_00100388(&temp_v8,&LAB_00214b8c,*(unsigned short *)puVar2[puVar2[0x3e] + 10],
                 *(unsigned short *)puVar2[puVar2[0x3e] + 10]);
    FUN_0020214c();
    puVar2[0x16] = (unsigned int)puVar4;
    FUN_00100388(&temp_v8,&LAB_00214ba8,*(unsigned short *)puVar2[puVar2[0x3e] + 10],
                 *(unsigned short *)puVar2[puVar2[0x3e] + 10]);
    FUN_0020214c();
    puVar2[0x17] = (unsigned int)puVar5;
    FUN_00275bc8();
    puVar2[0x18] = (unsigned int)puVar5;
    temp_v2 = FUN_00357bc8(puVar2[0x17],puVar2[puVar2[0x3e] + 10] + 0x16);
    FUN_00275f44(puVar2[0x18],temp_v2);
    puVar4 = DAT_00588124;
    DAT_00588124[0x3b] = 0;
    puVar4[0x3c] = 4;
    FUN_00168980(0xa4);
    FUN_001681cc(0xa4);
    break;
  case 4:
    temp_v7 = FUN_00224880(DAT_00588124[0x18]);
    if (temp_v7 != 2) break;
    FUN_0019c364(puVar2[0x18]);
    FUN_0019a5a0(puVar2[0x17]);
    FUN_0019a5a0(puVar2[0x16]);
    puVar4 = DAT_00588124;
    temp_v0 = *(short *)(puVar2 + 0x40);
    DAT_00588124[9] = 0;
    temp_v2 = FUN_00187180(0x35,0);
    psVar7 = (short *)FUN_00192798();
    temp_v3 = FUN_00192748(temp_v2);
    temp_v4 = 0;
    if (temp_v3 != 0) {
      do {
        if (*psVar7 == temp_v0) {
          puVar4[9] = (unsigned int)psVar7;
          break;
        }
        temp_v4 = temp_v4 + 1;
        psVar7 = psVar7 + 0x36;
      } while (temp_v4 < temp_v3);
    }
    puVar4 = DAT_00588124;
    temp_v0 = *(short *)(puVar2 + 0x40);
    DAT_00588124[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    temp_v2 = FUN_00187180(0x35,1);
    psVar7 = (short *)FUN_00192798();
    temp_v3 = FUN_00192748(temp_v2);
    temp_v4 = 0;
    puVar4[0x3d] = 0;
    if (temp_v3 != 0) {
      do {
        if ((((*psVar7 == temp_v0) && ((psVar7[7] == 0 || (temp_v7 = FUN_0018719c(), temp_v7 != 0)))) &&
            ((psVar7[8] == 0 || (temp_v7 = FUN_0018719c(), temp_v7 != 0)))) &&
           (((psVar7[9] == 0 || (temp_v7 = FUN_0018719c(), temp_v7 == 0)) &&
            ((psVar7[10] == 0 || (temp_v7 = FUN_0018719c(), temp_v7 == 0)))))) {
          puVar4[puVar4[0x3d] + 10] = (unsigned int)psVar7;
          temp_v7 = puVar4[0x3d];
          puVar4[0x3d] = temp_v7 + 1;
          if (temp_v7 + 1 >= 8) break;
        }
        temp_v4 = temp_v4 + 1;
        psVar7 = psVar7 + 0x2a;
      } while (temp_v4 < temp_v3);
    }
    puVar4 = DAT_00588124;
    temp_v7 = puVar2[0x3d];
    if (temp_v7 < 2) goto LAB_00214b50;
    if (temp_v7 != 2) {
      if (temp_v7 == 3) {
        temp_v7 = puVar2[0x39];
        goto joined_r0x00214af8;
      }
      if (temp_v7 == 4) {
        temp_v7 = puVar2[0x39];
        goto joined_r0x00214af8;
      }
    }
    else {
      temp_v7 = puVar2[0x39];
joined_r0x00214af8:
      if (temp_v7 == 1) goto LAB_00214b50;
    }
    DAT_00588124[0x3b] = 0;
    puVar4[0x3c] = 1;
    FUN_00168980(0xa2);
    FUN_003423cc(0xa2);
    break;
  case 5:
    temp_v7 = FUN_00224880(DAT_00588124[0x14]);
    if (temp_v7 != 2) break;
LAB_00214b50:
    FUN_001f4908(0,10,0xff);
    FUN_001f4908(1,10,0xff);
    puVar4 = DAT_00588124;
    DAT_00588124[0x3b] = 0;
    puVar4[0x3c] = 6;
    break;
  case 6:
    temp_v7 = FUN_002121c4(0);
    puVar4 = DAT_00588124;
    if (temp_v7 == 0) {
      DAT_00588124[0x3b] = 0;
      puVar4[0x3c] = 7;
    }
    break;
  case 7:
    if (DAT_005f1b70 != '\0') {
      if (DAT_005f1610 == 1) {
        FUN_00137ee0(6,0);
      }
      if (DAT_005f1610 == 3) {
        temp_v8 = romwright_piece_2_2((short)DAT_005f1b78,(short)DAT_005f1b74 - 200);
        FUN_00137ee0(0xe,&temp_v8,4);
      }
    }
    else {
      FUN_003d54f8(0,1);
      FUN_003d54f8(1);
    }
    temp_v7 = FUN_0018719c(0x295);
    if ((temp_v7 != 0) && (temp_v7 = FUN_0018719c(0x296), temp_v7 == 0)) {
      FUN_003fd63c(0x296,1);
    }
    temp_v7 = FUN_0018719c(0x297);
    if ((temp_v7 != 0) && (temp_v7 = FUN_0018719c(0x298), temp_v7 == 0)) {
      FUN_003fd63c(0x298,1);
    }
    FUN_00262790();
    return 0xffffffff;
  }
  if (puVar2[0x3c] != 0) {
    temp_v7 = 0;
    do {
      puVar10 = (unsigned short *)puVar2[temp_v7 + 10];
      if ((puVar10 != (unsigned short *)0x0) &&
         (temp_v5 = FUN_001801b8(*puVar10,*(unsigned char *)(puVar10 + 0x29)), temp_v5 == 0)) {
        if ((int)puVar2[temp_v7 * 3 + 0x42] < (int)puVar2[temp_v7 * 3 + 0x43]) {
          puVar2[temp_v7 * 3 + 0x42] = puVar2[temp_v7 * 3 + 0x42] + 1;
        }
        else if ((int)puVar2[temp_v7 * 3 + 0x44] < 5) {
          puVar2[temp_v7 * 3 + 0x44] = puVar2[temp_v7 * 3 + 0x44] + 1;
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 8);
  }
  puVar2[0x3b] = puVar2[0x3b] + 1;
  puVar2[0x5a] = puVar2[0x5a] + 1;
  return 0;
}

} /* extern "C" */
