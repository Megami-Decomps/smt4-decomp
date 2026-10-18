/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041be60` (_code @ 0x41be60, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe9b4. */


void FUN_0041be60(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  *param_1 = param_2;
  temp_v0 = *(unsigned int *)(param_1[1] + 4);
  FUN_003fd76c(temp_v0,param_1 + 0x24);
  FUN_003fdb18(temp_v0);
  FUN_003fe9b4(temp_v0,param_1 + 0x2a);
  FUN_002e3328(param_1);
  return;
}
