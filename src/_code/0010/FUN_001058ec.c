/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001058ec` (_code @ 0x1058ec, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_004d92f0; /* 0x4d92f0 */

/* Supplied declaration required: FUN_002c4b30. */


void FUN_001058ec(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c4b30(&DAT_004d92f0,0x200);
  FUN_002c4b30(0x4d94f0,0x200);
  return;
}
