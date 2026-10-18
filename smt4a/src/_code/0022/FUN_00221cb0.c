/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221cb0` (_code @ 0x221cb0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


unsigned int FUN_00221cb0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = VectorFloatToUnsigned(DAT_006472dc * 255.0f,3);
  temp_v2 = VectorFloatToUnsigned(DAT_006472e0 * 255.0f,3);
  temp_v3 = VectorFloatToUnsigned(DAT_006472e4 * 255.0f,3);
  temp_v1 = VectorFloatToUnsigned(DAT_006472e8 * 255.0f,3);
  return (temp_v0 << 0x18) | ((temp_v2 & 0xff) << 0x10) | ((temp_v3 & 0xff) << 8) | (temp_v1 & 0xff);
}
