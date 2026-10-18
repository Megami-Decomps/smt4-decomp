/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020dbd0` (_code @ 0x20dbd0, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00447e88; /* 0x447e88 */

/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_00335378. */


void FUN_0020dbd0(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_00335378(*(unsigned int *)(DAT_00447e88 + 0x194));
  if (*(int *)(DAT_00447e88 + 0x164) != 0) {
    FUN_00152af8();
  }
  if (*(int *)(DAT_00447e88 + 0x174) != 0) {
    FUN_00152af8();
  }
  if (*(int *)(DAT_00447e88 + 0x178) != 0) {
    FUN_00152af8();
  }
  if (*(int *)(DAT_00447e88 + 0x17c) != 0) {
    FUN_00152af8();
    return;
  }
  return;
}
