/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00382f4c` (_code @ 0x382f4c, 0x374 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00223cf0(void);
int FUN_002353b4(void);
int FUN_0023553c(int);
int FUN_002355ac(int);
int FUN_002636b0(void);
int FUN_00269dc8(void);
int FUN_00290e9c(void);
int FUN_002973d8(void);
int FUN_0029cc44(int);
int FUN_0029e620(unsigned int, int);
int FUN_0029e648(int, int);
int FUN_0029ee6c(unsigned int, int);
int eventQueueAddUnique(int);
int FUN_002c1658(int, int);
int FUN_002f6208(void);

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_00223cf0. */
/* Supplied declaration required: FUN_002353b4. */
/* Supplied declaration required: FUN_0023553c. */
/* Supplied declaration required: FUN_002355ac. */
extern int FUN_002485b8(void);
/* Supplied declaration required: FUN_002636b0. */
/* Supplied declaration required: FUN_00269dc8. */
/* Supplied declaration required: FUN_00290e9c. */
extern int messageWindowIsState1(void);
/* Supplied declaration required: FUN_002973d8. */
/* Supplied declaration required: FUN_0029cc44. */
/* Supplied declaration required: FUN_0029e620. */
/* Supplied declaration required: FUN_0029e648. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: eventQueueAddUnique. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_002c1658. */
extern int FUN_002d8e10(void);
/* Supplied declaration required: FUN_002f6208. */
extern unsigned int dataTable28Sub1GetRecord(int, unsigned char);


void FUN_00382f4c(int param_1)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0019e0c0(**(unsigned int **)(param_1 + 0x5c4));
  if (temp_v0 != 2) {
    temp_v0 = messageWindowIsState1();
    if (temp_v0 != 0) {
      temp_v0 = FUN_00290e9c();
      if (*(char *)(param_1 + 0x18) == '\0') {
        temp_v1 = 0x405718;
      }
      else {
        temp_v1 = 0x40571b;
      }
      temp_v2 = dataTable28Sub1GetRecord(param_1 + 0x20,*(unsigned char *)(temp_v1 + temp_v0));
      FUN_0029ee6c(temp_v2,0x323232ff);
      if (temp_v0 != -1) {
        if (*(char *)(param_1 + 0x18) != '\0') {
          if (temp_v0 != 0) {
            temp_v0 = FUN_002d8e10();
            if (temp_v0 != 0) {
              FUN_0029cc44(0);
            }
          }
          else {
            temp_v0 = FUN_002485b8();
            if (temp_v0 == 0) {
              FUN_0029e648(1,0);
              FUN_0029e620(0xffffff9c,0);
              FUN_0023553c(1);
            }
          }
        }
        temp_v0 = 10;
        FUN_002c1658(10,1);
        if ((temp_v0 != 0) && (temp_v0 = gameFlagIsSet(0x24), temp_v0 != 0)) {
          eventQueueAddUnique(0x100016f);
          FUN_00269dc8();
          FUN_00223cf0();
          FUN_002636b0();
          *(unsigned char *)(param_1 + 0xd55) = 0;
          temp_v2 = FUN_00290e9c();
          *(unsigned int *)(param_1 + 0xfbc) = temp_v2;
          if ((*(char *)(param_1 + 0x18) != '\0') && (temp_v0 = FUN_00290e9c(), temp_v0 == 0)) {
            *(unsigned char *)(param_1 + 0xd55) = 1;
            FUN_0029cc44(0);
          }
          FUN_002f6208();
          *(unsigned int *)(param_1 + 4) = 0xb;
          *(unsigned int *)(param_1 + 8) = 0;
        }
      }
    }
    return;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_002355ac(0);
    temp_v2 = FUN_002973d8();
    switch(temp_v2) {
    case 0:
      FUN_002636b0();
      *(unsigned int *)(param_1 + 4) = 7;
      *(unsigned int *)(param_1 + 8) = 0;
      break;
    case 1:
      temp_v0 = FUN_002485b8();
      if (temp_v0 != 0) {
        FUN_0029cc44(0);
      }
      FUN_002636b0();
      *(unsigned int *)(param_1 + 4) = 8;
      *(unsigned int *)(param_1 + 8) = 0;
      break;
    case 2:
      temp_v0 = FUN_002485b8();
      if (temp_v0 != 0) {
        FUN_0029cc44(0);
      }
      FUN_002636b0();
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned int *)(param_1 + 4) = 9;
      break;
    case 3:
      temp_v0 = FUN_002485b8();
      if (temp_v0 != 0) {
        FUN_0029cc44(0);
      }
      FUN_002636b0();
      *(unsigned int *)(param_1 + 4) = 10;
      *(unsigned int *)(param_1 + 8) = 0;
      FUN_0029cc44(0);
      break;
    case 0xffffffff:
      temp_v0 = FUN_002485b8();
      if (temp_v0 != 0) {
        FUN_0029cc44(0);
      }
      FUN_002353b4();
      *(unsigned int *)(param_1 + 4) = 0xf;
      *(unsigned int *)(param_1 + 8) = 0;
    }
    temp_v0 = FUN_002973d8();
  }
  else {
    FUN_002355ac(0);
    temp_v0 = FUN_002973d8();
    if (temp_v0 != -1) {
      if (temp_v0 != 0) {
        if (temp_v0 != 1) {
          if (temp_v0 == 2) {
            FUN_002636b0();
            *(unsigned int *)(param_1 + 4) = 10;
            *(unsigned int *)(param_1 + 8) = 0;
          }
        }
        else {
          FUN_002636b0();
          *(unsigned int *)(param_1 + 4) = 9;
          *(unsigned int *)(param_1 + 8) = 0;
        }
      }
      else {
        FUN_002636b0();
        *(unsigned int *)(param_1 + 4) = 8;
        *(unsigned int *)(param_1 + 8) = 0;
      }
    }
    else {
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned int *)(param_1 + 4) = 0xf;
      FUN_002353b4();
    }
    temp_v0 = FUN_002973d8();
  }
  if (temp_v0 != -1) {
    temp_v2 = FUN_002973d8();
    *(unsigned int *)(param_1 + 0xfbc) = temp_v2;
    return;
  }
  *(unsigned int *)(param_1 + 0xfbc) = 0;
  return;
}

} /* extern "C" */
