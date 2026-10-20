/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b7c4` (_code @ 0x33b7c4, 0x634 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char *, unsigned char *, unsigned int, unsigned int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_0020eb44(char *, int);
int FUN_002b5cb4(void);
int FUN_0033abb4(void);
int FUN_00352bc4(void);
int FUN_00376fa4(unsigned int);
int FUN_003847ac(int, unsigned int);
int FUN_003b5050(void);
int FUN_003d4ed8(int);
int FUN_00408184(int, int);
int VectorSignedToFloat(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} void_stack;

extern unsigned char LAB_0033bc8c; /* 0x33bc8c */
extern int DAT_005806d4; /* 0x5806d4 */
extern int g_lmapScene; /* 0x581288 */
extern int g_gameState; /* 0x5f15fc */
extern unsigned char DAT_005f1776; /* 0x5f1776 */
extern unsigned int DAT_005f1778; /* 0x5f1778 */
extern unsigned char DAT_005f177c; /* 0x5f177c */
extern short DAT_005f17c4; /* 0x5f17c4 */
extern short DAT_005f17c6; /* 0x5f17c6 */
extern unsigned char DAT_005f17c8; /* 0x5f17c8 */
extern unsigned char DAT_005f17c9; /* 0x5f17c9 */
extern unsigned char DAT_005f17ca; /* 0x5f17ca */
extern unsigned char DAT_005f17cb; /* 0x5f17cb */
extern int DAT_005f17e8; /* 0x5f17e8 */
extern unsigned int DAT_005f17ec; /* 0x5f17ec */
extern signed char DAT_005f18bf; /* 0x5f18bf */
extern unsigned int DAT_005f18e8; /* 0x5f18e8 */
extern unsigned char DAT_005f1ac9; /* 0x5f1ac9 */
extern unsigned int DAT_005f1acc; /* 0x5f1acc */
extern int DAT_005f1be0; /* 0x5f1be0 */
extern int DAT_005f1be8; /* 0x5f1be8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern int FUN_00162e8c(void);
extern int FUN_001801a4(void);
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_0020eb44. */
extern unsigned int FUN_00261424(void);
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_0033abb4. */
/* Supplied declaration required: FUN_00352bc4. */
/* Supplied declaration required: FUN_00376fa4. */
/* Supplied declaration required: FUN_003847ac. */
/* Supplied declaration required: FUN_003b5050. */
extern int FUN_003d21dc(void);
/* Supplied declaration required: FUN_003d4ed8. */
extern int FUN_003e46f4(unsigned int);
/* Supplied declaration required: FUN_00408184. */


unsigned int FUN_0033b7c4(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 13 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  char *pcVar7;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  int temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned long long temp_v11;
  unsigned long long temp_v12;
  int temp_v13;
  int temp_v14;
  
  temp_v4 = DAT_005806d4;
  temp_v1 = FUN_00162e8c();
  temp_v2 = FUN_001801a4();
  if (((DAT_005f1be0 == 0) && (*(int *)(temp_v4 + 4) != 0)) &&
     (((temp_v3 = FUN_0018719c(0x300), temp_v3 == 0 && (temp_v3 = FUN_0018719c(0x301), temp_v3 == 0)) ||
      (((g_gameState == 0x29 || g_gameState == 0x2a ||
        (g_gameState == 0x2b || g_gameState == 0x2c)) ||
       ((g_gameState == 0x2d || g_gameState == 0x2e) || g_gameState == 0x2f)))))) {
    DAT_005f17e8 = 0;
    DAT_005f17ec = 0;
    DAT_005f17cb = 0;
    if (DAT_005f17c4 >= 1) {
      DAT_005f17c4 = DAT_005f17c4 - 1;
      if (DAT_005f17c4 == 1) {
        DAT_005f17c8 = 1;
        temp_v4 = temp_v4 + DAT_005f17c6 * 0x188;
        pcVar7 = (char *)(temp_v4 + 0x34);
        FUN_00408184(0x15,1);
        if (*(char *)(temp_v4 + 0x84) == '\0') {
          DAT_005f18e8 = *(unsigned int *)(temp_v4 + 0xa4);
        }
        else {
          if (DAT_005f1be8 != 0) {
            *(short *)(temp_v1 + 0x22) = (short)*(unsigned int *)(temp_v4 + 0x8c);
          }
          if (*(int *)(temp_v4 + 0x9c) >= 1) {
            if (*(int *)(temp_v4 + 0x98) != 0) {
              if (*(int *)(temp_v4 + 0x98) != 1) {
                DAT_005f1ac9 = 1;
              }
              DAT_005f1776 = 1;
              DAT_005f1778 = *(unsigned int *)(temp_v4 + 0x9c);
              FUN_00100388(&DAT_005f177c,&LAB_0033bc8c,*(unsigned int *)(temp_v4 + 0x9c),
                           *(unsigned int *)(temp_v4 + 0xa0));
            }
            else {
              FUN_003847ac(*(int *)(temp_v4 + 0x9c),*(unsigned int *)(temp_v4 + 0xa0));
            }
          }
          else {
            FUN_003b5050();
          }
          FUN_00376fa4(*(unsigned int *)(temp_v4 + 0xa4));
          if (0 < *(int *)(temp_v4 + 0x90)) {
            DAT_005f17ec = *(unsigned int *)(temp_v4 + 0x94);
            DAT_005f17e8 = *(int *)(temp_v4 + 0x90);
          }
        }
        DAT_005f1acc = *(unsigned int *)(pcVar7 + 4);
        return *(unsigned int *)(pcVar7 + 0x70);
      }
    }
    else {
      temp_v11 = 0x3f80000000000000;
      temp_v12 = 0x40a000003f0ccccd;
      temp_v3 = 0;
      do {
        temp_v6 = temp_v4 + temp_v3 * 0x188;
        pcVar7 = (char *)(temp_v6 + 0x34);
        if ((((*pcVar7 != '\0') && (*(char *)(temp_v6 + 0x1b8) != '\0')) &&
            ((*(int *)(temp_v6 + 0xb8) != 3 || (*(int *)(temp_v6 + 0xbc) >= 0x14)))) &&
           (*(int *)(temp_v6 + 100) != 6)) {
          temp_v8 = *(int *)(g_lmapScene + 0x1c);
          FUN_002b5cb4();
          if (temp_v8 >= 0x42700000) {
            temp_v8 = *(int *)(temp_v6 + 0x1b0);
            temp_v7 = temp_v8 == 6 || temp_v8 == 0x10;
            if (temp_v8 == 6 || temp_v8 == 0x10) {
              temp_v7 = *(int *)(temp_v6 + 100) == 4;
            }
            if (temp_v7) {
              FUN_001bc124();
              FUN_001bbf0c();
              temp_v8 = *(int *)(g_lmapScene + 0x1c);
              FUN_002b5cb4();
              if (temp_v8 < 0x42700000) goto LAB_0033baac;
            }
            *(unsigned short *)(temp_v6 + 0x1aa) = 0;
          }
          else {
LAB_0033baac:
            temp_v0 = *(short *)(temp_v6 + 0x1aa) + 1;
            *(short *)(temp_v6 + 0x1aa) = temp_v0;
            if (*(int *)(DAT_005f18bf * 0x1c + 0x580bac) <= (int)temp_v0) {
              DAT_005f17c9 = 0;
              FUN_00352bc4();
              if (*(unsigned char *)(temp_v6 + 0x1af) < 2) {
                FUN_001bc124();
                FUN_001bbf0c();
              }
              if (*(char *)(temp_v6 + 0x1af) == '\x02') {
                FUN_001bc124();
                FUN_001bbf0c();
              }
              if (*(char *)(temp_v6 + 0x1af) == '\x03') {
                FUN_001bc124();
                FUN_001bbf0c();
              }
              FUN_00352bc4();
              temp_v8 = *(int *)(g_lmapScene + 0x4c);
              FUN_0033abb4();
              if (temp_v8 >= 0x42f00001) {
                DAT_005f17ca = 1;
              }
              if (*(char *)(temp_v6 + 0x84) != '\0') {
                if (DAT_005f1be8 != 0) {
                  *(short *)(temp_v1 + 0x22) = (short)*(unsigned int *)(temp_v6 + 0x8c);
                }
                if (*(int *)(temp_v6 + 0x98) != 0) {
                  if (*(int *)(temp_v6 + 0x98) != 1) {
                    DAT_005f1ac9 = 1;
                  }
                  DAT_005f1776 = 1;
                  DAT_005f1778 = *(unsigned int *)(temp_v6 + 0x9c);
                  FUN_00100388(&DAT_005f177c,&LAB_0033bc8c,*(unsigned int *)(temp_v6 + 0x9c),
                               *(unsigned int *)(temp_v6 + 0xa0));
                }
                else if (*(int *)(temp_v6 + 0x9c) != 0) {
                  FUN_003847ac(*(int *)(temp_v6 + 0x9c),*(unsigned int *)(temp_v6 + 0xa0));
                }
                FUN_00376fa4(*(unsigned int *)(temp_v6 + 0xa4));
                if (0 < *(int *)(temp_v6 + 0x90)) {
                  DAT_005f17ec = *(unsigned int *)(temp_v6 + 0x94);
                  DAT_005f17e8 = *(int *)(temp_v6 + 0x90);
                }
              }
              else if (*(int *)(temp_v1 + 0xdf4) != 0) {
                temp_v14 = 0;
                temp_v8 = FUN_003e46f4(0x8b);
                if (temp_v8 != 0) {
                  temp_v14 = 9;
                }
                temp_v0 = *(short *)(temp_v6 + 0x1a8);
                temp_v8 = FUN_003d21dc();
                temp_v13 = (int)temp_v0;
                if (temp_v8 != 0) {
                  temp_v5 = FUN_00261424();
                  temp_v9 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v10 = (float)VectorSignedToFloat((int)*(short *)(temp_v6 + 0x1a8),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v13 = (int)(temp_v10 * ((float)((unsigned long long)temp_v11 >> 0x20) +
                                            temp_v9 * (float)temp_v12) +
                                  temp_v9 * temp_v9 * (float)((unsigned long long)temp_v12 >> 0x20));
                  if (temp_v13 >= 0x3e7) {
                    temp_v13 = 999;
                  }
                }
                if (temp_v13 < (int)((unsigned int)*(unsigned short *)(temp_v2 + 0x62) + temp_v14)) {
                  FUN_003d4ed8(0x1000225);
                  *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
                  *(unsigned int *)(temp_v6 + 0xb8) = 0xb;
                  *(unsigned int *)(temp_v6 + 0xbc) = 0;
                  goto LAB_0033bdbc;
                }
              }
              else {
                DAT_005f18e8 = *(unsigned int *)(temp_v6 + 0xa4);
              }
              FUN_0020eb44(pcVar7,2);
              DAT_005f1acc = *(unsigned int *)(pcVar7 + 4);
              return *(unsigned int *)(pcVar7 + 0x70);
            }
          }
        }
LAB_0033bdbc:
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x28);
    }
  }
  return 0xffffffff;
}

} /* extern "C" */
