/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00397aa4` (_code @ 0x397aa4, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002b8cc8. */
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c424c. */


void FUN_00397aa4(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  FUN_002917b8();
  if (0 < *(short *)(param_1 + 0x93e)) {
    temp_v0 = 0;
    do {
      FUN_002b8cc8();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x93e));
    FUN_002c424c(param_1 + 0x820,0x11e,0xffffffff);
    *(unsigned short *)(param_1 + 0x93e) = 0;
  }
  FUN_002ae898(0x2e,0);
  FUN_002ae7e8(0x2e);
  FUN_002a7218(*(unsigned int *)(param_1 + 0x654));
  FUN_002c415c(*(unsigned int *)(param_1 + 0x650));
  FUN_002c415c(*(unsigned int *)(param_1 + 0x64c));
  FUN_002bff50();
  return;
}
