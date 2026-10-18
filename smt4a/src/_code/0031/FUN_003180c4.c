/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003180c4` (_code @ 0x3180c4, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001654f8. */
/* Supplied declaration required: FUN_0019b738. */


void FUN_003180c4(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1 * 0x68 + 0x63afc8;
  FUN_0019b738(temp_v0,0x68);
  FUN_001654f8(param_2,temp_v0,0x68);
  return;
}
