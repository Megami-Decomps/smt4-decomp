/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001398dc` (_code @ 0x1398dc, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00128de4. */


unsigned int FUN_001398dc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = 0;
  FUN_00128de4(temp_v0);
  return temp_v0[0];
}
