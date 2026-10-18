/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105948` (_code @ 0x105948, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_004d92f0; /* 0x4d92f0 */

/* Supplied declaration required: FUN_002c4938. */


void FUN_00105948(void)

{
/* irregular: 1 native warning(s); review required */
  FUN_002c4938(&DAT_004d92f0,0x200);
  FUN_002c4938(0x4d94f0,0x200);
  return;
}
