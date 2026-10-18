/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ad6f8` (_code @ 0x3ad6f8, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002874e4. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_00292eb0. */
/* Supplied declaration required: FUN_0029a3c4. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_003ad6f8(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x5a0) != 0) {
    FUN_002a755c();
    *(unsigned int *)(param_1 + 0x5a0) = 0;
  }
  if (*(int *)(param_1 + 0x598) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0x598) = 0;
  }
  if (*(int *)(param_1 + 0x59c) != 0) {
    FUN_002c4360();
    *(unsigned int *)(param_1 + 0x59c) = 0;
  }
  FUN_0029a3c4(0);
  FUN_002a0f68(0);
  FUN_00292eb0();
  if (*(char *)(param_1 + 0x1e) != '\0') {
    temp_v0 = 0;
    do {
      FUN_002aeb2c(0x1d,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 3);
    FUN_002aea7c(0x1d);
    *(unsigned char *)(param_1 + 0x1e) = 0;
  }
  if (*(char *)(param_1 + 0x1d) != '\0') {
    *(unsigned char *)(param_1 + 0x1d) = 0;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    FUN_00291a5c();
    FUN_002874e4();
    *(unsigned char *)(param_1 + 0x1c) = 0;
  }
  FUN_00291be8();
  return;
}
