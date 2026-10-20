/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f7c0` (_code @ 0x47f7c0, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_001628c0(...);
int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(...);

extern unsigned int DAT_00573cd8; /* 0x573cd8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0014af98(void);
/* Supplied declaration required: FUN_001628c0. */


void FUN_0047f7c0(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  float temp_v2;
  float temp_v3;
  unsigned char temp_v4 [20];
  
  if (param_1 < 2) {
    temp_v0 = (&DAT_00573cd8)[param_1];
    if (temp_v0 != 0) {
      temp_v3 = 1.0f;
      if ((temp_v0 & 0xfffff) >> 8 != 0 && temp_v0 >> 0x14 != 0) {
        FUN_00100388(temp_v4,"I%03u%03u");
        if ((temp_v0 & 0xff) >> 4 != 0) {
          FUN_00100388(temp_v4,"%s%s");
        }
        temp_v1 = FUN_0014af98();
        temp_v2 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v0 = VectorFloatToUnsigned(temp_v2 * temp_v3,3);
        FUN_001628c0(temp_v4,temp_v0 & 0xff,2,0);
      }
      (&DAT_00573cd8)[param_1] = 0;
    }
    return;
  }
  return;
}

} /* extern "C" */
