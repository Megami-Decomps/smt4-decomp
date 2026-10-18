/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bcbb4` (_code @ 0x4bcbb4, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00186f58. */
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_0034a304. */
extern int FUN_003e46f4(unsigned int);


void FUN_004bcbb4(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = param_2;
  FUN_001aba54();
  if (temp_v0 != 0) {
    temp_v1 = FUN_003e46f4(0xc);
    if (temp_v1 != 0) {
      FUN_00186f58();
    }
    temp_v1 = FUN_003e46f4(0xd);
    if (temp_v1 != 0) {
      FUN_00186f58();
    }
    temp_v1 = FUN_003e46f4(0xe);
    if (temp_v1 != 0) {
      FUN_00186f58();
    }
    temp_v1 = FUN_003e46f4(0xf);
    if (temp_v1 != 0) {
      FUN_00186f58();
    }
    temp_v1 = 0;
    if (param_1 != 0) {
      temp_v2 = 0;
      do {
        if (*(unsigned short *)(param_1 + temp_v2 * 2 + 0x34) == param_2) {
          temp_v1 = (int)*(char *)(temp_v2 + param_1 + 0x44);
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 8);
    }
    FUN_0034a304(temp_v0,temp_v1,4);
    FUN_0034a304(temp_v0,temp_v1,7);
  }
  return;
}
