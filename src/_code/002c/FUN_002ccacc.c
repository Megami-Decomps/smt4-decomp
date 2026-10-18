/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ccacc` (_code @ 0x2ccacc, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002ccacc_arg0 fn_002ccacc_arg0;
struct fn_002ccacc_arg0 {
    unsigned char pad_0x0[0xd04];
    undefined4 field_0xd04; /* +0xd04 */
    unsigned char pad_0xd08[0x24];
    undefined4 field_0xd2c; /* +0xd2c */
    unsigned char pad_0xd30[0x8];
    undefined4 field_0xd38; /* +0xd38 */
    unsigned char pad_0xd3c[0x1c];
    uint field_0xd58; /* +0xd58 */
};

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_0026e8a0. */
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_002b91c4. */


/* WARNING: Removing unreachable block (ram,0x002ccb18) */

unsigned int FUN_002ccacc(fn_002ccacc_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = FUN_0019dfbc(param_1->field_0xd04);
  if (temp_v0 == 2) {
    param_1->field_0xd38 = 0;
    FUN_0026e8a0(0x28);
    FUN_002899c4(0x551,1);
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
    FUN_002b91c4(0x100017e);
    temp_v2 = 2;
  }
  return temp_v2;
}
