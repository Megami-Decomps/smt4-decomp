/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036196c` (_code @ 0x36196c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002c1148. */
/* Supplied declaration required: FUN_002c52f8. */


void FUN_0036196c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  FUN_002c1148();
  temp_v1 = 0;
  if (temp_v0 < 0) {
    temp_v1 = -0x375f3004;
  }
  if (temp_v0 >= 0 || temp_v0 == temp_v1) {
    return;
  }
  FUN_002c52f8();
  return;
}
