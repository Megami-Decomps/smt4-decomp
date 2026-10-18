/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137b38` (_code @ 0x137b38, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e330; /* 0x44e330 */

/* Supplied declaration required: FUN_002c4b30. */


int FUN_00137b38(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  if (DAT_0044e330 == (romwright_code *)0x0) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = (*DAT_0044e330)(0x10000,0x100,0,0x348);
    if (temp_v3 != 0) {
      FUN_002c4b30(temp_v3,0x348);
      temp_v2 = 0;
      do {
        temp_v1 = temp_v3 + temp_v2 * 0x10;
        temp_v4 = temp_v3 + temp_v2 * 0x18;
        temp_v0 = temp_v2 + 1;
        *(unsigned int *)(temp_v4 + 4) = 4;
        *(unsigned int *)(temp_v4 + 8) = 0x1406;
        *(unsigned int *)(temp_v1 + 400) = 0;
        *(unsigned int *)(temp_v1 + 0x18c) = 0;
        *(unsigned int *)(temp_v1 + 0x188) = 0;
        *(unsigned int *)(temp_v1 + 0x194) = 0x3f800000;
        temp_v2 = temp_v3 + temp_v2 * 0xc;
        *(unsigned int *)(temp_v2 + 0x28c) = 0;
        *(unsigned int *)(temp_v2 + 0x288) = 0x3f000000;
        *(unsigned int *)(temp_v2 + 0x290) = 0;
        temp_v2 = temp_v0;
      } while (temp_v0 < 0x10);
    }
  }
  return temp_v3;
}
