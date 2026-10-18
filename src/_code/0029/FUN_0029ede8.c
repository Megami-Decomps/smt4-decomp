/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ede8` (_code @ 0x29ede8, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_001db608. */
/* Supplied declaration required: FUN_001dba90. */


void FUN_0029ede8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1 * 0x60 + 0x4def48;
  FUN_001db608(temp_v0,0x60);
  FUN_001dba90(temp_v0,param_2,param_3,param_4);
  return;
}
