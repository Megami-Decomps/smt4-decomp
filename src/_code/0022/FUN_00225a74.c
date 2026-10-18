/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00225a74` (_code @ 0x225a74, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_002ad6d8. */


void FUN_00225a74(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  float temp_v0 [4];
  
  FUN_002ad6d8(temp_v0,param_2,param_1);
  FUN_002ad6d8(temp_v0,param_3 + 0x148);
  return;
}
