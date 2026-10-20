/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8b0c` (_code @ 0x3b8b0c, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002636b0(void);
int campGetState(void);
int FUN_002a4bac(unsigned int);
int scrScriptProcessDestroy(void);
int FUN_002ae898(int, unsigned int);
int asdMemFree(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char g_gameState; /* 0x49f91c */

/* Supplied declaration required: FUN_002636b0. */
/* Supplied declaration required: campGetState. */
/* Supplied declaration required: FUN_002a4bac. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: asdMemFree. */


void FUN_003b8b0c(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xd74) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 0xd74) = 0;
  }
  if (*(int *)(param_1 + 0xd6c) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xd6c) = 0;
  }
  if (*(int *)(param_1 + 0xd70) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xd70) = 0;
  }
  if (*(int *)(param_1 + 0xd9c) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 0xd9c) = 0;
  }
  if (*(int *)(param_1 + 0xd94) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xd94) = 0;
  }
  if (*(int *)(param_1 + 0xd98) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xd98) = 0;
  }
  FUN_002ae898(0x21,*(unsigned int *)(param_1 + 0x90));
  campGetState();
  if ((*(char *)(param_1 + 0xe58) != '\0') && ((*(signed char *)((unsigned char *)&g_gameState + 0x34)) == '\0')) {
    *(unsigned char *)(param_1 + 0xe58) = 0;
    FUN_002a4bac(*(unsigned int *)(param_1 + 0xe5c));
    temp_v0 = 0;
    do {
      piVar2 = (int *)(param_1 + temp_v0 * 4 + 0xe60);
      if (*piVar2 != 0) {
        asdMemFree();
        *piVar2 = 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 10);
  }
  if (*(char *)(param_1 + 0xdac) == '\0') {
    FUN_002636b0();
    return;
  }
  return;
}

} /* extern "C" */
