/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c1c8c` (_code @ 0x1c1c8c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001c1c8c_arg0 fn_001c1c8c_arg0;
struct fn_001c1c8c_arg0 {
    unsigned char pad_0x0[0x18];
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0xa0];
    int field_0xbc; /* +0xbc */
    unsigned char pad_0xc0[0x28];
    int field_0xe8; /* +0xe8 */
};

extern unsigned int FUN_002977b0(void);


unsigned int FUN_001c1c8c(fn_001c1c8c_arg0 *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = FUN_002977b0();
  *(unsigned int *)
   (param_1->field_0xe8 + (unsigned int)*(unsigned short *)(param_1->field_0xbc + param_1->field_0x18 * 4 + 2) * 4)
       = temp_v0;
  param_1->field_0x18 = param_1->field_0x18 + 1;
  return 1;
}
