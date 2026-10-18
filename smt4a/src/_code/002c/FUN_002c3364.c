/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3364` (_code @ 0x2c3364, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_003f86f8. */


void FUN_002c3364(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_0014384c(0x11);
  temp_v0 = 0;
  do {
    FUN_001acf98(0x11,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  FUN_003f86f8(0x39);
  return;
}
