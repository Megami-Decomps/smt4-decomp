/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebda8` (_code @ 0x2ebda8, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00192748. */
/* Supplied declaration required: FUN_00192798. */


void FUN_002ebda8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00187180(0x37,0);
  FUN_00192798();
  FUN_00192748(temp_v0);
  return;
}
