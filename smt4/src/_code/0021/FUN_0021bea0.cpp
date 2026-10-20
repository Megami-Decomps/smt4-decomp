/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021bea0` (_code @ 0x21bea0, 0x7dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f9334(int);
int dataTable2fSub0GetCount(void);
int FUN_0024f520(void);
int FUN_002533f4(int, int, int);
int FUN_00287aec(void);
int FUN_002a0428(unsigned int, int);
int dataTable00FindById(void);
int gameFlagIsSet(...);
int randNextInRange(int);
int FUN_0030f5e0(void);
int SBORROW4(...);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int g_mapEnemy; /* 0x447600 */
extern int g_lmapScene; /* 0x447e88 */
extern unsigned int g_gameState; /* 0x49f91c */
extern unsigned int DAT_0049f920; /* 0x49f920 */
extern signed char DAT_0049f942; /* 0x49f942 */
extern unsigned int DAT_0049fadc; /* 0x49fadc */
extern int DAT_0049fae0; /* 0x49fae0 */
extern int DAT_0049fae4; /* 0x49fae4 */
extern unsigned int DAT_0049fae8; /* 0x49fae8 */
extern unsigned int DAT_0049faec; /* 0x49faec */
extern int DAT_0049fb7c; /* 0x49fb7c */
extern float DAT_0049fb80; /* 0x49fb80 */
extern unsigned int DAT_0049fb84; /* 0x49fb84 */
extern unsigned int DAT_0049fb88; /* 0x49fb88 */
extern unsigned int DAT_0049fb8c; /* 0x49fb8c */
extern unsigned int DAT_0049fb90; /* 0x49fb90 */
extern unsigned short DAT_0049fb94; /* 0x49fb94 */
extern unsigned short DAT_0049fb96; /* 0x49fb96 */
extern short DAT_0049fb98; /* 0x49fb98 */
extern short DAT_0049fb9a; /* 0x49fb9a */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001f9334. */
/* Supplied declaration required: dataTable2fSub0GetCount. */
extern int FUN_0024f4e8(void);
/* Supplied declaration required: FUN_0024f520. */
/* Supplied declaration required: FUN_002533f4. */
extern int FUN_00256550(unsigned int);
extern int FUN_0025c05c(void);
extern int *dataTable2fSub0GetRecord(int);
extern unsigned int asdMdlManagerClone(unsigned int, unsigned int);
extern int FUN_00285574(void);
/* Supplied declaration required: FUN_00287aec. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: dataTable00FindById. */
extern int gameGetPlayerData(void);
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: randNextInRange. */
extern int gameGetMapBlock(void);
extern char *FUN_002ced4c(void);
extern int FUN_002ef868(void);
/* Supplied declaration required: FUN_0030f5e0. */
extern int FUN_003234c8(void);
extern int FUN_00328168(unsigned int, unsigned int);
extern unsigned int __aeabi_idivmod(void);


void FUN_0021bea0(void)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr; 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  short *psVar5;
  char *pcVar6;
  unsigned int temp_v3;
  unsigned int *puVar8;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  short *psVar12;
  char *pcVar13;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  int temp_v15;
  char *temp_v16;
  int temp_v17;
  
  temp_v5 = g_mapEnemy;
  temp_v0 = gameGetMapBlock();
  DAT_0049fadc = 0x3c;
  temp_v1 = FUN_00328168(g_gameState,DAT_0049f920);
  DAT_0049fb7c = 0x1e;
  DAT_0049fb80 = 3500.0f;
  DAT_0049fb84 = 0x44fa0000;
  DAT_0049fb88 = 0x43fa0000;
  DAT_0049fb8c = 0x43160000;
  DAT_0049fb90 = 0x447a0000;
  DAT_0049fb94 = 0x46;
  DAT_0049fb96 = 8;
  DAT_0049fb98 = 4;
  DAT_0049fb9a = 4;
  if (temp_v1 != 0) {
    DAT_0049fb7c = (int)*(char *)(temp_v1 + 3);
    DAT_0049fb80 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 4),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_0049fb84 = VectorSignedToFloat((int)*(short *)(temp_v1 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_0049fb88 = VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_0049fb8c = VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_0049fb90 = VectorSignedToFloat((int)*(short *)(temp_v1 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_0049fb94 = *(unsigned short *)(temp_v1 + 0xe);
    DAT_0049fb96 = *(unsigned short *)(temp_v1 + 0x10);
    DAT_0049fb98 = (short)*(char *)(temp_v1 + 0x12);
    DAT_0049fb9a = (short)*(char *)(temp_v1 + 0x13);
  }
  *(unsigned int *)(temp_v5 + 0x3034) = 0;
  *(unsigned int *)(temp_v5 + 0x3038) = 0;
  temp_v1 = 0;
  *(unsigned int *)(temp_v5 + 0x303c) = 0;
  do {
    temp_v2 = temp_v5 + temp_v1 * 0x180;
    *(unsigned char *)(temp_v2 + 0x34) = 0;
    *(unsigned int *)(temp_v2 + 0x6c) = 1;
    *(unsigned int *)(temp_v2 + 100) = 0;
    *(unsigned int *)(temp_v2 + 0x68) = 0xffffffff;
    temp_v1 = temp_v1 + 1;
    *(unsigned short *)(temp_v2 + 0x16e) = 0xffff;
    *(unsigned char *)(temp_v2 + 0x170) = 0;
    *(unsigned char *)(temp_v2 + 0x171) = 0;
  } while (temp_v1 < 0x20);
  FUN_001f9334(0);
  if (DAT_0049f942 != '\0') {
    temp_v17 = FUN_002ef868();
    temp_v16 = (char *)FUN_002ced4c();
    temp_v1 = FUN_00285574();
    if (temp_v1 != 0) {
      temp_v2 = 0;
      dataTable2fSub0GetCount();
      if (0 < temp_v1) {
        do {
          piVar4 = (int *)dataTable2fSub0GetRecord(temp_v2);
          if (*piVar4 == -1) break;
          temp_v1 = FUN_00285574();
          if (temp_v1 == (short)piVar4[2]) {
            *(char *)(temp_v0 + 0x3a) = (char)(short)piVar4[3];
            *(char *)(temp_v0 + 0x3b) = (char)*(unsigned short *)((int)piVar4 + 0xe);
            break;
          }
          temp_v2 = temp_v2 + 1;
          dataTable2fSub0GetCount();
        } while (temp_v2 < temp_v1);
      }
    }
    temp_v15 = (int)*(char *)(temp_v0 + 0x3a);
    temp_v0 = (int)*(char *)(temp_v0 + 0x3b);
  }
  else {
    temp_v17 = FUN_0024f4e8();
    temp_v16 = (char *)0x0;
    FUN_0024f520();
    temp_v15 = *(int *)(temp_v5 + 0xc);
    temp_v0 = *(int *)(temp_v5 + 0x10);
  }
  psVar12 = (short *)0x0;
  temp_v1 = FUN_003234c8();
  if (0 < temp_v1) {
    do {
      psVar5 = psVar12;
      FUN_0030f5e0();
      if ((((*psVar5 != -1) && ((int)*psVar5 == *(int *)(temp_v5 + 0xc))) &&
          ((int)psVar5[1] == *(int *)(temp_v5 + 0x10))) &&
         (((psVar5[2] == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 != 0)) &&
          ((psVar5[3] == 0 || (temp_v1 = gameFlagIsSet(), temp_v1 == 0)))))) {
        temp_v17 = 0;
        break;
      }
      psVar12 = (short *)((int)psVar12 + 1);
      temp_v1 = FUN_003234c8();
    } while ((int)psVar12 < temp_v1);
  }
  pcVar13 = (char *)0x0;
  if (0 < temp_v17) {
    temp_v14 = 0;
    do {
      if (DAT_0049f942 != '\0') {
        pcVar6 = temp_v16 + (int)pcVar13 * 8;
LAB_0021c198:
        temp_v11 = VectorSignedToFloat((int)*(short *)(pcVar6 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v9 = VectorSignedToFloat((int)*(short *)(pcVar6 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v10 = VectorSignedToFloat((int)*(short *)(pcVar6 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v8 = *(unsigned int *)(g_lmapScene + 0x1c);
        FUN_00287aec();
        temp_v12 = romwright_piece_4_4(temp_v8,temp_v9);
        temp_v1 = 0;
LAB_0021c1e4:
        temp_v2 = temp_v5 + temp_v1 * 0x180;
        if (*(char *)(temp_v2 + 0x34) != '\0') goto LAB_0021c1f8;
        *(unsigned int *)(temp_v2 + 0x44) = temp_v10;
        *(unsigned int *)(temp_v2 + 0x3c) = temp_v11;
        *(unsigned int *)(temp_v2 + 0x40) = temp_v9;
        *(unsigned int *)(temp_v2 + 0x50) = temp_v10;
        *(unsigned int *)(temp_v2 + 0x54) = temp_v11;
        *(unsigned int *)(temp_v2 + 0x48) = temp_v11;
        *(unsigned int *)(temp_v2 + 0x4c) = temp_v9;
        *(char *)(temp_v2 + 0x34) = '\x01';
        *(unsigned int *)(temp_v2 + 0x58) = temp_v9;
        *(unsigned int *)(temp_v2 + 0x5c) = temp_v10;
        temp_v8 = randNextInRange(0x168);
        temp_v8 = VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v2 + 0x60) = temp_v8;
        *(unsigned int *)(temp_v2 + 100) = 1;
        *(unsigned int *)(temp_v2 + 0x6c) = 1;
        *(int *)(temp_v2 + 0x70) = (int)temp_v14;
        *(unsigned char *)(temp_v2 + 0x178) = 0;
        *(unsigned int *)(temp_v2 + 0xac) = 1;
        *(unsigned char *)(temp_v2 + 0x84) = 0;
        do {
          temp_v1 = temp_v15;
          FUN_002533f4(temp_v15,temp_v0,0);
          *(int *)(temp_v2 + 0xa4) = temp_v1;
          temp_v1 = FUN_0025c05c();
          *(int *)(temp_v2 + 0xa8) = temp_v1;
          dataTable00FindById();
          *(unsigned int *)(temp_v2 + 0x1a4) = (unsigned int)*(unsigned char *)(temp_v1 + 2);
          if ((*(int *)(temp_v2 + 0xa8) < 0x3e9) && (temp_v1 = gameFlagIsSet(0x52a), temp_v1 != 0)) {
            *(unsigned int *)(temp_v2 + 0x1a8) = (unsigned int)*(unsigned char *)(*(int *)(temp_v2 + 0xa8) + 0x447620);
          }
          else {
            *(unsigned int *)(temp_v2 + 0x1a8) = 1;
          }
          *(unsigned short *)(temp_v2 + 0x16e) = 0xffff;
          temp_v1 = FUN_00256550(*(unsigned int *)(temp_v2 + 0x1a8));
          temp_v13 = (float)((unsigned long long)temp_v12 >> 0x20);
        } while (temp_v1 == 0);
        *(unsigned int *)(temp_v2 + 0xb8) = 2;
        *(unsigned int *)(temp_v2 + 0xbc) = 0;
        temp_v1 = randNextInRange(100);
        *(int *)(temp_v2 + 0xc0) = temp_v1 + 0x1e;
        *(unsigned int *)(temp_v2 + 0xc4) = 0;
        *(unsigned int *)(temp_v2 + 0x1a0) = 0;
        *(unsigned char *)(temp_v2 + 0x170) = 0;
        *(unsigned char *)(temp_v2 + 0x171) = 0;
        if (*(char *)(temp_v5 + 0x3048) != '\0') {
          temp_v1 = randNextInRange(0x78);
          temp_v1 = temp_v1 + 0x3c;
        }
        else {
          temp_v1 = randNextInRange(0x96);
          temp_v1 = temp_v1 + 1;
        }
        *(int *)(temp_v2 + 0xd8) = temp_v1;
        if ((int)temp_v13 < 0x43fa0000) {
          *(int *)(temp_v2 + 0xd8) = *(int *)(temp_v2 + 0xd8) + 300;
        }
        else if ((int)temp_v13 < 0x44480000) {
          temp_v1 = *(int *)(temp_v2 + 0xd8) + 0xd2;
          *(int *)(temp_v2 + 0xd8) = temp_v1;
        }
        else if ((0x4479ffff >= (int)temp_v13) || (0x4495ffff >= (int)temp_v13)) {
          temp_v1 = *(int *)(temp_v2 + 0xd8) + 0x96;
          *(int *)(temp_v2 + 0xd8) = temp_v1;
        }
        else {
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(DAT_0049fb80 <= temp_v13) << 0x1d);
          if (((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) &&
              (((*(int *)(temp_v5 + 0x3038) < DAT_0049fae0 - 5 &&
                (*(char *)(temp_v5 + 0x3048) == '\0')) &&
               ((int)romwright_fabs_4(*(float *)(g_lmapScene + 0x20) - *(float *)(temp_v2 + 0x58)) < 0x41f00000)))
              ) && (temp_v1 = randNextInRange(100), temp_v1 < DAT_0049fb7c)) {
            temp_v1 = temp_v5 + *(int *)(temp_v2 + 0x1a8) * 8;
            if (*(char *)(temp_v1 + 0x3051) != '\0') {
              temp_v8 = asdMdlManagerClone(*(unsigned int *)(temp_v1 + 0x304c),0);
              *(unsigned int *)(temp_v2 + 0x1ac) = temp_v8;
              FUN_002a0428(temp_v8,1);
              *(unsigned char *)(temp_v2 + 0x1b1) = 1;
            }
            else {
              *(unsigned int *)(temp_v2 + 0x1ac) = *(unsigned int *)(temp_v1 + 0x304c);
              *(unsigned char *)(temp_v1 + 0x3051) = 1;
              *(unsigned char *)(temp_v2 + 0x1b1) = 0;
            }
            puVar8 = *(unsigned int **)(temp_v2 + 0x1ac);
            *puVar8 = *puVar8 | 2;
            *(unsigned char *)(*(int *)(puVar8[2] + 0x2c) + 0x1f6) = 0;
            *(unsigned char *)(temp_v2 + 0x1b0) = 1;
            *(unsigned int *)(temp_v2 + 0xb8) = 0;
            *(int *)(temp_v5 + 0x3038) = *(int *)(temp_v5 + 0x3038) + 1;
          }
        }
        *(int *)(temp_v5 + 0x3034) = *(int *)(temp_v5 + 0x3034) + 1;
      }
      else {
        pcVar6 = pcVar13;
        FUN_0024f520();
        temp_v16 = pcVar6;
        if (((*pcVar6 != -1) && ((int)*pcVar6 == *(int *)(temp_v5 + 0xc))) &&
           ((int)pcVar6[1] == *(int *)(temp_v5 + 0x10))) goto LAB_0021c198;
      }
LAB_0021c204:
      pcVar13 = pcVar13 + 1;
    } while ((int)pcVar13 < temp_v17);
  }
  temp_v0 = gameGetPlayerData();
  temp_v3 = 0;
  temp_v7 = 0;
  temp_v1 = 0;
  do {
    temp_v2 = temp_v5 + temp_v1 * 0x180;
    if (*(char *)(temp_v2 + 0x34) != '\0') {
      temp_v3 = *(unsigned int *)(temp_v2 + 0xa8) & 0xffff;
      dataTable00FindById();
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v3 + 2);
      temp_v7 = 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x20);
  if (temp_v7) {
    temp_v3 = __aeabi_idivmod();
  }
  temp_v4 = (unsigned int)*(unsigned char *)(temp_v0 + 0x76);
  if ((int)(temp_v3 + 4) >= (int)temp_v4) {
    DAT_0049faec = 1;
  }
  else {
    temp_v6 = temp_v3 - 2;
    temp_v7 = SBORROW4(temp_v6,temp_v4);
    temp_v0 = temp_v6 - temp_v4;
    if ((int)temp_v6 <= (int)temp_v4) {
      temp_v6 = temp_v3 + 3;
      temp_v7 = SBORROW4(temp_v4,temp_v6);
      temp_v0 = temp_v4 - temp_v6;
    }
    if (temp_v6 == temp_v4 || temp_v0 < 0 != temp_v7) {
      DAT_0049faec = 2;
    }
    else {
      temp_v1 = temp_v3 - 5;
      temp_v7 = SBORROW4(temp_v4,temp_v1);
      temp_v0 = temp_v4 - temp_v1;
      if (temp_v1 <= (int)temp_v4) {
        temp_v7 = SBORROW4(temp_v3 - 3,temp_v4);
        temp_v0 = (temp_v3 - 3) - temp_v4;
      }
      if (temp_v0 < 0 == temp_v7) {
        DAT_0049faec = 3;
      }
      else if ((int)temp_v4 < (int)(temp_v3 - 6)) {
        DAT_0049faec = 0;
      }
      else {
        DAT_0049faec = 4;
      }
    }
  }
  temp_v5 = *(int *)(temp_v5 + 0x3034);
  if (temp_v5 >= 1) {
    if (DAT_0049fae4 == 0) {
      DAT_0049fae4 = temp_v5;
      DAT_0049fae8 = 1;
      return;
    }
  }
  else {
    if (temp_v5 != 0) {
      return;
    }
    if (0 < DAT_0049fae4) {
      DAT_0049fae4 = temp_v5;
      DAT_0049fae8 = 0xffffffff;
      return;
    }
  }
  DAT_0049fae8 = 0;
  DAT_0049fae4 = temp_v5;
  return;
LAB_0021c1f8:
  temp_v1 = temp_v1 + 1;
  if (temp_v1 >= 0x20) goto LAB_0021c204;
  goto LAB_0021c1e4;
}

} /* extern "C" */
