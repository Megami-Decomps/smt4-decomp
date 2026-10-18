/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00150918` (_code @ 0x150918, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00150918_arg0 fn_00150918_arg0;
struct fn_00150918_arg0 {
    unsigned char pad_0x0[0x12];
    byte field_0x12; /* +0x12 */
    unsigned char field_0x13; /* +0x13 */
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0xb];
    void *field_0x20; /* +0x20 */
    void *field_0x24; /* +0x24 */
};

typedef int romwright_code();
/* Supplied declaration required: FUN_0015459c. */
/* Supplied declaration required: FUN_002a4bac. */


void FUN_00150918(fn_00150918_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  void *pvVar1;
  
  if (param_1->field_0x12 != 0) {
    FUN_0015459c();
    param_1->field_0x12 = 0;
  }
  pvVar1 = param_1->field_0x24;
  if (pvVar1 != param_1->field_0x20) {
    if (((pvVar1 == (void *)0x0) || ((~*(unsigned int *)(*(int *)((int)pvVar1 + 8) + 0x18) & 0x20) != 0)) ||
       ((~*(unsigned int *)(*(int *)((int)param_1->field_0x20 + 8) + 0x18) & 0x20) != 0)) {
      FUN_002a4bac(param_1,0);
    }
    else {
      param_1->field_0x13 = 0;
      if ((~*(unsigned int *)&param_1->field_0x14 & 1) != 0) {
        (**(romwright_code **)(**(int **)&param_1[7].field_0x14 + 0xc))();
      }
    }
    param_1->field_0x24 = param_1->field_0x20;
  }
  return;
}
