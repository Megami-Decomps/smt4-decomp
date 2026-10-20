/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036dbdc` (_code @ 0x36dbdc, 0x26c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int msgBoxFlagsSetBit7(unsigned int);
int FUN_0021bdac(unsigned int, unsigned int, unsigned int, int, int, int);
int scrGetArg(int);
int FUN_0023723c(unsigned int, int, unsigned int, int, int, unsigned char *, unsigned char *);
int useCounterStart(void);
int FUN_002686b8(...);
int eventTexRequestStopAll(void);
int FUN_002c76c0(int);
int scrGetCommandFrame(void);
int bustupCutAnimRequestStopSlots(void);
int FUN_0031f208(...);
int FUN_0031f27c(unsigned int, int);
int scrSetResult(int);
int obj04Finish(void);
int FUN_0035d8a4(void);

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern unsigned char LAB_0036de54; /* 0x36de54 */
extern unsigned char LAB_0036de90; /* 0x36de90 */
extern int DAT_0057f58c; /* 0x57f58c */

/* Supplied declaration required: msgBoxFlagsSetBit7. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0021bdac. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_0023723c. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: FUN_002686b8. */
extern unsigned int FUN_002ba85c(void);
/* Supplied declaration required: eventTexRequestStopAll. */
/* Supplied declaration required: FUN_002c76c0. */
extern int FUN_002c7c54(void);
/* Supplied declaration required: scrGetCommandFrame. */
/* Supplied declaration required: bustupCutAnimRequestStopSlots. */
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: FUN_0031f27c. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: obj04Finish. */
/* Supplied declaration required: FUN_0035d8a4. */


unsigned int FUN_0036dbdc(unsigned int param_1,int param_2)

{
/* irregular: 2 goto(s); 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  char acStack_40 [4];
  unsigned int temp_v9 [7];
  
  temp_v9[6] = *(unsigned int *)(param_2 + 0x50);
  temp_v9[3] = *(unsigned int *)(param_2 + 0x44);
  temp_v9[4] = *(unsigned int *)(param_2 + 0x48);
  temp_v9[5] = *(unsigned int *)(param_2 + 0x4c);
  temp_v9[0] = *(unsigned int *)(param_2 + 0x38);
  temp_v9[1] = *(unsigned int *)(param_2 + 0x3c);
  temp_v9[2] = *(unsigned int *)(param_2 + 0x40);
  (*(unsigned char *)((unsigned char *)&temp_v8 + 0)) = 'N';
  (*(unsigned char *)((unsigned char *)&temp_v8 + 1)) = 'O';
  (*(unsigned char *)((unsigned char *)&temp_v8 + 2)) = 'P';
  (*(unsigned char *)((unsigned char *)&temp_v8 + 3)) = 'Q';
  acStack_40[0] = 'R';
  acStack_40[1] = 'S';
  acStack_40[2] = 'T';
  acStack_40[3] = '\0';
  temp_v0 = scrGetCommandFrame();
  temp_v1 = scrGetArg(0);
  FUN_002c76c0(0);
  temp_v7 = 0;
  temp_v6 = 0;
LAB_0036dc44:
  do {
    if (temp_v1 != temp_v6) {
      if (temp_v6 == 0) {
        temp_v7 = temp_v7 + 1;
        temp_v6 = 1;
        goto LAB_0036dc44;
      }
      temp_v2 = gameFlagIsSet(temp_v9[temp_v6]);
      if (temp_v2 != 0) {
        temp_v7 = temp_v7 + 1;
      }
    }
    temp_v2 = DAT_0057f58c;
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 7);
  if (temp_v7 == 0) {
    scrSetResult(99);
    return 1;
  }
  if (temp_v0 == 0) {
    bustupCutAnimRequestStopSlots();
    eventTexRequestStopAll();
    if (DAT_0057f58c != 0) {
      *(unsigned char *)(DAT_0057f58c + 0x19c5) = 0x15;
    }
    temp_v5 = FUN_002ba85c();
    temp_v3 = scrGetArg(0);
    temp_v4 = scrGetCommandFrame();
    FUN_0021bdac(temp_v5,temp_v3,temp_v4,6,0,0);
    FUN_0023723c(*(unsigned int *)(temp_v2 + 4),4,0xffffffff,0,3,&LAB_0036de90,&LAB_0036de54);
    msgBoxFlagsSetBit7(*(unsigned int *)(temp_v2 + 4));
    *(unsigned char *)(temp_v2 + 0x19c4) = 0;
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v2 + 0xc) | 0x20;
    FUN_0031f27c(0xffffffff,3);
    temp_v0 = 0;
LAB_0036dd68:
    do {
      if (temp_v1 != temp_v0) {
        if (temp_v0 == 0) {
          FUN_0031f208(temp_v8 & 0xff);
          temp_v0 = 1;
          goto LAB_0036dd68;
        }
        temp_v6 = gameFlagIsSet(temp_v9[temp_v0]);
        if (temp_v6 != 0) {
          FUN_0031f208(*(unsigned char *)((int)&temp_v8 + temp_v0));
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 7);
    useCounterStart();
  }
  temp_v0 = FUN_002c7c54();
  temp_v1 = useCounterIsFinished();
  if (temp_v1 != 0) {
    scrSetResult(0);
    FUN_002686b8();
    FUN_0035d8a4();
    obj04Finish();
    temp_v5 = 1;
  }
  else {
    if (temp_v0 != 0x69) {
      FUN_002686b8(0);
      FUN_0035d8a4();
      scrSetResult(temp_v0 - 0x4d);
      obj04Finish();
      return 1;
    }
    temp_v5 = 0;
  }
  return temp_v5;
}

} /* extern "C" */
