/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ed70` (_code @ 0x20ed70, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c08f0(void);
int FUN_003356c0(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00434260; /* 0x434260 */

/* Supplied declaration required: FUN_002c08f0. */
/* Supplied declaration required: FUN_003356c0. */


void FUN_0020ed70(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c08f0();
  if (DAT_00434260 != 0) {
    FUN_003356c0();
    return;
  }
  return;
}

} /* extern "C" */
