/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5fbc` (_code @ 0x2c5fbc, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_00128258(void);
/* Supplied declaration required: FUN_002bbd10. */


void FUN_002c5fbc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00128258();
  if ((temp_v0 < 0) && (temp_v0 < 0)) {
    FUN_002bbd10(temp_v0,0x2c5fd4);
    return;
  }
  return;
}
