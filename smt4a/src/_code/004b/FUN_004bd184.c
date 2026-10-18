/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd184` (_code @ 0x4bd184, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_001aba54. */


void FUN_004bd184(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0x62);
  if ((temp_v1 != 0) && (FUN_00184310(), temp_v1 != 0)) {
    temp_v3 = 0;
    do {
      temp_v1 = (unsigned int)*(unsigned short *)(param_1 + temp_v3 * 2 + 0x34);
      if (((temp_v1 != 0) && (FUN_001aba54(), temp_v1 != 0)) && (*(unsigned short *)(temp_v1 + 0x26) < 0x12)) {
        temp_v2 = param_1 + temp_v3;
        temp_v0 = *(char *)((unsigned int)*(unsigned short *)(temp_v1 + 0x26) + param_1 + 0x4c) +
                *(char *)(temp_v2 + 0x44);
        *(char *)(temp_v2 + 0x44) = temp_v0;
        if (temp_v0 >= '\n') {
          *(unsigned char *)(temp_v2 + 0x44) = 9;
        }
        else if (temp_v0 < -9) {
          *(unsigned char *)(temp_v2 + 0x44) = 0xf7;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 8);
  }
  return;
}
