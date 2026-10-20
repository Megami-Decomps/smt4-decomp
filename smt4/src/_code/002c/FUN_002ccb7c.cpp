/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ccb7c` (_code @ 0x2ccb7c, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026e630(int);
int FUN_0028975c(int, int);
int FUN_002b8e84(int);

typedef struct fn_002ccb7c_arg0 fn_002ccb7c_arg0;
struct fn_002ccb7c_arg0 {
    unsigned char pad_0x0[0xd04];
    undefined4 field_0xd04; /* +0xd04 */
    unsigned char pad_0xd08[0x24];
    undefined4 field_0xd2c; /* +0xd2c */
    unsigned char pad_0xd30[0x8];
    undefined4 field_0xd38; /* +0xd38 */
    unsigned char pad_0xd3c[0x1c];
    uint field_0xd58; /* +0xd58 */
};

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_0026e630. */
/* Supplied declaration required: FUN_0028975c. */
/* Supplied declaration required: FUN_002b8e84. */


/* WARNING: Removing unreachable block (ram,0x002ccbc8) */

unsigned int FUN_002ccb7c(fn_002ccb7c_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = FUN_0019e0c0(param_1->field_0xd04);
  if (temp_v0 == 2) {
    param_1->field_0xd38 = 0;
    FUN_0026e630(0x28);
    FUN_0028975c(0x551,1);
    temp_v1 = param_1->field_0xd58;
    temp_v2 = 6;
    param_1->field_0xd58 = temp_v1 & 0xfffffff7;
    if ((temp_v1 & 1) != 0) {
      temp_v2 = 3;
    }
    else if ((temp_v1 & 4) != 0) {
      temp_v2 = 4;
    }
    else if ((temp_v1 & 2) != 0) {
      temp_v2 = 5;
    }
    param_1->field_0xd2c = temp_v2;
    FUN_002b8e84(0x100017e);
    temp_v2 = 2;
  }
  return temp_v2;
}

} /* extern "C" */
