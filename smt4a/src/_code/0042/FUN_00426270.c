/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00426270` (_code @ 0x426270, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001a0eb0. */
/* Supplied declaration required: FUN_00426344. */
/* Supplied declaration required: FUN_004310c0. */
/* Supplied declaration required: nn_cfg_CTR_Initialize. */


void FUN_00426270(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  nn_cfg_CTR_Initialize();
  FUN_004310c0();
  FUN_001a0eb0();
  if (temp_v0 != 0) {
    FUN_00426344(param_1,param_2);
    return;
  }
  return;
}
