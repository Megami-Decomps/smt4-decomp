/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351c14` (_code @ 0x351c14, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001467a4. */
/* Supplied declaration required: FUN_00351ce8. */
/* Supplied declaration required: FUN_00359f90. */
/* Supplied declaration required: nn_cfg_CTR_Initialize. */


int FUN_00351c14(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  nn_cfg_CTR_Initialize();
  FUN_00359f90();
  FUN_001467a4();
  if (temp_v0 != 0) {
    FUN_00351ce8(param_1,param_2);
    return param_1;
  }
  return -0x36df607c;
}
