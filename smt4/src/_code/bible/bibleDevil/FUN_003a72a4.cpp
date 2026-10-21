/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a72a4` (_code @ 0x3a72a4, 0x288 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022de74(int);
int pointConvertToFloat(int, unsigned int, unsigned int);
int FUN_002328b4(void);
int FUN_00233240(int, int);
int FUN_00233344(int, int);
int FUN_00233404(void);
int FUN_0029ce60(unsigned int, int, int);
int FUN_0029e620(unsigned int, int);
int FUN_0029e648(int, int);
int FUN_002b8454(int, int, int, int);
int buttonHelpSetPreset(void);
int FUN_002b898c(void);
int FUN_003c2b74(int);
int FUN_003c2c6c(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char DAT_0043d9c8; /* 0x43d9c8 */

/* Supplied declaration required: FUN_0022de74. */
/* Supplied declaration required: pointConvertToFloat. */
/* Supplied declaration required: FUN_002328b4. */
/* Supplied declaration required: FUN_00233240. */
/* Supplied declaration required: FUN_00233344. */
/* Supplied declaration required: FUN_00233404. */
extern int FUN_0023360c(int);
extern int FUN_00240d5c(int);
extern int inputIsQuestConfirmPressed(void);
extern int gameGetNavigationState(void);
extern int FUN_00293aac(void);
extern int FUN_00293b8c(void);
/* Supplied declaration required: FUN_0029ce60. */
extern int gameGetFlagByte12e8(void);
extern int useCounterIsFinished(void);
/* Supplied declaration required: FUN_0029e620. */
/* Supplied declaration required: FUN_0029e648. */
extern int FUN_0029e924(int);
/* Supplied declaration required: FUN_002b8454. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_002b898c. */
extern unsigned int vec2GetYInt(int);
extern unsigned int vec2GetXInt(int);
/* Supplied declaration required: FUN_003c2b74. */
/* Supplied declaration required: FUN_003c2c6c. */


void FUN_003a72a4(int param_1)

{
/* irregular: 14 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v1 = useCounterIsFinished();
  if (temp_v1 == 0) {
    return;
  }
  FUN_00233344(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b4));
  temp_v1 = param_1 + *(short *)(param_1 + 0xa5b4) * 0x8c + 0xfc;
  temp_v2 = vec2GetYInt(temp_v1);
  temp_v3 = vec2GetXInt(temp_v1);
  pointConvertToFloat(param_1 + 200,temp_v3,temp_v2);
  temp_v1 = gameGetNavigationState();
  if ((temp_v1 != 0) && (temp_v1 = FUN_00293aac(), temp_v1 == 0)) {
    *(unsigned int *)(param_1 + 0x14) = 10;
    *(unsigned int *)(param_1 + 0x18) = 0;
    temp_v1 = gameGetFlagByte12e8();
    if (temp_v1 == 1) {
      *(unsigned short *)(param_1 + 0xa5b4) = 0;
    }
    else {
      *(unsigned short *)(param_1 + 0xa5b4) = 4;
    }
    FUN_00233240(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b4));
    if (*(char *)(param_1 + 0x5a4) != '\0') {
      return;
    }
    temp_v1 = FUN_0023360c(param_1 + 0x20);
    temp_v6 = (unsigned int)*(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x5ac);
    FUN_0029ce60(temp_v6,*(unsigned char *)(param_1 + 0x5a5),0);
    FUN_0029e648(1,0);
    FUN_0029e620(-temp_v6,0);
    return;
  }
  temp_v1 = gameGetNavigationState();
  if (temp_v1 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    return;
  }
  temp_v1 = FUN_0029e924(param_1 + 0x20);
  temp_v4 = FUN_00240d5c(param_1 + 0x20);
  temp_v5 = FUN_00293b8c();
  if (temp_v5 != 1) {
    temp_v5 = FUN_00293b8c();
    if (temp_v5 != -1) {
      if (*(char *)(param_1 + 0x5a4) != '\x01') {
        temp_v5 = FUN_0029e924(param_1 + 0x20);
        if ((temp_v5 == temp_v1) && (temp_v1 = FUN_00240d5c(param_1 + 0x20), temp_v1 == temp_v4)) {
          return;
        }
        FUN_00233404();
        return;
      }
      temp_v5 = inputIsQuestConfirmPressed();
      if (temp_v5 != 0) {
        temp_v0 = *(char *)(param_1 + 0x5a5) + '\x01';
        *(char *)(param_1 + 0x5a5) = temp_v0;
        if ('\x01' < temp_v0) {
          *(unsigned char *)(param_1 + 0x5a5) = 0;
        }
        FUN_002328b4();
        *(unsigned char *)(param_1 + 0x5a7) = 1;
        (*(unsigned int *)((unsigned char *)&DAT_0043d9c8 + 0x4)) = 0xffffffff;
        FUN_0022de74(param_1);
        FUN_002b898c();
        buttonHelpSetPreset();
      }
    }
    else {
      FUN_003c2c6c(param_1 + 0x20);
    }
  }
  else {
    FUN_003c2b74(param_1 + 0x20);
  }
  if (*(char *)(param_1 + 0x5a4) == '\x01') {
    if (*(char *)(param_1 + 0x5a5) != '\x01') {
      FUN_002b8454(2,4,0x41,1);
    }
    else {
      FUN_002b8454(2,4,0x40,1);
    }
  }
  temp_v5 = FUN_0029e924(param_1 + 0x20);
  if ((temp_v5 == temp_v1) && (temp_v1 = FUN_00240d5c(param_1 + 0x20), temp_v1 == temp_v4)) {
    return;
  }
  FUN_00233404();
  return;
}

} /* extern "C" */
