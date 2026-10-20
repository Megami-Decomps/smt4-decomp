/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2d44` (_code @ 0x2c2d44, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002392b8(void);
int FUN_00261984(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f574; /* 0x57f574 */

/* Supplied declaration required: FUN_002392b8. */
/* Supplied declaration required: FUN_00261984. */


void FUN_002c2d44(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002392b8();
  FUN_00261984();
  *(unsigned int *)(DAT_0057f574 + 0x10) = 0xffffffff;
  return;
}

} /* extern "C" */
