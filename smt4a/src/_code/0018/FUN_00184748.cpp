/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184748` (_code @ 0x184748, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00184748_arg0 fn_00184748_arg0;
struct fn_00184748_arg0 {
    unsigned char pad_0x0[0x2e8];
    int field_0x2e8; /* +0x2e8 */
    int field_0x2ec; /* +0x2ec */
    unsigned char pad_0x2f0[0x38];
    int field_0x328; /* +0x328 */
    undefined2 field_0x32c; /* +0x32c */
    undefined2 field_0x32e; /* +0x32e */
    undefined1 field_0x330; /* +0x330 */
    unsigned char pad_0x331[0x31];
    undefined1 field_0x362; /* +0x362 */
    unsigned char pad_0x363[0x3];
    undefined1 field_0x366; /* +0x366 */
};


/* WARNING: Removing unreachable block (ram,0x0018478c) */

void FUN_00184748(fn_00184748_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1->field_0x328;
  if (temp_v0 == 0) {
    return;
  }
  param_1->field_0x32c = 3;
  param_1->field_0x32e = 0;
  param_1->field_0x362 = 0;
  param_1->field_0x366 = 0;
  param_1->field_0x330 = 0;
  param_1->field_0x2e8 = (int)*(short *)(temp_v0 + 0x24) << 0xc;
  param_1->field_0x2ec = (int)*(short *)(temp_v0 + 0x26) << 0xc;
  return;
}

} /* extern "C" */
