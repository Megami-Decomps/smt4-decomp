/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023cd20` (_code @ 0x23cd20, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0023cd20_arg0 fn_0023cd20_arg0;
struct fn_0023cd20_arg0 {
    unsigned char pad_0x0[0x5dc];
    unsigned char field_0x5dc; /* +0x5dc */
    unsigned char pad_0x5dd[0x57];
    uint field_0x634; /* +0x634 */
    unsigned char pad_0x638[0x60];
    undefined4 field_0x698; /* +0x698 */
    unsigned char field_0x69c; /* +0x69c */
    unsigned char pad_0x69d[0x3];
    undefined4 field_0x6a0; /* +0x6a0 */
};


void FUN_0023cd20(fn_0023cd20_arg0 *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  *(unsigned int *)&param_1->field_0x5dc = in_s0;
  *(unsigned int *)&param_1->field_0x69c = param_2;
  *(unsigned int *)(param_1 + 1) = param_3;
  param_1->field_0x698 = 0;
  param_1->field_0x6a0 = 0;
  param_1->field_0x634 = param_1->field_0x634 | 0x200;
  return;
}
