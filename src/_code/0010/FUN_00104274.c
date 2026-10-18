/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104274` (_code @ 0x104274, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_004e4138; /* 0x4e4138 */

/* Supplied declaration required: FUN_0011d020. */
/* Supplied declaration required: FUN_002c3a24. */


void FUN_00104274(void)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c3a24(&DAT_004e4138);
  FUN_0011d020();
  return;
}
