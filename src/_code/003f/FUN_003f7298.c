/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f7298` (_code @ 0x3f7298, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002b3378. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


void FUN_003f7298(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 4);
  temp_v0 = temp_v1 + 0x58;
  FUN_002c3aa8(temp_v0);
  FUN_002b3378(temp_v1,param_2);
  FUN_002c3a24(temp_v0);
  return;
}
