/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f706c` (_code @ 0x3f706c, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002b3194. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


void FUN_003f706c(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 4);
  temp_v0 = temp_v1 + 0x58;
  FUN_002c38a4(temp_v0);
  FUN_002b3194(temp_v1,param_2);
  FUN_002c3820(temp_v0);
  return;
}
