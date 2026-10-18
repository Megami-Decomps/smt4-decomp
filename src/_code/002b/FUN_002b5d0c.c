/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5d0c` (_code @ 0x2b5d0c, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002b5d0c_arg0 fn_002b5d0c_arg0;
struct fn_002b5d0c_arg0 {
    unsigned char pad_0x0[0x14];
    uint field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x8];
    void *field_0x24; /* +0x24 */
    unsigned char pad_0x28[0x4];
    int field_0x2c; /* +0x2c */
};

/* Supplied declaration required: FUN_00139f54. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


unsigned int * FUN_002b5d0c(fn_002b5d0c_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  FUN_002c3aa8();
  puVar1 = param_1->field_0x24;
  if (puVar1 != (unsigned int *)0x0) {
    param_1->field_0x24 = (void *)*puVar1;
    param_1->field_0x2c = param_1->field_0x2c + 1;
    if ((param_1->field_0x14 & 1) != 0) {
      FUN_00139f54(puVar1,param_1->field_0x18 + (int)puVar1,0);
    }
  }
  FUN_002c3a24(param_1 + 1);
  return puVar1;
}
