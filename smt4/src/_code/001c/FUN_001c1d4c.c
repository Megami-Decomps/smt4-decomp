/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c1d4c` (_code @ 0x1c1d4c, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001c1d4c_arg0 fn_001c1d4c_arg0;
struct fn_001c1d4c_arg0 {
    unsigned char pad_0x0[0x18];
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0xa0];
    int field_0xbc; /* +0xbc */
    unsigned char pad_0xc0[0x2c];
    int field_0xec; /* +0xec */
};

/* Supplied declaration required: FUN_00297488. */


unsigned int FUN_001c1d4c(fn_001c1d4c_arg0 *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  FUN_00297488();
  *(unsigned int *)
   (param_1->field_0xec + (unsigned int)*(unsigned short *)(param_1->field_0xbc + param_1->field_0x18 * 4 + 2) * 4)
       = in_s0;
  param_1->field_0x18 = param_1->field_0x18 + 1;
  return 1;
}
