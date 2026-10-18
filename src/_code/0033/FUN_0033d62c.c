/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033d62c` (_code @ 0x33d62c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0033f5d4. */


void FUN_0033d62c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_0033f5d4();
                    /* WARNING: Treating indirect jump as return */
  return;
}
