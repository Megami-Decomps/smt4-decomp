/* NON_MATCHING: romwright 0.5.0 decompilation of `scrComm_Quest_UpdateObjective` (_code @ 0x213c20, 0x88c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1648(void);
int FUN_00250d74(...);
int FUN_00250d84(...);
int FUN_00254e2c(...);
int FUN_0028ed3c(...);
int FUN_00295660(...);
int FUN_0029bbc8(void);
int FUN_0029bcf0(...);
int FUN_0029ede8(...);
int FUN_002be650(...);
int FUN_002bf694(...);
int FUN_002bff50(void);
int asdOperatorNewC(void);
int FUN_00333af8(...);
int FUN_00348a1c(...);

int eventTexSetFlag(int);
int FUN_002542bc(...);
int FUN_002542d4(...);
int FUN_0028784c(unsigned int, int);
int FUN_0028dc68(int);
int FUN_0028dc98(...);
int scrSetResult(...);
int FUN_002900d0(void);
int btlTalkBustUpSetUnk2F4(int);
int FUN_002954f4(unsigned int, int);
int FUN_00295720(void);
int FUN_0029b074(void);
int FUN_0029b998(int);
int FUN_002b63c0(void);
int FUN_002b8838(int);
int FUN_002bd06c(...);
int FUN_002cdf2c(int *);
int bustupCutAnimSetFlag(int);
int FUN_00333b74(int *, unsigned int);
int FUN_0034888c(...);

/* stack frame of void: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

/* Supplied declaration required: FUN_001a1648. */
/* Supplied declaration required: eventTexSetFlag. */
extern int btlTalkBustUpExists(void);
/* Supplied declaration required: FUN_00250d74. */
/* Supplied declaration required: FUN_00250d84. */
extern int FUN_00250ec0(unsigned int);
/* Supplied declaration required: FUN_002542bc. */
/* Supplied declaration required: FUN_002542d4. */
/* Supplied declaration required: FUN_00254e2c. */
/* Supplied declaration required: FUN_0028784c. */
extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_0028dc68. */
/* Supplied declaration required: FUN_0028dc98. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_0028ed3c. */
/* Supplied declaration required: FUN_002900d0. */
extern int FUN_0029022c(void);
extern unsigned int FUN_002903f0(void);
/* Supplied declaration required: btlTalkBustUpSetUnk2F4. */
/* Supplied declaration required: FUN_002954f4. */
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: FUN_00295720. */
extern unsigned int scrGetArg(unsigned int);
extern int FUN_002973d8(void);
/* Supplied declaration required: FUN_0029b074. */
/* Supplied declaration required: FUN_0029b998. */
/* Supplied declaration required: FUN_0029bbc8. */
/* Supplied declaration required: FUN_0029bcf0. */
/* Supplied declaration required: FUN_0029ede8. */
extern int FUN_002b47f4(unsigned int);
/* Supplied declaration required: FUN_002b63c0. */
extern int gameGetOptions(void);
extern int FUN_002b8660(void);
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002bd06c. */
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: FUN_002be650. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002bff50. */
extern int FUN_002c2950(void);
/* Supplied declaration required: asdOperatorNewC. */
/* Supplied declaration required: FUN_002cdf2c. */
/* Supplied declaration required: bustupCutAnimSetFlag. */
extern int FUN_002e4464(void);
extern unsigned int FUN_002f25f0(void);
extern int FUN_00333a38(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00333af8. */
/* Supplied declaration required: FUN_00333b74. */
/* Supplied declaration required: FUN_0034888c. */
/* Supplied declaration required: FUN_00348a1c. */


unsigned int scrComm_Quest_UpdateObjective(void)

{
/* irregular: 35 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned short *puVar11;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  
  temp_v0 = scrGetArg(0) & 0xffff;
  temp_v1 = FUN_002893d8();
  if (temp_v1 == 0) {
    FUN_002542d4(0);
    temp_v3 = temp_v0;
    FUN_002b63c0();
    temp_v1 = FUN_00250ec0(temp_v0);
    if (temp_v1 == 0) {
      scrSetResult(0);
      return 1;
    }
    if (*(char *)(temp_v3 + 6) == '\0') {
      FUN_002542d4(0,2);
      FUN_002542d4(1,0);
      FUN_002542d4(2,0);
      if (*(char *)(temp_v3 + 6) != '\0') {
        return 0;
      }
      temp_v1 = FUN_002c2950();
      FUN_0028784c(temp_v0,0);
      *(unsigned short *)(temp_v1 + 0x1062) = 0;
      *(unsigned short *)(temp_v1 + 0x1060) = 0;
      return 0;
    }
    if (*(char *)(temp_v3 + 6) != '\x04') {
      temp_v2 = 0;
      temp_v5 = 0;
    }
    else {
      FUN_002542d4(0,2);
      FUN_002542d4(1,0);
      temp_v2 = 0;
      temp_v5 = 2;
    }
    FUN_002542d4(temp_v5,temp_v2);
    return 0;
  }
  temp_v1 = FUN_002b47f4(0x1e);
  temp_v3 = temp_v0;
  FUN_002b63c0();
  temp_v2 = FUN_002542bc(0);
  switch(temp_v2) {
  case 0:
    temp_v1 = FUN_002e4464();
    if (temp_v1 == 0) {
      eventTexSetFlag(0);
      bustupCutAnimSetFlag(0);
      temp_v1 = btlTalkBustUpExists();
      if (temp_v1 != 0) {
        temp_v2 = FUN_002f25f0();
        FUN_002542d4(2,temp_v2);
      }
      else {
        FUN_002542d4(2,0xffffffff);
      }
      btlTalkBustUpSetUnk2F4(0);
      FUN_002542d4(3,0);
      FUN_0028dc98(1);
      FUN_0029b998(1);
      temp_v22 = 0;
      temp_v23 = 0;
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v13 = 0;
      temp_v14 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      temp_v17 = 0;
      temp_v18 = 0;
      temp_v19 = 0;
      temp_v20 = 0;
      temp_v21 = 0;
      FUN_00333b74(&temp_v10,temp_v0);
      FUN_002cdf2c(&temp_v10);
      FUN_002542d4(0,1);
    }
    break;
  case 1:
    temp_v1 = FUN_002b8660();
    if (temp_v1 == 0) {
      return 0;
    }
    FUN_0029b074();
    FUN_0028dc98(0xffffffff);
    FUN_0028dc68(0);
    FUN_002b8838(0x90);
    FUN_002542bc(3);
    eventTexSetFlag(1);
    bustupCutAnimSetFlag(1);
    temp_v3 = FUN_002542bc(2);
    if (-1 < (int)temp_v3) {
      temp_v1 = btlTalkBustUpExists();
      if (temp_v1 == 0) {
        FUN_00295720();
      }
      if ((temp_v3 != 0) && (temp_v4 = FUN_002f25f0(), temp_v4 != temp_v3)) {
        FUN_002954f4(temp_v3 & 0xffff,0);
      }
      btlTalkBustUpSetUnk2F4(1);
    }
    temp_v1 = FUN_0029022c();
    if ((temp_v1 != 0) && (temp_v3 = FUN_002903f0(), temp_v3 == temp_v0)) {
      FUN_002900d0();
      temp_v1 = FUN_00333a38(temp_v0,1);
      if (temp_v1 != 0) {
        FUN_002542d4(0,7);
        FUN_002542d4(2,temp_v1);
        temp_v2 = 0;
        temp_v5 = 3;
        FUN_002542d4(temp_v5,temp_v2);
        return 0;
      }
    }
    FUN_0034888c(temp_v0);
    scrSetResult(1);
    return 1;
  case 2:
    temp_v6 = FUN_002542bc(2);
    temp_v2 = 9;
    if (*(char *)(temp_v3 + 6) != '\x04') {
      temp_v6 = temp_v3 + temp_v6 * 8;
      if (*(short *)(temp_v6 + 0x16c) != 1) {
        if (*(short *)(temp_v6 + 0x16c) == 2) {
          temp_v0 = (unsigned int)*(unsigned short *)(temp_v6 + 0x16e);
          temp_v2 = 10;
          FUN_002bd06c(temp_v0);
          FUN_002bf694(&temp_v12,temp_v0);
          FUN_00295660(8,&temp_v12);
          FUN_0029ede8(0x18,*(unsigned int *)(temp_v6 + 0x170),0xffffffff,0);
        }
      }
      else {
        temp_v0 = (unsigned int)*(unsigned short *)(temp_v6 + 0x16e);
        if (*(int *)(temp_v6 + 0x170) == 1) {
          temp_v2 = 8;
        }
        FUN_002be650(temp_v0,1);
        FUN_002bf694(&temp_v12,temp_v0);
        FUN_00295660(0,&temp_v12);
        FUN_0029ede8(0x18,*(unsigned int *)(temp_v6 + 0x170),0xffffffff,0);
      }
    }
    else {
      temp_v2 = 8;
      temp_v7 = gameGetOptions();
      temp_v0 = (unsigned int)*(unsigned short *)(temp_v7 + 0x46);
      FUN_002bd06c(temp_v0);
      FUN_002bf694(&temp_v12,temp_v0);
      FUN_00295660(0,&temp_v12);
      FUN_0029ede8(0x18,*(unsigned int *)(temp_v3 + temp_v6 * 8 + 0x170),0xffffffff,0);
    }
    FUN_002bff50();
    temp_v10 = 1;
    FUN_00254e2c(temp_v1,temp_v2,0,6);
    FUN_002542d4(1,0);
    FUN_002542d4(0,3);
    break;
  case 3:
    FUN_002bff50();
    FUN_001a1648();
    temp_v2 = FUN_002542bc(1);
    temp_v10 = 0;
    FUN_00254e2c(temp_v1,0xb,temp_v2);
    temp_v6 = FUN_002542bc(1);
    FUN_002542d4(1,temp_v6 + 1);
    if (temp_v1 != 1) {
      return 0;
    }
    temp_v1 = FUN_002973d8();
    if (temp_v1 != 0) {
      FUN_002542d4(1,0);
      FUN_002542d4(0,4);
      return 0;
    }
    temp_v1 = FUN_002542bc(2);
    temp_v1 = temp_v1 + 1;
    FUN_002542d4(2,temp_v1);
    if (*(char *)(temp_v3 + 6) != '\x04') {
      if (*(char *)(temp_v3 + 6) != '\0') {
        return 0;
      }
      if ((temp_v1 < 6) && (*(short *)(temp_v3 + temp_v1 * 8 + 0x16c) != 0)) {
        FUN_002542d4(0,2);
        return 0;
      }
      temp_v1 = 0;
      do {
        temp_v6 = temp_v3 + temp_v1 * 8;
        if (*(short *)(temp_v6 + 0x16c) != 1) {
          if (*(short *)(temp_v6 + 0x16c) == 2) {
            FUN_0029bcf0(*(unsigned short *)(temp_v6 + 0x16e));
            FUN_0029bbc8();
          }
        }
        else {
          FUN_00250d84(*(unsigned short *)(temp_v6 + 0x16e),*(unsigned int *)(temp_v6 + 0x170));
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
      FUN_002542d4(1,0);
      temp_v2 = 5;
      temp_v5 = 0;
      FUN_002542d4(temp_v5,temp_v2);
      return 0;
    }
    FUN_002542d4(0);
    break;
  case 4:
    FUN_002bff50();
    temp_v2 = FUN_002542bc(1);
    temp_v10 = 0;
    FUN_00254e2c(temp_v1,0xc,temp_v2,6);
    temp_v6 = FUN_002542bc(1);
    FUN_002542d4(1,temp_v6 + 1);
    if (temp_v1 == 1) {
      scrSetResult(2);
      return 1;
    }
    break;
  case 5:
    temp_v5 = 0x3a;
    temp_v6 = FUN_002542bc(2);
    temp_v2 = FUN_002bd1fc();
    FUN_002bf694(&temp_v12,temp_v2);
    FUN_00295660(0,&temp_v12);
    if (temp_v6 >= 2) {
      temp_v5 = 0x3b;
    }
    FUN_002bff50();
    temp_v2 = FUN_002542bc(1);
    temp_v10 = 0;
    FUN_00254e2c(temp_v1,temp_v5,temp_v2,6);
    temp_v6 = FUN_002542bc(1);
    FUN_002542d4(1,temp_v6 + 1);
    if (temp_v1 != 1) {
      return 0;
    }
    FUN_002542d4(1,0);
    FUN_002542d4(0);
    break;
  default:
    FUN_0034888c(temp_v0);
    scrSetResult(1);
    return 1;
  case 7:
    temp_v7 = FUN_002542bc(3);
    temp_v8 = FUN_002542bc(2);
    temp_v6 = temp_v8 << 1;
    asdOperatorNewC();
    FUN_00333af8(temp_v0,temp_v6,1);
    puVar11 = (unsigned short *)(temp_v6 + temp_v7 * 2);
    FUN_0028ed3c(*puVar11,0,1);
    FUN_002bff50();
    temp_v2 = FUN_002542bc(1);
    temp_v10 = 0;
    FUN_00254e2c(temp_v1,0x10,temp_v2,6);
    temp_v9 = FUN_002542bc(1);
    FUN_002542d4(1,temp_v9 + 1);
    if (temp_v1 == 1) {
      FUN_00348a1c(*puVar11);
      if (temp_v8 <= temp_v7 + 1) {
        FUN_002542d4(1,0);
        FUN_002542d4(2,0);
        FUN_002542d4(3,0);
        FUN_00250d74(temp_v6);
        FUN_0034888c(temp_v0);
        scrSetResult(1);
        return 1;
      }
      FUN_002542d4(1,0);
      FUN_002542d4(3,temp_v7 + 1);
    }
    FUN_00250d74(temp_v6);
  }
  return 0;
}

} /* extern "C" */
