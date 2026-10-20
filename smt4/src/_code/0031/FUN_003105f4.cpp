/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003105f4` (_code @ 0x3105f4, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00296f4c(undefined4, int);
int FUN_002b8838(int);

typedef struct fn_003105f4_arg0 fn_003105f4_arg0;
struct fn_003105f4_arg0 {
    unsigned char pad_0x0[0xd04];
    undefined4 field_0xd04; /* +0xd04 */
    unsigned char pad_0xd08[0x24];
    undefined4 field_0xd2c; /* +0xd2c */
    unsigned char pad_0xd30[0x8];
    int field_0xd38; /* +0xd38 */
};

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_002b8838. */


unsigned int FUN_003105f4(fn_003105f4_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (param_1->field_0xd38 != 0) {
    if ((param_1->field_0xd38 == 1) && (temp_v0 = FUN_0019e0c0(param_1->field_0xd04), temp_v0 == 2)) {
      param_1->field_0xd2c = 6;
      temp_v1 = 2;
      param_1->field_0xd38 = 0;
    }
  }
  else {
    FUN_00296f4c(param_1->field_0xd04,0x1b);
    FUN_002b8838(0x3c);
    param_1->field_0xd38 = param_1->field_0xd38 + 1;
  }
  return temp_v1;
}

} /* extern "C" */
