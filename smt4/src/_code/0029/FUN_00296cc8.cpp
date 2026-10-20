/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296cc8` (_code @ 0x296cc8, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044deb8; /* 0x44deb8 */


int FUN_00296cc8(int param_1)

{
  int temp_v0;
  
  temp_v0 = (*(int *)(DAT_0044deb8 + 0x1c) - param_1) - 1;
  switch(*(unsigned char *)(DAT_0044deb8 + temp_v0 + 0x20)) {
  case 0:
  case 4:
    return *(int *)(DAT_0044deb8 + temp_v0 * 4 + 0x3c);
  case 1:
    return (int)*(float *)(DAT_0044deb8 + temp_v0 * 4 + 0x3c);
  case 2:
    return *(int *)(*(int *)(DAT_0044deb8 + temp_v0 * 4 + 0x3c) * 4 + 0x4c4744);
  case 3:
    return (int)*(float *)(*(int *)(DAT_0044deb8 + temp_v0 * 4 + 0x3c) * 4 + 0x4c4d44);
  default:
    return 0;
  }
}

} /* extern "C" */
