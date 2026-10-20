/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027052c` (_code @ 0x27052c, 0x78c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);
int FUN_001fc0a8(void);
int FUN_0027ee24(void);
int FUN_0027eee0(void);
int FUN_00282390(void);
int FUN_0028250c(void);
int FUN_00287a78(void);
int gameFlagSetValue(int, int);
int FUN_00295a18(int, int);
int FUN_0029be5c(int, int);
int asdMdlManagerDestroy(void);
int eventQueueAddUnique(int);
int libc_strcpy(unsigned char *, int);
int FUN_002bf810(int);
int FUN_002e8550(int, int);
int FUN_002e8a78(void);
int FUN_002f3b14(void);
int FUN_002f3bc0(void);
int MapDepart_Init(int [2], int);

/* stack frame of void: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int g_lmapScene; /* 0x447e88 */
extern int DAT_0044cd88; /* 0x44cd88 */
extern int g_gameState; /* 0x49f91c */
extern signed char DAT_0049f934; /* 0x49f934 */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern unsigned int DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned char DAT_0049fa3a; /* 0x49fa3a */
extern int DAT_0049fa3c; /* 0x49fa3c */
extern unsigned char DAT_0049fa40; /* 0x49fa40 */
extern unsigned char DAT_0049fa58; /* 0x49fa58 */
extern int DAT_0049fa5c; /* 0x49fa5c */
extern unsigned char DAT_0049fa60; /* 0x49fa60 */
extern unsigned short DAT_0049fab0; /* 0x49fab0 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */
extern int DAT_0049fc84; /* 0x49fc84 */

/* Supplied declaration required: asdMdlManagerMarkDestroy. */
/* Supplied declaration required: FUN_001fc0a8. */
extern int FUN_0021e7f4(int, unsigned int);
extern int mapDepartIsRunning(void);
/* Supplied declaration required: FUN_0027ee24. */
extern int FUN_0027ee9c(void);
extern unsigned int lmapSceneGetUnk0(void);
/* Supplied declaration required: FUN_0027eee0. */
extern int FUN_0027ef00(void);
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_00287a78. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_00295a18. */
/* Supplied declaration required: FUN_0029be5c. */
/* Supplied declaration required: asdMdlManagerDestroy. */
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002bf810. */
extern int gameGetMapBlock(void);
/* Supplied declaration required: FUN_002e8550. */
/* Supplied declaration required: FUN_002e8a78. */
/* Supplied declaration required: FUN_002f3b14. */
/* Supplied declaration required: FUN_002f3bc0. */
/* Supplied declaration required: MapDepart_Init. */


unsigned int FUN_0027052c(void)

{
/* irregular: 3 goto(s); 19 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  int temp_v16;
  int temp_v17 [2];
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int *temp_v23;
  
  temp_v8 = 0;
  temp_v1 = gameGetMapBlock();
  FUN_001fc0a8();
  temp_v9 = 0;
  temp_v12 = 0x3c8efa3500000000;
  temp_v13 = 100.0f;
  temp_v23 = &DAT_0049fc1c;
  temp_v7 = 0;
  do {
    temp_v6 = DAT_0044cd88 + temp_v7 * 0x4c;
    if (*(char *)(temp_v6 + 0x58) != '\0') {
      switch(*(unsigned int *)(temp_v6 + 0x5c)) {
      case 1:
        temp_v11 = *(float *)(g_lmapScene + 0x20) - *(float *)(temp_v6 + 0x68);
        if (((unsigned int)temp_v11 < 0xc2c80001) && ((int)temp_v11 < 0x42c80001)) {
          if (*(short *)(DAT_0044cd88 + 4) < 100) {
            temp_v0 = *(short *)(temp_v6 + 0x7c);
            if ((temp_v0 != 3 && temp_v0 != 4) && temp_v0 != 5) {
              temp_v3 = FUN_0027ef00();
              goto joined_r0x002706c8;
            }
            temp_v3 = FUN_0027ef00();
            if (temp_v3 == 0) break;
            temp_v3 = *(int *)(temp_v6 + 100);
            FUN_00287a78();
            if (temp_v3 >= 0x41f00000) break;
            temp_v3 = *(int *)(temp_v6 + 0x70);
            FUN_0027eee0();
            if (temp_v3 < 0x43160001) break;
          }
          else {
            temp_v3 = FUN_0027ef00();
joined_r0x002706c8:
            if (temp_v3 == 0) break;
          }
          temp_v17[0] = 0;
          if (g_gameState < 100) {
            temp_v2 = lmapSceneGetUnk0();
            temp_v10 = temp_v2 == 1;
            if (temp_v10) {
              temp_v2 = (unsigned int)DAT_0049fab0;
            }
            if (temp_v10 && temp_v2 == 0) {
              temp_v17[0] = 1;
            }
          }
          else {
            temp_v17[0] = 1;
          }
          if ((*(char *)(temp_v23 + 0x12) == '\0') && (DAT_0049f934 == '\0')) {
            if ((DAT_0049fc84 == 0) || (DAT_0049fc84 == 4)) {
              temp_v3 = FUN_0027ee9c();
              if (((temp_v3 != 0) && (*(char *)(DAT_004474f4 + 0xb0) == '\0')) && (temp_v17[0] != 0))
              {
                DAT_0049fa58 = 0;
                DAT_0049fa5c = 0;
                temp_v3 = *(int *)(temp_v6 + 0x80);
                if (temp_v3 < -1) {
                  temp_v16 = FUN_0021e7f4(-temp_v3,1);
                  temp_v0 = *(short *)(temp_v6 + 0x7c);
                  if (((temp_v0 == 3 || temp_v0 == 4) || ((temp_v0 == 5 || temp_v0 == 7) || temp_v0 == 1)) &&
                     (*(char *)(DAT_0044cd88 + 0x14) != '\0')) {
                    DAT_0049fa58 = 1;
                    DAT_0049fa5c = temp_v16;
                  }
                }
                else {
                  FUN_0027ee24();
                  if (*(short *)(temp_v3 + 0x10) != 0) {
                    gameFlagSetValue((int)*(short *)(temp_v3 + 0x10),1);
                  }
                  temp_v16 = (int)*(short *)(temp_v3 + 0x12);
                  if (temp_v16 != 0) {
                    FUN_00295a18(temp_v16,1);
                  }
                  else {
                    temp_v16 = FUN_0021e7f4((int)*(short *)(temp_v3 + 0x14),1);
                    temp_v0 = *(short *)(temp_v6 + 0x7c);
                    if ((((temp_v0 == 3) || (temp_v0 == 4 || temp_v0 == 5)) || (temp_v0 == 7 || temp_v0 == 1))
                       && (*(char *)(DAT_0044cd88 + 0x14) != '\0')) {
                      DAT_0049fa58 = 1;
                      DAT_0049fa5c = temp_v16;
                    }
                  }
                  if (*(short *)(temp_v3 + 0x16) != 0) {
                    DAT_0049fa3a = 1;
                    DAT_0049fa3c = (int)*(short *)(temp_v3 + 0x16);
                    libc_strcpy(&DAT_0049fa40,temp_v3 + 0x18);
                  }
                }
                if (temp_v16 != 0) {
                  if (*(short *)(DAT_0044cd88 + 4) < 100) {
                    temp_v0 = *(short *)(temp_v6 + 0x7c);
                    if ((temp_v0 == 3 || temp_v0 == 4) || temp_v0 == 5) {
                      temp_v8 = *(unsigned int *)(temp_v6 + 0x68);
                      temp_v14 = *(float *)(temp_v6 + 100);
                      temp_v11 = *(float *)(temp_v6 + 0x70) * (float)((unsigned long long)temp_v12 >> 0x20);
                      temp_v15 = *(float *)(temp_v6 + 0x6c);
                      FUN_0028250c();
                      temp_v14 = temp_v14 + temp_v11 * temp_v13;
                      temp_v11 = *(float *)(temp_v6 + 0x70) * (float)((unsigned long long)temp_v12 >> 0x20);
                      FUN_00282390();
                      temp_v3 = g_lmapScene;
                      *(float *)(g_lmapScene + 0x28) = temp_v14;
                      *(unsigned int *)(temp_v3 + 0x2c) = temp_v8;
                      *(float *)(temp_v3 + 0x30) = temp_v15 + temp_v11 * temp_v13;
                      goto LAB_002709b8;
                    }
LAB_002708cc:
                    if (*(short *)(temp_v6 + 0x7c) != 7) {
                      temp_v17[0] = 1;
                      DAT_0049fa60 = 0;
                    }
                    else {
                      temp_v17[0] = 2;
                      DAT_0049fa60 = 1;
                    }
                  }
                  else {
LAB_002709b8:
                    temp_v0 = *(short *)(temp_v6 + 0x7c);
                    if ((temp_v0 != 3 && temp_v0 != 4) && temp_v0 != 5) goto LAB_002708cc;
                    temp_v17[0] = 2;
                    DAT_0049fa60 = 1;
                  }
                  temp_v18 = temp_v16;
                  if (g_gameState >= 100) {
                    temp_v19 = *(unsigned int *)(g_lmapScene + 0x1c);
                    temp_v20 = *(unsigned int *)(g_lmapScene + 0x20);
                    temp_v21 = *(unsigned int *)(g_lmapScene + 0x24);
                    temp_v22 = *(unsigned int *)(temp_v6 + 0x70);
                  }
                  MapDepart_Init(temp_v17,0x20);
                }
                if (DAT_0049fa58 == 0) {
                  temp_v0 = *(short *)(temp_v6 + 0x7c);
                  if ((!(temp_v0 == 3 || temp_v0 == 4)) && (!((temp_v0 == 5 || temp_v0 == 7) || temp_v0 == 1))
                     ) {
                    temp_v3 = *(int *)(temp_v6 + 0x80);
                    temp_v5 = temp_v1 + ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1b)) >> 5) * 4;
                    *(unsigned int *)(temp_v5 + 0x794) =
                         *(unsigned int *)(temp_v5 + 0x794) & ~(1 << ((temp_v3 % 0x20) & 0xffU));
                  }
                  else if (*(int *)(temp_v6 + 0x80) < -1) {
                    *(unsigned char *)(temp_v1 + 0xdd5) = 0;
                  }
                  else {
                    FUN_002e8550((int)(short)*(int *)(temp_v6 + 0x80),1);
                  }
                  temp_v0 = *(short *)(temp_v6 + 0x7c);
                  if ((temp_v0 == 3 || temp_v0 == 4) || (temp_v0 == 5 || temp_v0 == 7)) {
                    FUN_0029be5c(0x18,1);
                  }
                  if (*(short *)(temp_v6 + 0x7c) == 1) {
                    FUN_0029be5c(0x19,1);
                  }
                  temp_v0 = *(short *)(temp_v6 + 0x7c);
                  if ((temp_v0 == 0 || temp_v0 == 2) || temp_v0 == 6) {
                    FUN_0029be5c(0x13,1);
                  }
                }
                DAT_0049f9a0 = *(unsigned int *)(temp_v6 + 100);
                DAT_0049f9a4 = *(unsigned int *)(temp_v6 + 0x68);
                DAT_0049f9a8 = *(unsigned int *)(temp_v6 + 0x6c);
                *(unsigned int *)(temp_v6 + 0x60) = 0;
                eventQueueAddUnique(0x100016d);
                temp_v4 = 2;
                temp_v8 = 1;
                *(unsigned int *)(temp_v6 + 0x5c) = temp_v4;
                break;
              }
              if ((*(char *)(temp_v23 + 0x12) != '\0') || (DAT_0049f934 != '\0')) break;
            }
            FUN_002e8a78();
            temp_v9 = temp_v9 + 1;
          }
        }
        break;
      case 2:
        temp_v2 = *(int *)(temp_v6 + 0x60) + 1;
        temp_v10 = temp_v2 == 0x19;
        *(unsigned int *)(temp_v6 + 0x60) = temp_v2;
        if (temp_v10) {
          temp_v2 = (unsigned int)DAT_0049fa58;
        }
        if (temp_v10 && temp_v2 == 0) {
          temp_v0 = *(short *)(temp_v6 + 0x7c);
          *(unsigned char *)(temp_v6 + 0x78) = 1;
          *(unsigned int *)(temp_v6 + 0x74) = 1;
          if ((temp_v0 == 3 || temp_v0 == 4) || (temp_v0 == 5 || temp_v0 == 7)) {
            FUN_002bf810(0x10000a7);
          }
        }
        temp_v8 = 1;
        if ((*(int *)(temp_v6 + 0x60) >= 0x29) && (temp_v3 = mapDepartIsRunning(), temp_v3 == 0)) {
          if (DAT_0049fa58 != 0) {
            *(unsigned int *)(temp_v6 + 0x5c) = 1;
          }
          else {
            temp_v0 = *(short *)(temp_v6 + 0x7c);
            if ((!(temp_v0 == 3 || temp_v0 == 4)) && (!(temp_v0 == 5 || temp_v0 == 7))) {
              FUN_002f3b14();
              if (*(char *)(temp_v6 + 0x84) != '\0') {
                if (*(int *)(temp_v6 + 0x88) == 0) {
                  DAT_0049fa60 = 0;
                  break;
                }
                asdMdlManagerMarkDestroy();
                temp_v4 = 4;
                *(unsigned char *)(temp_v6 + 0x8c) = 0;
              }
              else {
                puVar5 = *(unsigned int **)(DAT_0044cd88 + *(int *)(temp_v6 + 0x90) * 8 + 0x1c);
                *puVar5 = *puVar5 | 2;
                *(unsigned char *)(*(int *)(puVar5[2] + 0x2c) + 0x1f6) = 0;
                temp_v4 = 3;
              }
              *(unsigned int *)(temp_v6 + 0x5c) = temp_v4;
            }
            else {
              *(unsigned char *)(temp_v6 + 0x78) = 1;
              *(unsigned int *)(temp_v6 + 0x5c) = 6;
              *(unsigned int *)(temp_v6 + 0x74) = 2;
              FUN_002f3b14();
            }
          }
          DAT_0049fa60 = 0;
        }
        break;
      case 4:
        temp_v8 = 1;
        *(unsigned int *)(temp_v6 + 0x5c) = 5;
        break;
      case 5:
        if (*(int *)(temp_v6 + 0x88) != 0) {
          asdMdlManagerDestroy();
          *(unsigned int *)(temp_v6 + 0x88) = 0;
        }
        temp_v4 = 0;
        *(char *)(temp_v6 + 0x58) = '\0';
        temp_v8 = 1;
        *(unsigned int *)(temp_v6 + 0x5c) = temp_v4;
      }
    }
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0x20) {
      if (temp_v9 == 0) {
        FUN_002f3bc0();
      }
      return temp_v8;
    }
  } while( 1 );
}

} /* extern "C" */
