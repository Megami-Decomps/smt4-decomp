/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041dcc0` (_code @ 0x41dcc0, 0x1a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameDataBlocksReleaseHold(int);
int sysPlaySe(int);
int scrRunOpcodesStub(unsigned int);
int scrScriptProcessStartEntry(unsigned int, int);
int gameDataAddHomeButtonHold(void);
int messageMainSetFlag(int);
int saveLoadProcessCreate(int, int);
int SBORROW4(int, int);
int rt_memcpy_w(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char g_saveLoadUIBase; /* 0x588e14 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: gameDataBlocksReleaseHold. */
extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: gameDataAddHomeButtonHold. */
extern int saveLoadThreadHasResult(void);
extern int byteTripleGetV0(void);
/* Supplied declaration required: messageMainSetFlag. */
extern int byteArr5Get3(void);
/* Supplied declaration required: saveLoadProcessCreate. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0041dcc0(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  if (*(char *)(param_1 + 0xf) != '\0') {
    temp_v0 = saveLoadThreadHasResult();
    if ((temp_v0 == 0) && (temp_v0 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x40)), temp_v0 == 2)) {
      temp_v0 = byteArr5Get3();
      if (temp_v0 != 0) {
        g_saveLoadUIBase = 1;
      }
      else {
        *(unsigned char *)(param_1 + 0x11) = 1;
      }
    }
  }
  else if (*(char *)(param_1 + 0x10) != '\0') {
    *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 1;
    temp_v0 = saveLoadThreadHasResult();
    if (temp_v0 != 0) {
      if (*(char *)(param_1 + 0xe) != '\0') {
        *(unsigned char *)(param_1 + 0xf) = 1;
      }
    }
    else {
      scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x40));
    }
    temp_v0 = byteTripleGetV0();
    if (temp_v0 != 0) {
      if (*(int *)(param_1 + 0x450) < 0x1f) {
        gameDataAddHomeButtonHold();
      }
      else {
        gameDataBlocksReleaseHold(1);
      }
    }
    temp_v0 = byteTripleGetV0();
    temp_v2 = temp_v0 != 0;
    temp_v0 = 0;
    temp_v1 = 0;
    if (temp_v2) {
      temp_v1 = *(int *)(param_1 + 0x450);
      temp_v0 = temp_v1 - 0x1e;
    }
    if ((temp_v2 && temp_v1 != 0x1e) && temp_v0 < 0 == (temp_v2 && SBORROW4(temp_v1,0x1e))) {
      messageMainSetFlag(1);
      sysPlaySe(0xa0);
      *(unsigned char *)(param_1 + 0xf) = 1;
      temp_v0 = byteArr5Get3();
      if (temp_v0 != 0) {
        gameDataBlocksReleaseHold(1);
        temp_v0 = gameDataBlocksGetSaveData();
        rt_memcpy_w(param_1 + *(int *)(param_1 + 0x2f8) * 0x80 + 0x6c,temp_v0 + 0x27044,0x80);
        *(unsigned char *)(*(int *)(param_1 + 0x2f8) + param_1 + 0x2ec) = 1;
        scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x40),5);
        return;
      }
      gameDataBlocksReleaseHold(1);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x40),6);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x5c) == '\0') {
    *(unsigned char *)(param_1 + 0x10) = 1;
    saveLoadProcessCreate(*(int *)(param_1 + 0x2f8) + 1,0);
    scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x40));
    *(unsigned int *)(param_1 + 0x450) = 0;
    return;
  }
  return;
}

} /* extern "C" */
