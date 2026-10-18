/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00201964` (_code @ 0x201964, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_002976ac. */
/* Supplied declaration required: FUN_002a6214. */
/* Supplied declaration required: FUN_002c4e28. */


void FUN_00201964(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002c4e28(0x19);
  temp_v0 = 0;
  do {
    FUN_002a6214(0x19,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  FUN_002976ac(0x39);
  return;
}
