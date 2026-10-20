/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385448` (_code @ 0x385448, 0x624 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00235554(...);
int buttonHelpResetSlots(void);
int FUN_00287704(...);
int FUN_00296284(...);
int FUN_0029c3c0(int, int, int);
int uiSpriteSetImageKeyframe(...);
int buttonHelpSetPreset(...);
int eventQueueAddUnique(...);
int FUN_002bd954(...);
int FUN_002bf818(...);
int FUN_00382878(unsigned int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_00385854; /* 0x385854 */
extern unsigned char LAB_00385860; /* 0x385860 */
extern unsigned char LAB_00385870; /* 0x385870 */
extern unsigned char LAB_0038587c; /* 0x38587c */
extern unsigned char LAB_00385898; /* 0x385898 */
extern unsigned char LAB_00385a6c; /* 0x385a6c */
extern unsigned char LAB_00385a80; /* 0x385a80 */
extern unsigned char LAB_00385a90; /* 0x385a90 */
extern unsigned char LAB_00385a9c; /* 0x385a9c */
extern char s_e021_01_0044daf0[8]; /* 0x44daf0 */

extern int FUN_0019e0c0(unsigned int);
extern int FUN_00235414(unsigned char);
/* Supplied declaration required: FUN_00235554. */
/* Supplied declaration required: buttonHelpResetSlots. */
extern int FUN_0026b564(void);
extern int FUN_0027ee9c(void);
extern int FUN_00282b28(void);
/* Supplied declaration required: FUN_00287704. */
extern unsigned int FUN_002950e8(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_00296284. */
/* Supplied declaration required: FUN_0029c3c0. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bf818. */
extern int gameFlagIsSet(void);
extern int FUN_003818c8(unsigned int, unsigned char);
extern int FUN_00381ae0(int);
/* Supplied declaration required: FUN_00382878. */


void FUN_00385448(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  switch(param_1[2]) {
  case 0:
    temp_v5 = 0;
    do {
      temp_v4 = temp_v5 * 0x1a;
      if (((((unsigned short)(unsigned char)param_1[6] == *(unsigned short *)(temp_v4 + 0x44db06)) &&
           ((*(short *)(temp_v4 + 0x44db08) == -1 ||
            ((int)(char)param_1[4] == (int)*(short *)(temp_v4 + 0x44db08))))) &&
          ((*(short *)(temp_v4 + 0x44db02) == 0 || (temp_v0 = gameFlagIsSet(), temp_v0 != 0)))) &&
         ((*(short *)(temp_v4 + 0x44db04) == 0 || (temp_v0 = gameFlagIsSet(), temp_v0 == 0)))) {
        *param_1 = *param_1 | 0x20000;
        param_1[5] = (unsigned int)(s_e021_01_0044daf0 + temp_v4);
        FUN_0029c3c0(0,10,0xff);
        FUN_0029c3c0(1,10,0xff);
        buttonHelpResetSlots();
        param_1[2] = 6;
        return;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 2);
    buttonHelpSetPreset(0xa3);
    param_1[0x3ec] = 7;
    temp_v4 = FUN_00235414((char)param_1[6]);
    if (temp_v4 != 0) {
      FUN_00235554(param_1,&LAB_00385854);
    }
    else if ((char)param_1[6] != '\x02') {
      if ((char)param_1[6] != '\x03') {
        FUN_00235554(param_1,&LAB_00385860);
      }
      else {
        FUN_00235554(param_1,&LAB_0038587c);
      }
    }
    else {
      FUN_00235554(param_1,&LAB_00385870);
    }
    temp_v5 = param_1[2] + 1;
    param_1[2] = temp_v5;
    return;
  case 1:
    temp_v4 = FUN_0019e0c0(*(unsigned int *)param_1[0x171]);
    if (temp_v4 != 2) {
      return;
    }
    if (((char)param_1[6] != '\x02') && ((char)param_1[6] != '\x03')) {
      buttonHelpSetPreset(0xa4);
      param_1[2] = param_1[2] + 1;
      FUN_00382878(param_1);
      FUN_002bd954(param_1 + 0x11,0x31,0xffffffff,param_1 + 9,0xb);
      FUN_002bd954(param_1 + 0x34,0x31,0xffffffff,param_1 + 9,0xb);
      FUN_002bd954(param_1 + 0x57,0x31,0xffffffff,param_1 + 9,0xb);
      FUN_002bd954(param_1 + 0x7a,0x31,0,param_1 + 9,0xb);
      uiSpriteSetImageKeyframe(param_1 + 0x7a,0);
      param_1[0x356] = 6;
      param_1[0x9d] = 0x43c80000;
      param_1[0x9e] = 0;
      param_1[0x9f] = param_1[0x9d];
      param_1[0xa0] = param_1[0x9e];
      param_1[0xa1] = param_1[0x9d];
      param_1[0xa2] = param_1[0x9e];
      *param_1 = *param_1 | 0x80;
      return;
    }
    temp_v5 = 4;
    param_1[2] = temp_v5;
    return;
  case 2:
    FUN_002bf818(param_1 + 0x7a);
    if (*(char *)((int)param_1 + 0x272) != '\0') {
      *param_1 = *param_1 | 0x10;
      temp_v5 = FUN_002950e8(param_1 + 0x11,0);
      temp_v1 = FUN_00296284(param_1 + 0x34,0);
      temp_v2 = FUN_00296284(param_1 + 0x57,0,1);
      if ((temp_v2 & temp_v5 & temp_v1) != 0) {
        temp_v4 = FUN_00235414((char)param_1[6]);
        if (temp_v4 == 0) {
          temp_v4 = FUN_00287704((char)param_1[6]);
          temp_v3 = FUN_00287704((char)param_1[6]);
          temp_v4 = FUN_003818c8(temp_v3,*(unsigned char *)(temp_v4 + 10));
          if ((temp_v4 == 0) && ((char)param_1[0x355] == '\0')) {
            eventQueueAddUnique(0x1000121);
            *(unsigned char *)(param_1 + 0x355) = 1;
          }
        }
        temp_v5 = param_1[0x356] - 1;
        param_1[0x356] = temp_v5;
        if ((int)temp_v5 < 1) {
          temp_v5 = 0;
        }
        param_1[0x356] = temp_v5;
        temp_v4 = FUN_0027ee9c();
        if (temp_v4 != 0) {
          buttonHelpSetPreset(0xa3);
          *(unsigned char *)(param_1 + 0x355) = 0;
          temp_v4 = FUN_00235414((char)param_1[6]);
          if (temp_v4 != 0) {
            FUN_00235554(param_1,&LAB_00385898);
            param_1[2] = 7;
            return;
          }
          temp_v4 = FUN_00287704((char)param_1[6]);
          temp_v3 = FUN_00287704((char)param_1[6]);
          temp_v4 = FUN_003818c8(temp_v3,*(unsigned char *)(temp_v4 + 10));
          if (temp_v4 == -1) {
            if ((char)param_1[6] != '\0') {
              FUN_00235554(param_1,&LAB_00385a6c);
            }
            else {
              FUN_00235554(param_1,&LAB_00385a80);
            }
            param_1[2] = 7;
            return;
          }
          uiSpriteSetImageKeyframe(param_1 + 0x7a,1,0);
          param_1[2] = param_1[2] + 1;
          param_1[3] = 0;
          return;
        }
      }
    }
    break;
  case 3:
    FUN_002bf818(param_1 + 0x7a);
    if (*(char *)((int)param_1 + 0x272) != '\0') {
      *param_1 = *param_1 & 0xffffff6f;
      param_1[2] = param_1[2] + 1;
      return;
    }
    break;
  case 4:
    temp_v4 = FUN_00381ae0((int)(char)param_1[4]);
    if (temp_v4 != 0) {
      FUN_00235554(param_1,&LAB_00385a90);
    }
    else {
      FUN_00235554(param_1,&LAB_00385a9c);
    }
    temp_v5 = param_1[2] + 1;
    param_1[2] = temp_v5;
    return;
  case 5:
    temp_v4 = FUN_0019e0c0(*(unsigned int *)param_1[0x171]);
    if (temp_v4 == 2) {
      param_1[1] = 5;
      param_1[2] = 0;
      param_1[0x3ec] = 0;
      return;
    }
    break;
  case 6:
    temp_v4 = FUN_00282b28();
    if ((temp_v4 == 0) && (temp_v4 = FUN_0026b564(), temp_v4 != 0)) {
      param_1[1] = 0x10;
      param_1[2] = 0;
      param_1[0x3ec] = 0;
      return;
    }
    break;
  case 7:
    temp_v4 = FUN_0019e0c0(*(unsigned int *)param_1[0x171]);
    if (temp_v4 != 2) {
      return;
    }
    uiSpriteSetImageKeyframe(param_1 + 0x7a,1,0);
    temp_v5 = 3;
    param_1[2] = temp_v5;
    return;
  }
  return;
}

} /* extern "C" */
