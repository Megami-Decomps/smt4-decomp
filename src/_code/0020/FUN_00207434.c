/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00207434` (_code @ 0x207434, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c43b4. */


void FUN_00207434(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002bf244(*(unsigned int *)(param_1 + 0x34));
  if (temp_v0 != 0) {
    FUN_002c43b4(*(unsigned int *)(param_1 + 0x34),0);
    return;
  }
  return;
}
