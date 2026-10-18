/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00518944` (_code @ 0x518944, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00518944_arg0 fn_00518944_arg0;
struct fn_00518944_arg0 {
    unsigned char pad_0x0[0x2];
    ushort field_0x2; /* +0x2 */
    unsigned char pad_0x4[0xc];
    float field_0x10; /* +0x10 */
    float field_0x14; /* +0x14 */
};

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0051b830. */


unsigned int FUN_00518944(fn_00518944_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  
  FUN_0051b830();
  VectorUnsignedToFloat((unsigned int)param_1->field_0x2,(unsigned char)(in_fpscr >> 0x16) & 3);
  return (unsigned int)param_1->field_0x2;
}
