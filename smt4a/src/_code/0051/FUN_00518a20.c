/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00518a20` (_code @ 0x518a20, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00518a20_arg0 fn_00518a20_arg0;
struct fn_00518a20_arg0 {
    unsigned char pad_0x0[0x1];
    byte field_0x1; /* +0x1 */
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0xd];
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
};

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0051c338. */


int FUN_00518a20(fn_00518a20_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  
  FUN_0051c338();
  temp_v0 = (unsigned int)param_1->field_0x1 + (unsigned int)param_1->field_0x2 * 0x100;
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return temp_v0;
}
