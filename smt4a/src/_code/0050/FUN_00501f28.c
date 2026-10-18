/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00501f28` (_code @ 0x501f28, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00501f28_arg0 fn_00501f28_arg0;
typedef struct fn_00501f28_arg1 fn_00501f28_arg1;
struct fn_00501f28_arg0 {
    unsigned char pad_0x0[0x1];
    undefined1 field_0x1; /* +0x1 */
    undefined1 field_0x2; /* +0x2 */
    unsigned char pad_0x3[0xc];
    undefined1 field_0xf; /* +0xf */
    undefined1 field_0x10; /* +0x10 */
    undefined1 field_0x11; /* +0x11 */
};
struct fn_00501f28_arg1 {
    unsigned char pad_0x0[0x1];
    byte field_0x1; /* +0x1 */
    byte field_0x2; /* +0x2 */
    unsigned char pad_0x3[0xc];
    byte field_0xf; /* +0xf */
    byte field_0x10; /* +0x10 */
    byte field_0x11; /* +0x11 */
};

/* Supplied declaration required: rt_memcpy. */


void FUN_00501f28(fn_00501f28_arg0 *param_1,fn_00501f28_arg1 *param_2)

{
/* irregular: 1 native warning(s); review required */
  rt_memcpy(param_2,param_1,0x70);
  return;
}
