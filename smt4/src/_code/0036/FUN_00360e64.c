/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00360e64` (_code @ 0x360e64, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002378fc. */


void FUN_00360e64(void)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  float in_s0;
  
  if (in_s0 < 0.0f) {
    if (0xbf800000 < (unsigned int)in_s0) {
      FUN_002378fc();
      return;
    }
    FUN_002378fc();
    return;
  }
  if ((int)in_s0 >= 0x3f800001) {
    FUN_002378fc();
    return;
  }
  FUN_002378fc();
  return;
}
