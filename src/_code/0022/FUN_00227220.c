/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227220` (_code @ 0x227220, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00227220_arg0 fn_00227220_arg0;
struct fn_00227220_arg0 {
    unsigned char pad_0x0[0x3028];
    uint field_0x3028; /* +0x3028 */
    unsigned char pad_0x302c[0xe];
    undefined2 field_0x303a; /* +0x303a */
    undefined2 field_0x303c; /* +0x303c */
    undefined2 field_0x303e; /* +0x303e */
    undefined1 field_0x3040; /* +0x3040 */
    undefined1 field_0x3041; /* +0x3041 */
    undefined2 field_0x3042; /* +0x3042 */
    undefined2 field_0x3044; /* +0x3044 */
    undefined2 field_0x3046; /* +0x3046 */
    unsigned char pad_0x3048[0x4];
    void *field_0x304c; /* +0x304c */
    undefined4 field_0x3050; /* +0x3050 */
    undefined4 field_0x3054; /* +0x3054 */
    int field_0x3058; /* +0x3058 */
    int field_0x305c; /* +0x305c */
    undefined4 field_0x3060; /* +0x3060 */
    undefined4 field_0x3064; /* +0x3064 */
    undefined4 field_0x3068; /* +0x3068 */
    undefined4 field_0x306c; /* +0x306c */
};

typedef int romwright_code();
/* Supplied declaration required: FUN_0024df10. */


void FUN_00227220(fn_00227220_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  param_1->field_0x303a = 0;
  param_1->field_0x303c = 0;
  param_1->field_0x303e = 0;
  param_1->field_0x3040 = 0;
  param_1->field_0x3041 = 0;
  param_1->field_0x3046 = 0;
  param_1->field_0x3042 = 0;
  param_1->field_0x3044 = 0;
  param_1->field_0x3050 = 0;
  param_1->field_0x3054 = 0;
  param_1->field_0x3064 = 0;
  param_1->field_0x3060 = 0;
  param_1->field_0x306c = 0;
  param_1->field_0x3068 = 0;
  param_1->field_0x3028 = param_1->field_0x3028 & 0xffff8fff;
  if (param_1->field_0x304c != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1->field_0x304c + 4))();
    param_1->field_0x304c = (void *)0x0;
  }
  if (param_1->field_0x3058 != 0) {
    FUN_0024df10();
    param_1->field_0x3058 = 0;
  }
  if (param_1->field_0x305c != 0) {
    FUN_0024df10();
    param_1->field_0x305c = 0;
  }
  return;
}
