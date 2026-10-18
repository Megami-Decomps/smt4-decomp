/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129af4` (_code @ 0x129af4, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00147c48. */
extern int FUN_002ad4e0(void);
/* Supplied declaration required: FUN_002ad4f0. */


void FUN_00129af4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002ad4e0();
  if (temp_v0 != 0) {
    FUN_002ad4f0(temp_v0);
    FUN_00147c48();
    return;
  }
  return;
}
