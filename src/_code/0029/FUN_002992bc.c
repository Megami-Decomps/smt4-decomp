/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002992bc` (_code @ 0x2992bc, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002992bc_arg0 fn_002992bc_arg0;
struct fn_002992bc_arg0 {
    unsigned char pad_0x0[0x48];
    int field_0x48; /* +0x48 */
    unsigned char pad_0x4c[0x15];
    undefined1 field_0x61; /* +0x61 */
    byte field_0x62; /* +0x62 */
};


void FUN_002992bc(fn_002992bc_arg0 *param_1,int param_2)

{
  if (param_1->field_0x62 == 0) {
    if (param_1->field_0x48 != param_2) {
      param_1->field_0x61 = 1;
    }
    param_1->field_0x48 = param_2;
  }
  return;
}
