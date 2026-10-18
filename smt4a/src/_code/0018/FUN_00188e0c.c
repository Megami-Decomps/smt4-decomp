/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00188e0c` (_code @ 0x188e0c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_0016f1d4(void);
/* Supplied declaration required: FUN_00195fc8. */


void FUN_00188e0c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0016f1d4();
  if (temp_v0 < 0) {
    FUN_00195fc8();
    return;
  }
  return;
}
