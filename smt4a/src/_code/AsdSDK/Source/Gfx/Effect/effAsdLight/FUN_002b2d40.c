/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2d40` (_code @ 0x2b2d40, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_005b3c80; /* 0x5b3c80 */
extern unsigned int DAT_005b3c88; /* 0x5b3c88 */

/* Supplied declaration required: FUN_0018cfe4. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_002b2d40(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_0019a5a0();
  if (DAT_005b3c80 != 0) {
    FUN_0018cfe4(DAT_005b3c80,DAT_005b3c88);
    return;
  }
  return;
}
