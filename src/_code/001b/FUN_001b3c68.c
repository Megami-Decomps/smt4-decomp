/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b3c68` (_code @ 0x1b3c68, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_004474d8; /* 0x4474d8 */

/* Supplied declaration required: FUN_00152af8. */


void FUN_001b3c68(void)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(DAT_004474d8 + 0xc) != 0) {
    FUN_00152af8();
  }
  if (*(int *)(DAT_004474d8 + 0x10) != 0) {
    FUN_00152af8();
    return;
  }
  return;
}
