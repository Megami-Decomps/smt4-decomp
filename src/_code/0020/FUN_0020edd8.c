/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020edd8` (_code @ 0x20edd8, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00435ce8; /* 0x435ce8 */

extern unsigned int FUN_002c08f0(void);
/* Supplied declaration required: FUN_003d8e24. */


void FUN_0020edd8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  if (DAT_00435ce8 != 0) {
    FUN_003d8e24(DAT_00435ce8,temp_v0);
    return;
  }
  return;
}
