/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b8ba0` (_code @ 0x4b8ba0, 0x370 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int FUN_004080bc(unsigned int, int, unsigned int);
int FUN_004b6bc4(int, int, int);
int menu4CScrollToKind(int, int);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern unsigned char DAT_005328fc; /* 0x5328fc */
extern int DAT_0058800c; /* 0x58800c */

/* Supplied declaration required: textFormatBuffer. */
extern int gameFlagIsSet(void);
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_004080bc. */
/* Supplied declaration required: FUN_004b6bc4. */
extern int menu4CGetEntry(int, int);
/* Supplied declaration required: menu4CScrollToKind. */


void FUN_004b8ba0(int param_1)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [8];
  unsigned char temp_v8 [36];
  
  temp_v0 = 1;
  temp_v1 = *(int *)(param_1 + 0x884);
  temp_v6 = 0;
  if (temp_v6 < temp_v1) {
    do {
      temp_v2 = menu4CGetEntry(param_1 + 0x9c,temp_v6);
      if (*(short *)(temp_v2 + 0x54) == 3) {
        if (*(char *)(temp_v2 + 0x2c) != '0') {
          temp_v3 = *(unsigned int *)(param_1 + 0x114c);
          temp_v4 = *(unsigned int *)(param_1 + 0x1144);
          DAT_0058800c = 0;
          textFormatBuffer(temp_v8,&DAT_005328fc,temp_v2 + 0x2c);
          temp_v4 = tableGroupFindEntryIndex(temp_v4,temp_v8);
          scrScriptProcessStartEntry(temp_v3,temp_v4);
          do {
            temp_v5 = FUN_00224880(temp_v3);
          } while (temp_v5 != 2);
          if (((DAT_0058800c != 0) ||
              ((*(short *)(temp_v2 + 0x3c) != 0 && (temp_v5 = gameFlagIsSet(), temp_v5 == 0)))) ||
             ((*(short *)(temp_v2 + 0x3e) != 0 && (temp_v5 = gameFlagIsSet(), temp_v5 != 0))))
          goto LAB_004b8c94;
          break;
        }
      }
      else {
LAB_004b8c94:
        if ((*(short *)(temp_v2 + 0x54) == 4) && (*(char *)(temp_v2 + 0x2c) != '0')) {
          temp_v3 = *(unsigned int *)(param_1 + 0x114c);
          temp_v4 = *(unsigned int *)(param_1 + 0x1144);
          DAT_0058800c = 0;
          textFormatBuffer(temp_v7,&DAT_005328fc,temp_v2 + 0x2c);
          temp_v4 = tableGroupFindEntryIndex(temp_v4,temp_v7);
          scrScriptProcessStartEntry(temp_v3,temp_v4);
          do {
            temp_v5 = FUN_00224880(temp_v3);
          } while (temp_v5 != 2);
          if (((DAT_0058800c == 0) &&
              ((*(short *)(temp_v2 + 0x3c) == 0 || (temp_v5 = gameFlagIsSet(), temp_v5 != 0)))) &&
             ((*(short *)(temp_v2 + 0x3e) == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 == 0)))) {
            temp_v0 = 0;
            break;
          }
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v1);
  }
  temp_v6 = 0;
  if (temp_v6 < temp_v1) {
    do {
      temp_v2 = menu4CGetEntry(param_1 + 0x9c,temp_v6);
      if ((*(short *)(temp_v2 + 0x54) == 2) && (*(char *)(temp_v2 + 0x2c) != '0')) {
        temp_v3 = *(unsigned int *)(param_1 + 0x114c);
        temp_v4 = *(unsigned int *)(param_1 + 0x1144);
        DAT_0058800c = 0;
        textFormatBuffer(temp_v7,&DAT_005328fc,temp_v2 + 0x2c);
        temp_v4 = tableGroupFindEntryIndex(temp_v4,temp_v7);
        scrScriptProcessStartEntry(temp_v3,temp_v4);
        do {
          temp_v5 = FUN_00224880(temp_v3);
        } while (temp_v5 != 2);
        if (((DAT_0058800c == 0) &&
            ((*(short *)(temp_v2 + 0x3c) == 0 || (temp_v5 = gameFlagIsSet(), temp_v5 != 0)))) &&
           ((*(short *)(temp_v2 + 0x3e) == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 == 0)))) break;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v1);
  }
  switch(*(unsigned int *)(param_1 + 0x1120)) {
  default:
    return;
  case 1:
    break;
  case 2:
    break;
  case 5:
    if (!temp_v0) {
      return;
    }
    break;
  case 6:
  case 7:
    if ((*(unsigned int *)(param_1 + 0x20) & 0x10000000) != 0) {
      FUN_004b6bc4(param_1,(int)*(short *)(param_1 + 0x3c),4);
    }
    else {
      FUN_004b6bc4(param_1,(int)*(short *)(param_1 + 0x3c),3);
    }
    *(unsigned int *)(param_1 + 0x28) = 4;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    FUN_004080bc(*(unsigned int *)(param_1 + 0x1218),0,0xffffffff);
    return;
  }
  menu4CScrollToKind(param_1 + 0x9c,0xff);
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x40000000;
  *(unsigned char *)(param_1 + 0xa8a) = 1;
  return;
}

} /* extern "C" */
