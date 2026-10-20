/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037dbc8` (_code @ 0x37dbc8, 0x260 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int dataTableValueOrZero(int);
int FUN_001ad9b4(...);
int scrWorkGetValue(int);
int scrWorkSetValue(...);
int messageSlotSet(int);
int FUN_002c76c0(...);
int btlTalkBustUpCreate(void);
int eventTexSetFlag(int);
int scrSetResult(int);
int FUN_00336de4(unsigned int, int);
int bustupCutAnimSetFlag(int);
int btlTalkBustUpSetUnk2F4(int);
int FUN_003deea4(int);
int gameFlagSetValue(...);
int FUN_00417a60(int);
int optionsClearFlag1(void);

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: dataTableValueOrZero. */
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001ada74(unsigned int);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scrWorkGetValue. */
/* Supplied declaration required: scrWorkSetValue. */
/* Supplied declaration required: messageSlotSet. */
/* Supplied declaration required: FUN_002c76c0. */
/* Supplied declaration required: btlTalkBustUpCreate. */
extern int scrGetCommandFrame(void);
/* Supplied declaration required: eventTexSetFlag. */
extern int btlTalkBustUpExists(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_00336de4. */
/* Supplied declaration required: bustupCutAnimSetFlag. */
extern int FUN_0035fcbc(void);
/* Supplied declaration required: btlTalkBustUpSetUnk2F4. */
extern unsigned int btlTalkBustUpGetId(void);
/* Supplied declaration required: FUN_003deea4. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_00417a60. */
extern int FUN_004186a4(void);
extern unsigned int FUN_004186e0(void);
/* Supplied declaration required: optionsClearFlag1. */


unsigned int FUN_0037dbc8(void)

{
/* irregular: 17 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetCommandFrame();
  if (temp_v2 != 0) {
    dataTableValueOrZero(0x1e);
    FUN_001ad9b4(temp_v1);
    temp_v2 = scrWorkGetValue(0);
    if (temp_v2 != 0) {
      if (temp_v2 == 1) {
        FUN_002c76c0(0xffffffff);
        messageSlotSet(0);
        sysPlaySe(0x92);
        scrWorkGetValue(3);
        eventTexSetFlag(1);
        bustupCutAnimSetFlag(1);
        temp_v4 = scrWorkGetValue(2);
        if (-1 < (int)temp_v4) {
          temp_v2 = btlTalkBustUpExists();
          if (temp_v2 == 0) {
            btlTalkBustUpCreate();
          }
          if ((temp_v4 != 0) && (temp_v5 = btlTalkBustUpGetId(), temp_v5 != temp_v4)) {
            FUN_00336de4(temp_v4 & 0xffff,0);
          }
          btlTalkBustUpSetUnk2F4(1);
        }
        temp_v2 = FUN_004186a4();
        if ((temp_v2 != 0) && (temp_v4 = FUN_004186e0(), temp_v4 == temp_v1)) {
          optionsClearFlag1();
        }
      }
      FUN_00417a60(temp_v1);
      FUN_003deea4(0);
      scrSetResult(1);
      return 1;
    }
    temp_v2 = FUN_0035fcbc();
    if (temp_v2 == 0) {
      eventTexSetFlag(0);
      bustupCutAnimSetFlag(0);
      temp_v2 = btlTalkBustUpExists();
      if (temp_v2 != 0) {
        temp_v3 = btlTalkBustUpGetId();
        scrWorkSetValue(2,temp_v3);
      }
      else {
        scrWorkSetValue(2,0xffffffff);
      }
      btlTalkBustUpSetUnk2F4(0);
      scrWorkSetValue(3,0);
      FUN_002c76c0(1);
      scrWorkSetValue(0,1);
    }
  }
  else {
    scrWorkSetValue(0);
    temp_v4 = temp_v1;
    FUN_001ad9b4();
    temp_v2 = FUN_001ada74(temp_v1);
    if (temp_v2 == 0) {
      scrSetResult(0);
      return 1;
    }
    scrWorkSetValue(0);
    temp_v2 = 0;
    do {
      temp_v6 = temp_v4 + temp_v2 * 2;
      temp_v0 = *(short *)(temp_v6 + 0xe0);
      if (temp_v0 != 0) {
        gameFlagSetValue(temp_v0,1);
      }
      temp_v0 = *(short *)(temp_v6 + 0xe6);
      if (temp_v0 != 0) {
        gameFlagSetValue(temp_v0,0,1);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 3);
  }
  return 0;
}

} /* extern "C" */
