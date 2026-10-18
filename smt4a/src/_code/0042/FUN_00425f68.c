/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00425f68` (_code @ 0x425f68, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00589538; /* 0x589538 */
extern unsigned int DAT_005c0b4c; /* 0x5c0b4c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_0043a670. */
/* Supplied declaration required: FUN_0043a7e8. */
/* Supplied declaration required: FUN_0043a844. */


void FUN_00425f68(void)

{
/* irregular: 5 native warning(s); review required */
  FUN_0043a670(&DAT_005c0b4c,"y2r:u");
  FUN_0043a844(1);
  FUN_0043a7e8(&DAT_00589538);
  software_interrupt(0x19);
  if (DAT_00589538 < 0) {
    FUN_002e3140();
    return;
  }
  return;
}
