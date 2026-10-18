/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5094` (_code @ 0x2c5094, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_00137314. */
/* Supplied declaration required: FUN_002bc9d8. */
/* Supplied declaration required: FUN_002bf2b4. */


void FUN_002c5094(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    temp_v0 = param_4;
    FUN_002bc9d8(0x207,&temp_v0);
    FUN_00137314(temp_v0,*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18));
    FUN_002bf2b4();
  }
  return;
}
