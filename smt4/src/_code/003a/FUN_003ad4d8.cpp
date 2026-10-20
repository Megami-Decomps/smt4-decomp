/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ad4d8` (_code @ 0x3ad4d8, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028727c(void);
int FUN_002917b8(void);
int FUN_00291944(void);
int FUN_00292c0c(void);
int FUN_0029a128(int);
int FUN_002a0cc8(int);
int scrScriptProcessDestroy(void);
int asdTMTexTableFreeEntry(int);
int FUN_002ae898(int, int);
int asdMemFree(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0028727c. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_00292c0c. */
/* Supplied declaration required: FUN_0029a128. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: asdMemFree. */


void FUN_003ad4d8(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x5a0) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 0x5a0) = 0;
  }
  if (*(int *)(param_1 + 0x598) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x598) = 0;
  }
  if (*(int *)(param_1 + 0x59c) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x59c) = 0;
  }
  FUN_0029a128(0);
  FUN_002a0cc8(0);
  FUN_00292c0c();
  if (*(char *)(param_1 + 0x1e) != '\0') {
    temp_v0 = 0;
    do {
      FUN_002ae898(0x1d,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 3);
    asdTMTexTableFreeEntry(0x1d);
    *(unsigned char *)(param_1 + 0x1e) = 0;
  }
  if (*(char *)(param_1 + 0x1d) != '\0') {
    *(unsigned char *)(param_1 + 0x1d) = 0;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    FUN_002917b8();
    FUN_0028727c();
    *(unsigned char *)(param_1 + 0x1c) = 0;
  }
  FUN_00291944();
  return;
}

} /* extern "C" */
