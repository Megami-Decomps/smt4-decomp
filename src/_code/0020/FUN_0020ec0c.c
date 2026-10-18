/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ec0c` (_code @ 0x20ec0c, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00434260; /* 0x434260 */

/* Supplied declaration required: FUN_002c0ac8. */
/* Supplied declaration required: FUN_003358f4. */


void FUN_0020ec0c(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c0ac8();
  if (DAT_00434260 != 0) {
    FUN_003358f4();
    return;
  }
  return;
}
