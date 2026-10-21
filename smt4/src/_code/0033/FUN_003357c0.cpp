/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003357c0` (_code @ 0x3357c0, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023f194(...);
unsigned int FUN_0023f27c(int, unsigned int, unsigned int, unsigned int, void *, int, int, int, int);
int btlUiPlaySceneFadeOutWhenReady(unsigned int);
int FUN_00282820(int, int, int, int, int, int, int, int);
int asdLoadFileAsyncSimple(char *, unsigned int *, int);
int slotSetRequest(int, unsigned int, int);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_00439a70; /* 0x439a70 */
extern int DAT_00439a74; /* 0x439a74 */
extern unsigned int DAT_00439a78; /* 0x439a78 */
extern int DAT_00439a7c; /* 0x439a7c */
extern unsigned int DAT_00439a80; /* 0x439a80 */
extern int DAT_00439a84; /* 0x439a84 */
extern unsigned int DAT_00439a88; /* 0x439a88 */
extern unsigned int DAT_00439a8c; /* 0x439a8c */
extern unsigned int DAT_00439a90; /* 0x439a90 */
extern unsigned int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: FUN_0023f194. */
/* Supplied declaration required: FUN_0023f27c. */
/* Supplied declaration required: btlUiPlaySceneFadeOutWhenReady. */
/* Supplied declaration required: FUN_00282820. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: slotSetRequest. */
extern int gameDataBlocksGetSaveData(void);


unsigned int * FUN_003357c0(unsigned int *param_1)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  int temp_v1;
  
  if (param_1[2] == DAT_00439a70) {
    FUN_00282820(0,0,0,0,8,0,0xb,0);
    btlUiPlaySceneFadeOutWhenReady(g_btlUiBlock);
  }
  if (param_1[2] == DAT_00439a84) {
    FUN_0023f27c(0,0,DAT_00439a88,0x10,0,DAT_00439a8c,0,2,0xffffffff);
  }
  if (param_1[2] == DAT_00439a74) {
    slotSetRequest(0,DAT_00439a78,0xff);
  }
  if (param_1[2] == DAT_00439a7c) {
    slotSetRequest(1,DAT_00439a80,0xff);
  }
  if (DAT_00439a90 < (unsigned int)param_1[2]) {
    *param_1 = 3;
    if ((param_1[1] & 1) == 0) {
      pcVar2 = "battle/gameover/gameover.bf";
    }
    else {
      pcVar2 = "battle/gameover/level_event.bf";
    }
    asdLoadFileAsyncSimple(pcVar2,param_1 + 3,0);
    if ((param_1[1] & 1) == 0) {
      pcVar2 = "battle/gameover/gameover.mbm";
    }
    else {
      pcVar2 = "battle/gameover/level_event.mbm";
    }
    asdLoadFileAsyncSimple(pcVar2,param_1 + 5,0);
    temp_v1 = gameDataBlocksGetSaveData();
    temp_v0 = *(char *)(temp_v1 + 0x24b29);
    if (temp_v0 != -1) {
      *(char *)(temp_v1 + 0x24b29) = temp_v0 + '\x01';
    }
    *param_1 = 4;
    FUN_0023f194(param_1);
    return param_1;
  }
  return (unsigned int *)0x0;
}

} /* extern "C" */
