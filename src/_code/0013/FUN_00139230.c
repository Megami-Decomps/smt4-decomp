/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139230` (_code @ 0x139230, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_00128cbc(void);
/* Supplied declaration required: FUN_002bce48. */


void FUN_00139230(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00128cbc();
  if (temp_v0 < 0) {
    FUN_002bce48();
    return;
  }
  return;
}
