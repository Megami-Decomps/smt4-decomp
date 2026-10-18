/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339dc0` (_code @ 0x339dc0, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_0027dd9c. */
/* Supplied declaration required: FUN_0027de24. */


void FUN_00339dc0(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_0027de24(DAT_00435d18);
  FUN_0027dd9c(DAT_00435d18);
  return;
}
