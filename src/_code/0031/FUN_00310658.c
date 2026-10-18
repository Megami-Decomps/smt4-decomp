/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310658` (_code @ 0x310658, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00310658_arg0 fn_00310658_arg0;
struct fn_00310658_arg0 {
    unsigned char pad_0x0[0xd04];
    undefined4 field_0xd04; /* +0xd04 */
    unsigned char pad_0xd08[0x24];
    undefined4 field_0xd2c; /* +0xd2c */
    unsigned char pad_0xd30[0x8];
    int field_0xd38; /* +0xd38 */
};

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002b8b78. */


unsigned int FUN_00310658(fn_00310658_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (param_1->field_0xd38 != 0) {
    if ((param_1->field_0xd38 == 1) && (temp_v0 = FUN_0019dfbc(param_1->field_0xd04), temp_v0 == 2)) {
      param_1->field_0xd2c = 6;
      temp_v1 = 2;
      param_1->field_0xd38 = 0;
    }
  }
  else {
    FUN_002971e4(param_1->field_0xd04,0x1b);
    FUN_002b8b78(0x3c);
    param_1->field_0xd38 = param_1->field_0xd38 + 1;
  }
  return temp_v1;
}
