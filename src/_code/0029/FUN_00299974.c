/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00299974` (_code @ 0x299974, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_00282f00. */
/* Supplied declaration required: FUN_00295010. */
/* Supplied declaration required: FUN_002a0de8. */


void FUN_00299974(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(char *)(DAT_0044e144 + 0x1e67) != '\x03' && *(char *)(DAT_0044e144 + 0x1e67) != '\t') {
    return;
  }
  if (param_1 != 0) {
    FUN_00295010();
  }
  else {
    FUN_00282f00();
  }
  FUN_002a0de8();
  return;
}
