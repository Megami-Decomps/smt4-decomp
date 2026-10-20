/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b980c` (_code @ 0x3b980c, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int buttonHelpTexturesUnref(void);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int FUN_00291998(void);
int FUN_00295ba4(int);
int scrScriptProcessDestroy(void);
int asdTMTexTableFreeEntry(int);
int FUN_002b827c(int);
int asdMemFree(void);
int spriteTable2aFree(int);
int FUN_003bbafc(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: buttonHelpTexturesUnref. */
/* Supplied declaration required: buttonHelpRelease. */
/* Supplied declaration required: uiFadeRelease. */
/* Supplied declaration required: FUN_00291998. */
/* Supplied declaration required: FUN_00295ba4. */
extern int dialogIsActive(void);
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_002b827c. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: spriteTable2aFree. */
/* Supplied declaration required: FUN_003bbafc. */


void FUN_003b980c(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0xd90) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 0xd90) = 0;
  }
  if (*(int *)(param_1 + 0xd88) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xd88) = 0;
  }
  if (*(int *)(param_1 + 0xd8c) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xd8c) = 0;
  }
  if (*(int *)(param_1 + 0xd84) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 0xd84) = 0;
  }
  if (*(int *)(param_1 + 0xd7c) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xd7c) = 0;
  }
  if (*(int *)(param_1 + 0xd80) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0xd80) = 0;
  }
  spriteTable2aFree(param_1 + 0x9c);
  FUN_003bbafc(param_1 + 0xd58);
  FUN_00291998();
  temp_v0 = dialogIsActive();
  if (temp_v0 != 0) {
    FUN_00295ba4(0);
  }
  FUN_002b827c(3);
  buttonHelpRelease();
  buttonHelpTexturesUnref();
  uiFadeRelease();
  asdTMTexTableFreeEntry(0x21);
  return;
}

} /* extern "C" */
