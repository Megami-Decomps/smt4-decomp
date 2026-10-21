/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00491c60` (_code @ 0x491c60, 0x3e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int g_gameState; /* 0x5f15fc */
extern unsigned int DAT_005f1600; /* 0x5f1600 */
extern int DAT_005f1c5c; /* 0x5f1c5c */

extern int gameFlagIsSet(void);
extern int dataTableHasMatchingEntry35(unsigned int);
extern int FUN_002e707c(void);
extern unsigned long long FUN_00376fcc(int);
extern int gameFlagsGetWorkState(void);
extern int FUN_00384d34(int);
extern int gameOwnedBitTest2(int);
extern int FUN_003bf5a8(int);
extern int FUN_004083a8(unsigned char);


void FUN_00491c60(int param_1)

{
/* irregular: 8 goto(s) */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int unaff_r11;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned long long temp_v8;
  
  temp_v1 = *(int *)(param_1 + 0x7b8c);
  if (0 < temp_v1) {
    unaff_r11 = 0x1bd2;
  }
  temp_v5 = 0;
  if (0 < temp_v1) {
    do {
      temp_v1 = param_1 + temp_v5 * 100;
      if ((int)*(short *)(temp_v1 + 0x1792) == (int)*(char *)(param_1 + 100)) {
        if (DAT_005f1c5c == 0) {
          temp_v0 = *(char *)(temp_v1 + 0x1791);
          if (temp_v0 != -1) {
            if (temp_v0 == -2) {
              temp_v2 = FUN_00384d34((int)*(short *)(temp_v1 + 0x17ba));
              goto joined_r0x00491d8c;
            }
            if (temp_v0 != -3) {
              if (temp_v0 == -4) {
                temp_v2 = FUN_003bf5a8((int)*(short *)(temp_v1 + 0x17ba));
                goto joined_r0x00491d8c;
              }
              temp_v2 = FUN_004083a8(*(unsigned char *)(temp_v1 + 0x1790));
              if (temp_v2 != 0) {
                temp_v6 = 0;
                if (((*(short *)(temp_v1 + 0x17bc) != 0) && (temp_v2 = gameFlagIsSet(), temp_v2 == 0)) ||
                   ((*(short *)(temp_v1 + 0x17be) != 0 && (temp_v2 = gameFlagIsSet(), temp_v2 != 0)))) {
                  temp_v6 = 1;
                }
                if ((((*(int *)(temp_v1 + 0x17d8) == 0) || (temp_v2 = FUN_002e707c(), temp_v2 != 0)) ||
                    (temp_v2 = dataTableHasMatchingEntry35(*(unsigned int *)(temp_v1 + 0x17d8)), temp_v2 != 0)) && (!temp_v6)
                   ) {
                  *(unsigned short *)(temp_v1 + 0x17c0) = 1;
                }
                else {
                  *(unsigned short *)(temp_v1 + 0x17c0) = 0;
                }
                if (g_gameState == 0x17) {
                  if (DAT_005f1600 == 2) {
                    temp_v0 = *(char *)(temp_v1 + 0x1790);
                    temp_v6 = temp_v0 != 'z';
                    if (!temp_v6) {
                      temp_v0 = *(char *)(temp_v1 + 0x1791);
                    }
                    if ((temp_v6 || temp_v0 != '\x02') ||
                       (*(unsigned short *)(temp_v1 + 0x17c0) = 0, g_gameState != 0x17))
                    goto LAB_00491eb4;
                  }
                  temp_v6 = DAT_005f1600 == 3;
                  temp_v3 = DAT_005f1600;
                  if (temp_v6) {
                    temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 0x1790);
                  }
                  temp_v7 = temp_v6 && temp_v3 == 0x7e;
                  if (temp_v6 && temp_v3 == 0x7e) {
                    temp_v7 = *(char *)(temp_v1 + 0x1791) == '\x02';
                  }
                  if (temp_v7) {
                    *(unsigned short *)(temp_v1 + 0x17c0) = 0;
                  }
                }
              }
              else {
                *(unsigned short *)(temp_v1 + 0x17c0) = 0;
              }
            }
            else {
              temp_v8 = FUN_00376fcc((int)*(short *)(temp_v1 + 0x17ba));
              if ((int)temp_v8 != 0) {
                *(unsigned short *)(temp_v1 + 0x17c0) = 1;
              }
              else {
                *(unsigned short *)(temp_v1 + 0x17c0) = 0;
              }
              temp_v4 = *(unsigned int *)(temp_v1 + 0x17ec);
              temp_v3 = (unsigned int)((unsigned long long)temp_v8 >> 0x20);
              if (temp_v4 != 0) {
                temp_v3 = DAT_005f1600;
              }
              if (!(temp_v4 == 0 || temp_v4 == temp_v3)) {
                *(unsigned short *)(temp_v1 + 0x17c0) = 0;
              }
            }
          }
          else {
            temp_v2 = gameOwnedBitTest2((int)*(short *)(temp_v1 + 0x17ba));
joined_r0x00491d8c:
            if (temp_v2 == 0) {
              *(unsigned short *)(temp_v1 + 0x17c0) = 0;
            }
            else {
              *(unsigned short *)(temp_v1 + 0x17c0) = 1;
            }
          }
        }
        else {
          *(unsigned short *)(temp_v1 + 0x17c0) = 1;
        }
      }
      else {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x1794);
        if ((temp_v3 == unaff_r11) || (*(unsigned short *)(temp_v1 + 0x1796) == 0x1bd4)) {
          temp_v2 = gameFlagsGetWorkState();
          if (temp_v2 != 0x17) {
            *(unsigned short *)(temp_v1 + 0x17c0) = 0;
          }
          else {
            *(unsigned short *)(temp_v1 + 0x17c0) = 1;
          }
        }
        else {
          temp_v6 = temp_v3 != 0x1bd6;
          if (temp_v6) {
            temp_v3 = *(unsigned short *)(temp_v1 + 0x1796) - 0x1800;
          }
          if (!(!temp_v6 || temp_v3 == 0x3d8)) {
            *(unsigned short *)(temp_v1 + 0x17c0) = 0;
          }
          else {
            *(unsigned short *)(temp_v1 + 0x17c0) = 1;
          }
        }
      }
LAB_00491eb4:
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(int *)(param_1 + 0x7b8c));
  }
  temp_v1 = 0;
  if (temp_v1 < *(int *)(param_1 + 0x84f4)) {
    do {
      temp_v5 = param_1 + temp_v1 * 100;
      if ((int)*(short *)(temp_v5 + 0x7b9a) != (int)*(char *)(param_1 + 100)) goto LAB_00491fbc;
      if (DAT_005f1c5c == 0) {
        if (*(unsigned char *)(temp_v5 + 0x7b99) != 0xff) {
          if (*(unsigned char *)(temp_v5 + 0x7b99) != 0xfd) {
            temp_v2 = FUN_004083a8(*(unsigned char *)(temp_v5 + 0x7b98));
            if (temp_v2 != 0) {
              if (((*(short *)(temp_v5 + 0x7bc4) != 0) && (temp_v2 = gameFlagIsSet(), temp_v2 == 0)) ||
                 ((*(short *)(temp_v5 + 0x7bc6) != 0 && (temp_v2 = gameFlagIsSet(), temp_v2 != 0)))) {
                *(unsigned short *)(temp_v5 + 0x7bc8) = 0;
              }
              else {
                *(unsigned short *)(temp_v5 + 0x7bc8) = 1;
              }
              if (g_gameState == 0x17) {
                if (DAT_005f1600 == 2) {
                  temp_v0 = *(char *)(temp_v5 + 0x7b98);
                  temp_v6 = temp_v0 != 'z';
                  if (!temp_v6) {
                    temp_v0 = *(char *)(temp_v5 + 0x7b99);
                  }
                  if ((temp_v6 || temp_v0 != '\x02') ||
                     (*(unsigned short *)(temp_v5 + 0x7bc8) = 0, g_gameState != 0x17)) goto LAB_00491fc0;
                }
                temp_v6 = DAT_005f1600 == 3;
                temp_v3 = DAT_005f1600;
                if (temp_v6) {
                  temp_v3 = (unsigned int)*(unsigned char *)(temp_v5 + 0x7b98);
                }
                temp_v7 = temp_v6 && temp_v3 == 0x7e;
                if (temp_v6 && temp_v3 == 0x7e) {
                  temp_v7 = *(char *)(temp_v5 + 0x7b99) == '\x02';
                }
                if (temp_v7) {
                  *(unsigned short *)(temp_v5 + 0x7bc8) = 0;
                }
              }
              goto LAB_00491fc0;
            }
          }
          else {
            temp_v8 = FUN_00376fcc((int)*(short *)(temp_v5 + 0x7bc2));
            if ((int)temp_v8 != 0) {
              *(unsigned short *)(temp_v5 + 0x7bc8) = 1;
            }
            else {
              *(unsigned short *)(temp_v5 + 0x7bc8) = 0;
            }
            temp_v4 = *(unsigned int *)(temp_v5 + 0x7bf4);
            temp_v3 = (unsigned int)((unsigned long long)temp_v8 >> 0x20);
            if (temp_v4 != 0) {
              temp_v3 = DAT_005f1600;
            }
            if (temp_v4 == 0 || temp_v4 == temp_v3) goto LAB_00491fc0;
          }
        }
        else {
          temp_v2 = gameOwnedBitTest2((int)*(short *)(temp_v5 + 0x7bc2));
          if (temp_v2 != 0) goto LAB_00491f8c;
        }
LAB_00491fbc:
        *(unsigned short *)(temp_v5 + 0x7bc8) = 0;
      }
      else {
LAB_00491f8c:
        *(unsigned short *)(temp_v5 + 0x7bc8) = 1;
      }
LAB_00491fc0:
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 0x84f4));
  }
  *(unsigned char *)(param_1 + 0x7b90) = 0;
  return;
}

} /* extern "C" */
