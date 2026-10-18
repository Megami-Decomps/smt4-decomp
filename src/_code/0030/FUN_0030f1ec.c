/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f1ec` (_code @ 0x30f1ec, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002572dc. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_0030f1ec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002572dc(*(unsigned int *)(param_1 + 8));
  temp_v0 = *(int *)(param_1 + 4);
  (**(romwright_code **)(*(int *)(temp_v0 + 0x38) * 0x18 + 0x472720))(*(unsigned int *)(temp_v0 + 0x3c));
  FUN_002c4360(temp_v0);
  FUN_002c4360(*(unsigned int *)(param_1 + 0xc));
  return;
}
