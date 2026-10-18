/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003606cc` (_code @ 0x3606cc, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002bce48. */
extern int FUN_00360a4c(void);


void FUN_003606cc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00360a4c();
  if (temp_v0 < 0) {
    FUN_002bce48();
    return;
  }
  return;
}
