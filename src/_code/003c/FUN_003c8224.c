/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8224` (_code @ 0x3c8224, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_004398d0; /* 0x4398d0 */

/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_00340328. */


void FUN_003c8224(int param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_002c3aa8(param_1 + 0xb8);
  *(unsigned int *)(param_1 + 0xa0) = DAT_004398d0;
  FUN_00340328();
  *(unsigned short *)(param_1 + 0xb4) = 1;
  FUN_002c3a24(param_1 + 0xb8);
  return;
}
