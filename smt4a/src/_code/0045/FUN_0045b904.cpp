/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045b904` (_code @ 0x45b904, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int UnsignedDoesSaturate(int, int);
int UnsignedSaturate(int, int);

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */


unsigned int FUN_0045b904(int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_1[0xc] != 0) {
    if (*param_1 < param_1[0xc]) {
      return 1;
    }
    temp_v1 = param_1[4];
    if (temp_v1 != 0x108) {
      temp_v1 = (unsigned int)*(unsigned char *)(temp_v1 - 0x6b) + *(int *)(temp_v1 - 0xb8);
      if ((char)param_1[0x16] != '\0') {
        temp_v0 = UnsignedSaturate(temp_v1,7);
        UnsignedDoesSaturate(temp_v1,7);
        if (temp_v0 < param_2) {
          return 1;
        }
      }
      else {
        temp_v0 = UnsignedSaturate(temp_v1,7);
        UnsignedDoesSaturate(temp_v1,7);
        if (temp_v0 <= param_2) {
          return 1;
        }
      }
    }
  }
  return 0;
}

} /* extern "C" */
