/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246c28` (_code @ 0x246c28, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(double, int);

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


unsigned int FUN_00246c28(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = VectorFloatToUnsigned(DAT_004ea91c * 255.0f,3);
  temp_v2 = VectorFloatToUnsigned(DAT_004ea920 * 255.0f,3);
  temp_v3 = VectorFloatToUnsigned(DAT_004ea924 * 255.0f,3);
  temp_v1 = VectorFloatToUnsigned(DAT_004ea928 * 255.0f,3);
  return (temp_v0 << 0x18) | ((temp_v2 & 0xff) << 0x10) | ((temp_v3 & 0xff) << 8) | (temp_v1 & 0xff);
}

} /* extern "C" */
