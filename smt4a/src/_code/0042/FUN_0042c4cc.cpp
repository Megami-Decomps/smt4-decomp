/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042c4cc` (_code @ 0x42c4cc, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(unsigned char *, unsigned char *, int, int);

extern unsigned char LAB_0042c464; /* 0x42c464 */

/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_0042c4cc(unsigned char *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1 = param_1 + 4;
  __aeabi_vec_ctor_nocookie_nodtor(param_1,&LAB_0042c464,0x2c,8);
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 1;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 1;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  temp_v1 = 8;
  param_1[0x1aa] = 0;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v1 - 1;
    param_1[temp_v0 + 0x160] = 0;
    param_1[temp_v0 + 0x168] = 0;
    param_1[temp_v0 + 0x170] = 0;
    param_1[temp_v0 + 0x178] = 0;
    param_1[temp_v0 * 0x2c] = (char)temp_v0;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  return;
}

} /* extern "C" */
