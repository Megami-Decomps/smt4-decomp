/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ebd24` (_code @ 0x1ebd24, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001ebd24_arg0 fn_001ebd24_arg0;
struct fn_001ebd24_arg0 {
    unsigned char pad_0x0[0xd04];
    undefined4 field_0xd04; /* +0xd04 */
    unsigned char pad_0xd08[0x20];
    int field_0xd28; /* +0xd28 */
    undefined4 field_0xd2c; /* +0xd2c */
    unsigned char pad_0xd30[0x4];
    undefined4 field_0xd34; /* +0xd34 */
    int field_0xd38; /* +0xd38 */
    unsigned char pad_0xd3c[0x24];
    byte field_0xd60; /* +0xd60 */
};

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_0026bc28. */
/* Supplied declaration required: FUN_0028a5d0. */
/* Supplied declaration required: FUN_0028ab8c. */
/* Supplied declaration required: FUN_002971e4. */


unsigned int FUN_001ebd24(fn_001ebd24_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (param_1->field_0xd38 != 0) {
    if ((param_1->field_0xd38 == 1) && (temp_v0 = FUN_0019dfbc(param_1->field_0xd04), temp_v0 == 2)) {
      param_1->field_0xd34 = 0;
      param_1->field_0xd2c = 6;
      param_1->field_0xd38 = 0;
      FUN_0026bc28();
      FUN_0028ab8c(1,0,0xffffffff);
      FUN_0028a5d0(1);
      temp_v1 = 2;
    }
  }
  else {
    if (param_1->field_0xd28 != 10) {
      FUN_002971e4(param_1->field_0xd04);
    }
    else {
      FUN_002971e4(param_1->field_0xd04,0x10);
    }
    param_1->field_0xd38 = param_1->field_0xd38 + 1;
  }
  return temp_v1;
}
