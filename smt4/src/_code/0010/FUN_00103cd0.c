/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103cd0` (_code @ 0x103cd0, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_0046519c; /* 0x46519c */

/* Supplied declaration required: FUN_002c3424. */
/* Supplied declaration required: nn_applet_CTR_ReplySleepQuery. */


void FUN_00103cd0(void)

{
/* irregular: 2 native warning(s); review required */
  nn_applet_CTR_ReplySleepQuery(1);
  FUN_002c3424(&DAT_0046519c);
  return;
}
