/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec514` (_code @ 0x2ec514, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024eaac(...);

typedef struct fn_002ec514_arg0 fn_002ec514_arg0;
struct fn_002ec514_arg0 {
    unsigned char pad_0x0[0x108];
    int field_0x108; /* +0x108 */
    unsigned char pad_0x10c[0x4];
    undefined4 field_0x110; /* +0x110 */
    int field_0x114; /* +0x114 */
    unsigned char pad_0x118[0x8];
    unsigned char field_0x120; /* +0x120 */
    unsigned char pad_0x121[0x7];
    undefined1 field_0x128; /* +0x128 */
};

/* Supplied declaration required: FUN_0024eaac. */


unsigned int FUN_002ec514(fn_002ec514_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  fn_002ec514_arg0 *pfVar1;
  unsigned char temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = param_1->field_0x114 == 2 || param_1->field_0x114 == 4;
  if ((param_1->field_0x108 == 2) && (*(short *)&param_1->field_0x120 == 0)) {
    temp_v0 = 0;
  }
  pfVar1 = param_1;
  FUN_0024eaac(param_1,temp_v0);
  if (pfVar1 != (fn_002ec514_arg0 *)0x0) {
    if (temp_v0 == 0) {
      param_1->field_0x128 = 0;
    }
    temp_v1 = 2;
    param_1->field_0x110 = param_1->field_0x114;
  }
  return temp_v1;
}

} /* extern "C" */
