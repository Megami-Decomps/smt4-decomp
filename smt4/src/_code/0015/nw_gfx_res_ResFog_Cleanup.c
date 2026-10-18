/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResFog_Cleanup` (_code @ 0x156d7c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002a2058. */


void nw_gfx_res_ResFog_Cleanup(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0 [2];
  
  temp_v0[0] = *(int *)(*param_1 + 0xc4);
  if (temp_v0[0] != 0) {
    temp_v0[0] = *param_1 + 0xc4 + temp_v0[0];
  }
  else {
    temp_v0[0] = 0;
  }
  if (temp_v0[0] != 0) {
    FUN_002a2058(temp_v0);
  }
  return;
}
