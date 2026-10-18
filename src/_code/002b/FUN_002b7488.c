/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7488` (_code @ 0x2b7488, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002bc9d8. */


unsigned int FUN_002b7488(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  unsigned int in_r3;
  unsigned int temp_v0 [2];
  
  temp_v0[0] = in_r3;
  FUN_002bc9d8(0x208,temp_v0);
  return temp_v0[0];
}
