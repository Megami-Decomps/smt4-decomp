/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdf00` (_code @ 0x2fdf00, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002c54f0. */


void FUN_002fdf00(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if (0 < param_3) {
    temp_v0 = 0x100;
    FUN_002c54f0(0x100,0x100,0,param_3 * 0x348,1);
    *(unsigned int *)(param_1 * 0x148 + 0x478024) = temp_v0;
    FUN_002bcf58();
  }
  *(int *)(param_1 * 0x148 + 0x478020) = param_3;
  return;
}
