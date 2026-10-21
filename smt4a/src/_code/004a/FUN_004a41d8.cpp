/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a41d8` (_code @ 0x4a41d8, 0x34c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_00180118(unsigned int);
int FUN_0019de98(...);
int useCounterStart(void);
int scrScriptProcessStartEntry(...);
int libc_strcpy(unsigned int [32], unsigned int);
int FUN_003180c4(int, unsigned int [32]);
int FUN_0031f208(...);
int FUN_0031f27c(...);
int FUN_003343f0(...);
int FUN_00359974(int, unsigned int, unsigned int, int);
int FUN_0035deb0(void);
int panelSetTarget(unsigned int, int);
int messageSetActiveMode(int);
int FUN_003c5fc4(...);
int screen4AEnter(...);
int FUN_004a34a0(int, int);
int FUN_004a8750(unsigned int, int, int);
int sendEvent100020F(void);
int sendEvent100020E(void);
int FUN_004d0680(int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_1_stack;

extern unsigned char DAT_0057f0b4; /* 0x57f0b4 */

extern unsigned int FUN_0014bf3c(unsigned short, unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: useCounterStart. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002a4b28(unsigned short);
/* Supplied declaration required: libc_strcpy. */
extern int FUN_002f036c(void);
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: FUN_0031f27c. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: FUN_0035deb0. */
/* Supplied declaration required: panelSetTarget. */
/* Supplied declaration required: messageSetActiveMode. */
/* Supplied declaration required: FUN_003c5fc4. */
/* Supplied declaration required: screen4AEnter. */
/* Supplied declaration required: FUN_004a34a0. */
/* Supplied declaration required: FUN_004a8750. */
extern int FUN_004cfe4c(int);
/* Supplied declaration required: sendEvent100020F. */
/* Supplied declaration required: sendEvent100020E. */
extern int inputIsQuestCancelPressed(void);
extern int inputIsQuestConfirmPressed(void);
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);
/* Supplied declaration required: FUN_004d0680. */


void FUN_004a41d8(int param_1)

{
/* irregular: 21 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  char *pcVar8;
  int temp_v7;
  unsigned int temp_v8 [32];
  
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v1 = FUN_004cfe4c(param_1 + 0x20);
  temp_v0 = *(unsigned short *)(param_1 + 0x864 + temp_v1 * 0x20 + 4);
  temp_v8[0] = 0;
  temp_v2 = (unsigned int)temp_v0;
  FUN_004a8750(temp_v2,*(unsigned char *)(param_1 + 0x861),0);
  temp_v1 = FUN_002a4b28(temp_v0);
  if (temp_v1 != 0) {
    panelSetTarget(-temp_v2,0);
  }
  else {
    messageSetActiveMode(1);
  }
  temp_v1 = inputIsQuestMenuPressed();
  temp_v3 = inputIsQuestConfirmPressed();
  if (0 < *(short *)(param_1 + 0x864)) {
    temp_v6 = FUN_004d0584();
    temp_v7 = inputIsQuestCancelPressed();
    if (temp_v6 == 0) {
      temp_v6 = (int)*(char *)(param_1 + 0x82a);
    }
  }
  temp_v4 = FUN_002f036c();
  if (temp_v4 != 0) {
    FUN_004d0680(param_1);
    return;
  }
  if (temp_v6 != 0) {
    temp_v1 = FUN_004cfe4c(param_1 + 0x20);
    temp_v0 = *(unsigned short *)(param_1 + 0x864 + temp_v1 * 0x20 + 4);
    temp_v8[0] = 0;
    temp_v2 = (unsigned int)temp_v0;
    FUN_004a8750(temp_v2,*(unsigned char *)(param_1 + 0x861),0);
    FUN_00359974(0x18,temp_v2,0xffffffff,0);
    temp_v1 = param_1;
    FUN_004a34a0(param_1,temp_v0);
    pcVar8 = (char *)(param_1 + 0xa870);
    if (temp_v1 != 0) {
      temp_v2 = (unsigned int)temp_v0;
      FUN_00180118(temp_v2);
      libc_strcpy(temp_v8,temp_v2);
      FUN_003180c4(8,temp_v8);
      temp_v5 = FUN_0014bf3c(temp_v0,0);
      libc_strcpy(temp_v8,temp_v5);
      FUN_003180c4(0x10,temp_v8);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x85c),*pcVar8 == '\a');
      *(unsigned int *)(param_1 + 0x14) = 3;
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    else {
      if (*pcVar8 == '\x06') {
        *pcVar8 = '\0';
        sendEvent100020F();
        return;
      }
      temp_v5 = 0;
      switch(*pcVar8) {
      case '\x01':
        temp_v5 = 3;
        break;
      case '\x02':
        temp_v5 = 2;
        break;
      case '\x03':
        temp_v5 = 4;
        break;
      case '\x04':
        temp_v5 = 5;
        break;
      case '\x05':
        temp_v5 = 6;
      }
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x85c),temp_v5);
      *(unsigned int *)(param_1 + 0x14) = 6;
      *(unsigned int *)(param_1 + 0x18) = 0;
      sysPlaySe(0xa0);
    }
    FUN_003c5fc4(1);
    FUN_003343f0(1);
    sendEvent100020E();
    return;
  }
  if (temp_v1 == 0) {
    if (temp_v7 != 0) {
      (*(unsigned int *)((unsigned char *)&DAT_0057f0b4 + 0x4)) = 0xffffffff;
      FUN_0031f27c(0xf,0);
      FUN_0031f208(1);
      FUN_0031f208(2);
      FUN_0031f208(7);
      FUN_0031f208(3);
      useCounterStart();
      FUN_003343f0(1);
      *(unsigned int *)(param_1 + 0x14) = 7;
      *(unsigned int *)(param_1 + 0x18) = 0;
      FUN_0019de98(0,0xf4f4f4ff);
      sendEvent100020E();
      return;
    }
    if (temp_v3 == 0) {
      return;
    }
    *(unsigned int *)(param_1 + 0x14) = 10;
    *(unsigned int *)(param_1 + 0x18) = 0;
    sendEvent100020E();
    return;
  }
  screen4AEnter(param_1);
  FUN_0035deb0();
  return;
}

} /* extern "C" */
