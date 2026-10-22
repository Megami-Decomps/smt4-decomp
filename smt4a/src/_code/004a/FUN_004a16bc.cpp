/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a16bc` (_code @ 0x4a16bc, 0x22c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/Shard004A.h"

extern "C" {

int sysPlaySe(unsigned int);
int FUN_00180118(unsigned int);
int scrScriptProcessStartEntry(unsigned int, int);
int libc_strcpy(unsigned char [304], unsigned int);
int FUN_003180c4(int, unsigned char [304]);
int FUN_0032d0c8(...);
int FUN_003343f0(int);
int FUN_0035ad50(int, unsigned char [304]);
int uniteCreatePreviewModel(void);
int screen4AEnter(int);
int sendEvent100020E(void);
void FUN_004d0680(Screen4A*);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char g_animatedPageSelection; /* 0x57f0b4 */

extern unsigned int FUN_0014bf3c(unsigned int, unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00180118. */
extern unsigned int slotRecordFindById(unsigned short);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: libc_strcpy. */
extern int gameGetMode(void);
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_0035ad50. */
/* Supplied declaration required: uniteCreatePreviewModel. */
/* Supplied declaration required: screen4AEnter. */
extern int flaggedValueHolderGetTotal(int);
/* Supplied declaration required: sendEvent100020E. */
extern int inputIsQuestCancelPressed(void);
extern int inputIsQuestConfirmPressed(void);
extern int inputIsQuestMenuPressed(void);
extern int FUN_004d0584(void);


void FUN_004a16bc(int param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned short temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10 [304];
  
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v2 = inputIsQuestMenuPressed();
  if (0 < *(short *)(param_1 + 0x864)) {
    temp_v7 = FUN_004d0584();
    temp_v8 = inputIsQuestConfirmPressed();
    temp_v9 = inputIsQuestCancelPressed();
    if (temp_v7 == 0) {
      temp_v7 = (int)*(char *)(param_1 + 0x82a);
    }
  }
  temp_v3 = gameGetMode();
  if (temp_v3 != 0) {
    FUN_004d0680(reinterpret_cast<Screen4A*>(param_1));
    return;
  }
  if (temp_v7 != 0) {
    temp_v2 = flaggedValueHolderGetTotal(param_1 + 0x20);
    temp_v6 = (unsigned int)*(unsigned short *)(param_1 + 0x864 + temp_v2 * 0x20 + 4);
    temp_v4 = temp_v6;
    FUN_00180118(temp_v6);
    libc_strcpy(temp_v10,temp_v4);
    FUN_003180c4(8,temp_v10);
    temp_v5 = FUN_0014bf3c(temp_v6,0);
    libc_strcpy(temp_v10,temp_v5);
    FUN_003180c4(0x10,temp_v10);
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x85c),7);
    FUN_003343f0(1);
    *(unsigned int *)(param_1 + 0x14) = 8;
    *(unsigned int *)(param_1 + 0x18) = 0;
    sendEvent100020E();
  }
  else {
    if (temp_v2 != 0) {
      screen4AEnter(param_1);
      uniteCreatePreviewModel();
      return;
    }
    if (temp_v8 != 0) {
      (*(unsigned int *)((unsigned char *)&g_animatedPageSelection + 0x4)) = 0xffffffff;
      temp_v1 = *(char *)(param_1 + 0x861) + '\x01';
      *(char *)(param_1 + 0x861) = temp_v1;
      if ('\x01' < temp_v1) {
        *(unsigned char *)(param_1 + 0x861) = 0;
      }
      sendEvent100020E();
      *(unsigned char *)(param_1 + 0x863) = 1;
      if (*(char *)(param_1 + 0x861) == '\x01') {
        temp_v5 = 0x4e;
      }
      else {
        temp_v5 = 0x4f;
      }
      sysPlaySe(temp_v5);
      temp_v2 = flaggedValueHolderGetTotal(param_1 + 0x20);
      temp_v0 = *(unsigned short *)(param_1 + 0x864 + temp_v2 * 0x20 + 4);
      if (*(char *)(param_1 + 0x861) == '\x01') {
        temp_v5 = slotRecordFindById(temp_v0);
        FUN_0032d0c8(0,1,temp_v0,temp_v5);
        return;
      }
      FUN_0035ad50(temp_v0,temp_v10);
      FUN_0032d0c8(0,1,temp_v0,temp_v10);
      return;
    }
    if (temp_v9 != 0) {
      (*(unsigned int *)((unsigned char *)&g_animatedPageSelection + 0x4)) = 0xffffffff;
      FUN_003343f0(1);
      *(unsigned int *)(param_1 + 0x14) = 9;
      *(unsigned int *)(param_1 + 0x18) = 0;
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x85c),8);
      sendEvent100020E();
      return;
    }
  }
  return;
}

} /* extern "C" */
