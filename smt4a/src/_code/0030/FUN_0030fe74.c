/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fe74` (_code @ 0x30fe74, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Supplied declaration required: FUN_00306d50. */


void FUN_0030fe74(unsigned int param_1,int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = *param_3;
  FUN_00306d50(param_1,param_2 + 0x34,temp_v0);
  return;
}
