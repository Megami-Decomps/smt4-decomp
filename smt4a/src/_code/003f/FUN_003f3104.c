/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f3104` (_code @ 0x3f3104, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_003e46f4(unsigned int);
/* Supplied declaration required: FUN_003f2f58. */


unsigned short FUN_003f3104(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x62);
  FUN_00184310();
  temp_v0 = (*(unsigned int *)(temp_v0 + 0x34) & 0x1fffff) >> 0xe;
  FUN_003f2f58();
  temp_v1 = FUN_0014bef4(0xb);
  temp_v2 = FUN_0014bef4(0xd);
  temp_v3 = FUN_003e46f4(6);
  if (temp_v3 != 0) {
    if (temp_v2 >= 2) {
      return *(unsigned short *)(temp_v0 + temp_v1 * 2 + 2);
    }
  }
  else if (0 < temp_v2) {
    return *(unsigned short *)(temp_v0 + temp_v1 * 2 + 2);
  }
  temp_v1 = temp_v1 + 0xc;
  return *(unsigned short *)(temp_v0 + temp_v1 * 2 + 2);
}
