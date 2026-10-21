/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00420b70` (_code @ 0x420b70, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionRemove(void);
int asdMemFree(void);
int asdTMTexTableReleaseNode(int, int);
int scrScriptProcessDestroy(void);
int FUN_0019de98(int, unsigned int);
int dataTableFree(int);
int ptrListRemoveClearOwner(unsigned int, unsigned int);
int msgWindowReset(void);
int FUN_002c1648(void);
int FUN_002c85b0(int);
int asdTMTexTableFreeEntry(int);
int FUN_00333f6c(void);
int FUN_0033440c(unsigned int);
int messageMainSetFlag(int);
int fillThreeWordsWithByte(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: ifTouchRegionRemove. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: dataTableFree. */
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: msgWindowReset. */
/* Supplied declaration required: FUN_002c1648. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: FUN_0033440c. */
/* Supplied declaration required: messageMainSetFlag. */
/* Supplied declaration required: fillThreeWordsWithByte. */


void FUN_00420b70(int param_1)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x3c) = 0;
  }
  asdTMTexTableReleaseNode(0x2b,0);
  asdTMTexTableFreeEntry(0x2b);
  FUN_002c1648();
  dataTableFree(0x3d);
  msgWindowReset();
  if (*(int *)(param_1 + 0x54) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x54) = 0;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(*(int *)(param_1 + 0x58) + 4));
    if (*(int **)(param_1 + 0x58) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x58) + 4))(*(int **)(param_1 + 0x58));
      *(unsigned int *)(param_1 + 0x58) = 0;
    }
  }
  for (temp_v0 = 0; temp_v0 < *(int *)(param_1 + 0x448); temp_v0++) {
    ifTouchRegionRemove();
  }
  *(unsigned int *)(param_1 + 0x448) = 0;
  fillThreeWordsWithByte(param_1 + 0x43c,0xffffffff);
  *(unsigned char *)(param_1 + 0x44c) = 0;
  *(unsigned char *)(param_1 + 0x44d) = 0;
  *(unsigned char *)(param_1 + 0x44e) = 0;
  FUN_002c85b0(0);
  FUN_0033440c(0xffffffff);
  FUN_00333f6c();
  FUN_0019de98(0,0xf4f4f4ff);
  messageMainSetFlag(1);
  return;
}

} /* extern "C" */
