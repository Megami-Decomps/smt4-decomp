/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e4990` (_code @ 0x1e4990, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00435d18; /* 0x435d18 */

extern unsigned int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_003dd3d0. */


void FUN_001e4990(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  if (DAT_00435d18 != 0) {
    FUN_003dd3d0(DAT_00435d18,temp_v0);
    return;
  }
  return;
}
