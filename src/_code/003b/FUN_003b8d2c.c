/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8d2c` (_code @ 0x3b8d2c, 0x130 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern signed char DAT_0049f950; /* 0x49f950 */

/* Supplied declaration required: FUN_002638dc. */
/* Supplied declaration required: FUN_002741f4. */
/* Supplied declaration required: FUN_002a4ef0. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_003b8d2c(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  if (*(int *)(param_1 + 0xd74) != 0) {
    FUN_002a755c();
    *(unsigned int *)(param_1 + 0xd74) = 0;
  }
  if (*(int *)(param_1 + 0xd6c) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0xd6c) = 0;
  }
  if (*(int *)(param_1 + 0xd70) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0xd70) = 0;
  }
  if (*(int *)(param_1 + 0xd9c) != 0) {
    FUN_002a755c();
    *(unsigned int *)(param_1 + 0xd9c) = 0;
  }
  if (*(int *)(param_1 + 0xd94) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0xd94) = 0;
  }
  if (*(int *)(param_1 + 0xd98) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0xd98) = 0;
  }
  FUN_002aeb2c(0x21,*(unsigned int *)(param_1 + 0x90));
  FUN_002741f4();
  if ((*(char *)(param_1 + 0xe58) != '\0') && (DAT_0049f950 == '\0')) {
    *(unsigned char *)(param_1 + 0xe58) = 0;
    FUN_002a4ef0(*(unsigned int *)(param_1 + 0xe5c));
    temp_v0 = 0;
    do {
      piVar2 = (int *)(param_1 + temp_v0 * 4 + 0xe60);
      if (*piVar2 != 0) {
        FUN_002c4360();
        *piVar2 = 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 10);
  }
  if (*(char *)(param_1 + 0xdac) == '\0') {
    FUN_002638dc();
    return;
  }
  return;
}
