/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb774` (_code @ 0x2bb774, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002b5a1c. */


void FUN_002bb774(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = param_1;
  FUN_002b5a1c(7,temp_v0,4,0,0,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}
