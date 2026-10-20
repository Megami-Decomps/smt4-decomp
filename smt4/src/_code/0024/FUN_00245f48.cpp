/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245f48` (_code @ 0x245f48, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a438c(void);
int __set_errno(int);
int FUN_003f6d64(double);

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
extern int ARM_fpclassifyf(void);
/* Supplied declaration required: FUN_002a438c. */
/* Supplied declaration required: __set_errno. */
/* Supplied declaration required: FUN_003f6d64. */


void FUN_00245f48(void)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  int temp_v0;
  float in_s0;
  
  if ((int)in_s0 * 2 + 0x8e000000U < 0xd000001) {
    if ((unsigned int)((int)in_s0 << 1) >= 0x7e000001) {
      FUN_003f6d64((1.0f - romwright_fabs_4(in_s0)) * 0.5f);
    }
    return;
  }
  if ((unsigned int)((int)in_s0 * 2) < 0x72000000) {
    temp_v0 = ARM_fpclassifyf();
    if (temp_v0 == 4) {
      FUN_002a438c();
    }
    return;
  }
  if (0xff000000 < (unsigned int)((int)in_s0 << 1)) {
    return;
  }
  __set_errno(1);
  return;
}

} /* extern "C" */
