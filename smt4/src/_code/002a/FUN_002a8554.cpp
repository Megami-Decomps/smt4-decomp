/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a8554` (_code @ 0x2a8554, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


void FUN_002a8554(void)

{
/* irregular: 1 native warning(s); review required */
  software_interrupt(0x22);
  return;
}

} /* extern "C" */
