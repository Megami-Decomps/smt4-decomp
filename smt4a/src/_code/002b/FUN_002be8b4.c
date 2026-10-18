/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be8b4` (_code @ 0x2be8b4, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0020209c. */


void FUN_002be8b4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  FUN_0020209c();
  FUN_0019a5a0(temp_v0);
  return;
}
