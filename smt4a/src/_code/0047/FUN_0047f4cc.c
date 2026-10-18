/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f4cc` (_code @ 0x47f4cc, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0014af98(void);
/* Supplied declaration required: FUN_001628c0. */


void FUN_0047f4cc(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  
  if ((param_1 & 0xfffff) >> 8 != 0 && param_1 >> 0x14 != 0) {
    FUN_00100388(temp_v3,"I%03u%03u");
    if ((param_1 & 0xff) >> 4 != 0) {
      FUN_00100388(temp_v3,"%s%s");
    }
    temp_v0 = FUN_0014af98();
    temp_v1 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = VectorFloatToUnsigned(temp_v1 * in_s0,3);
    FUN_001628c0(temp_v3,temp_v2 & 0xff,2,0);
  }
  return;
}
