/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028836c` (_code @ 0x28836c, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a43ae(int);
int FUN_003f6d64(double);

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_002a43ae. */
/* Supplied declaration required: FUN_003f6d64. */


void FUN_0028836c(void)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  float in_s0;
  
  if ((int)in_s0 * 2 + 0x9a000000U < 0x19000001) {
    if ((unsigned int)((int)in_s0 << 1) >= 0x7e000001) {
      FUN_003f6d64((1.0f - romwright_fabs_4(in_s0)) * 0.5f);
    }
    return;
  }
  if ((unsigned int)((int)in_s0 * 2) < 0x66000000) {
    return;
  }
  if (0xff000000 < (unsigned int)((int)in_s0 << 1)) {
    return;
  }
  FUN_002a43ae(1);
  return;
}

} /* extern "C" */
