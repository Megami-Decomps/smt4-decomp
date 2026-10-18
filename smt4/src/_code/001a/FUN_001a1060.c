/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1060` (_code @ 0x1a1060, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b7184. */
/* Supplied declaration required: FUN_002b71d0. */
extern int FUN_002b722c(unsigned int);
extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002bff38. */


unsigned int FUN_001a1060(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = *param_1;
  if (temp_v2 != 0) {
    temp_v1 = 0;
    if (temp_v1 < *(int *)(temp_v2 + 0x2c)) {
      do {
        temp_v3 = temp_v2 + temp_v1 * 4;
        temp_v0 = FUN_002bf244(*(unsigned int *)(temp_v3 + 4));
        if ((temp_v0 != 0) && (temp_v0 = FUN_002b722c(*(unsigned int *)(temp_v3 + 4)), temp_v0 != 4)) {
          FUN_002b71d0(*(unsigned int *)(temp_v3 + 4),1);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(int *)(temp_v2 + 0x2c));
    }
    temp_v1 = 0;
    do {
      temp_v3 = temp_v2 + temp_v1 * 4;
      temp_v0 = FUN_002bf244(*(unsigned int *)(temp_v3 + 0x34));
      if (temp_v0 != 0) {
        FUN_002b7184(*(unsigned int *)(temp_v3 + 0x34),1);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 10);
  }
  FUN_002bff38(2);
  return 1;
}
