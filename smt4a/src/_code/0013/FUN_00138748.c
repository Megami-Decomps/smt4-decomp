/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138748` (_code @ 0x138748, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_005b4090; /* 0x5b4090 */

/* Supplied declaration required: FUN_001af148. */
/* Supplied declaration required: nn_applet_CTR_ReplySleepQuery. */


void FUN_00138748(void)

{
/* irregular: 2 native warning(s); review required */
  nn_applet_CTR_ReplySleepQuery(1);
  FUN_001af148(&DAT_005b4090);
  return;
}
