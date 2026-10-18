/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c0564` (_code @ 0x3c0564, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_0022a640. */
/* Supplied declaration required: FUN_00293c98. */


void FUN_003c0564(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_00293c98();
  temp_v0 = 0;
  FUN_0022a640();
  *(unsigned short *)(temp_v0 + 6) = *(unsigned short *)(temp_v0 + 6) | 1;
  return;
}
