/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3d0c` (_code @ 0x1d3d0c, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_004398d4; /* 0x4398d4 */

extern unsigned int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_003c83f0. */


void FUN_001d3d0c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  if (DAT_004398d4 != 0) {
    FUN_003c83f0(DAT_004398d4,temp_v0);
    return;
  }
  return;
}
