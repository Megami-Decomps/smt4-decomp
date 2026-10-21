/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00417234` (_code @ 0x417234, 0x254 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int scrRunOpcodesStub(unsigned int);
int scrScriptProcessStartEntry(unsigned int, int);
int FUN_00333dc8(int);
int obj04Finish(void);
int FUN_0037e078(void);
int stateHolderEnterState7(void);
int statusDownEnterStateSeven(void);
int FUN_003a7b74(void);
int FUN_003b0744(void);

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: scrRunOpcodesStub. */
extern int messageMainIsIdle(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_00333dc8. */
/* Supplied declaration required: obj04Finish. */
extern int stateHolderCountMinus1(void);
extern int stateHolderStateIs8Or10(void);
/* Supplied declaration required: FUN_0037e078. */
/* Supplied declaration required: stateHolderEnterState7. */
extern unsigned short stateHolderGetCurrentEntry(void);
extern int stateHolderStateIs0xD(void);
/* Supplied declaration required: statusDownEnterStateSeven. */
/* Supplied declaration required: FUN_003a7b74. */
extern int statusDownIsStateEleven(void);
/* Supplied declaration required: FUN_003b0744. */


unsigned int FUN_00417234(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  switch(*(unsigned int *)(param_1 + 0xc)) {
  case 0:
    statusDownEnterStateSeven();
    *(unsigned int *)(param_1 + 0xc) = 1;
  case 1:
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x1c),0xf);
    *(unsigned short *)(param_1 + 0x3a) = 0;
    sysPlaySe(0x69);
    *(unsigned int *)(param_1 + 0xc) = 2;
  case 2:
    scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x1c));
    temp_v3 = stateHolderStateIs8Or10();
    if (temp_v3 != 0) {
      *(unsigned int *)(param_1 + 0xc) = 3;
    }
    else {
      temp_v3 = statusDownIsStateEleven();
      if (temp_v3 == 0) {
        return 0;
      }
      *(unsigned int *)(param_1 + 0xc) = 7;
    }
    obj04Finish();
    sysPlaySe(0x9c);
    return 0;
  case 3:
    temp_v3 = messageMainIsIdle();
    if (temp_v3 == 0) {
      return 0;
    }
    temp_v3 = FUN_003a7b74();
    temp_v1 = stateHolderCountMinus1();
    if (temp_v3 == temp_v1) {
      *(unsigned int *)(param_1 + 0xc) = 7;
      *(unsigned int *)(param_1 + 0x3c) = 0xffffffff;
      return 0;
    }
    temp_v2 = FUN_003a7b74();
    *(unsigned int *)(param_1 + 0x3c) = temp_v2;
    temp_v0 = stateHolderGetCurrentEntry();
    *(unsigned short *)(param_1 + 0x3a) = temp_v0;
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x1c),0x11);
    *(unsigned int *)(param_1 + 0xc) = 4;
  case 4:
    temp_v3 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x1c));
    if (temp_v3 != 2) {
      return 0;
    }
    FUN_00333dc8(0);
    temp_v3 = FUN_002a4b74();
    if (temp_v3 == 0) {
      FUN_003b0744();
      *(unsigned int *)(param_1 + 0xc) = 5;
      return 0;
    }
    break;
  case 5:
    temp_v3 = stateHolderStateIs0xD();
    if (temp_v3 == 0) {
      return 0;
    }
    FUN_0037e078();
    *(unsigned int *)(param_1 + 0xc) = 6;
  case 6:
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned int *)(param_1 + 8) = 5;
    *(unsigned int *)(param_1 + 0xc) = 0;
    if (*(char *)(param_1 + 0x40) == '\0') {
      temp_v2 = 0x67;
    }
    else {
      temp_v2 = 0x11d;
    }
    sysPlaySe(temp_v2);
    return 0;
  case 7:
    temp_v3 = messageMainIsIdle();
    if (temp_v3 == 0) {
      return 0;
    }
    *(unsigned int *)(param_1 + 0x3c) = 0xffffffff;
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x1c),0x10);
    *(unsigned int *)(param_1 + 0xc) = 8;
  case 8:
    temp_v3 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x1c));
    if (temp_v3 != 2) {
      return 0;
    }
    FUN_00333dc8(0);
    temp_v3 = FUN_002a4b74();
    if (temp_v3 == 0) {
      *(unsigned int *)(param_1 + 0x10) = 0;
      *(unsigned int *)(param_1 + 8) = 6;
      *(unsigned int *)(param_1 + 0xc) = 0;
      return 0;
    }
    break;
  default:
    return 0;
  }
  stateHolderEnterState7();
  *(unsigned int *)(param_1 + 0xc) = 1;
  return 0;
}

} /* extern "C" */
