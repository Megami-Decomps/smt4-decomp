/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003557e0` (_code @ 0x3557e0, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


void FUN_003557e0(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  (**(romwright_code **)(*param_1 + 0x30))(param_1);
  temp_v0 = param_1[1];
  FUN_002c3aa8(temp_v0 + 0xe8);
  *param_1 = *(int *)(temp_v0 + 0xdc);
  *(int **)(temp_v0 + 0xdc) = param_1;
  *(int *)(temp_v0 + 0xe4) = *(int *)(temp_v0 + 0xe4) - 1;
  FUN_002c3a24(temp_v0 + 0xe8);
  return;
}
