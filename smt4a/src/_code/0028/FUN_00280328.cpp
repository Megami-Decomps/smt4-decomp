/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280328` (_code @ 0x280328, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdListBoxCreate(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: asdListBoxCreate. */


void FUN_00280328(void)

{
/* irregular: 1 native warning(s); review required */
  asdListBoxCreate();
  return;
}

} /* extern "C" */
