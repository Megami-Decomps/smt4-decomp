/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00266d70` (_code @ 0x266d70, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044deb8; /* 0x44deb8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


int FUN_00266d70(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_fpscr;
  
  temp_v0 = (*(int *)(DAT_0044deb8 + 0x1c) - param_1) - 1;
  switch(*(unsigned char *)(DAT_0044deb8 + temp_v0 + 0x20)) {
  case 0:
  case 4:
    temp_v1 = DAT_0044deb8 + temp_v0 * 4;
    temp_v0 = *(int *)(temp_v1 + 0x3c);
    break;
  case 1:
    return DAT_0044deb8 + temp_v0 * 4;
  case 2:
    temp_v1 = *(int *)(*(int *)(DAT_0044deb8 + temp_v0 * 4 + 0x3c) * 4 + 0x4c4744);
    temp_v0 = temp_v1;
    break;
  case 3:
    return *(int *)(DAT_0044deb8 + temp_v0 * 4 + 0x3c) * 4 + 0x4c4d44;
  default:
    return temp_v0;
  }
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return temp_v1;
}
