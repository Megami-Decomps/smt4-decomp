/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4e98` (_code @ 0x2c4e98, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_001373f0. */
/* Supplied declaration required: FUN_002bc7f4. */
/* Supplied declaration required: FUN_002bf0dc. */


void FUN_002c4e98(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    temp_v0 = param_4;
    FUN_002bc7f4(0x207,&temp_v0);
    FUN_001373f0(temp_v0,*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18));
    FUN_002bf0dc();
  }
  return;
}
