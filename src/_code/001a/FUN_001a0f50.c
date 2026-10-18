/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0f50` (_code @ 0x1a0f50, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b74c4. */
/* Supplied declaration required: FUN_002b7510. */
extern int FUN_002b756c(unsigned int);
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c0110. */


unsigned int FUN_001a0f50(int *param_1)

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
        temp_v0 = FUN_002bf41c(*(unsigned int *)(temp_v3 + 4));
        if ((temp_v0 != 0) && (temp_v0 = FUN_002b756c(*(unsigned int *)(temp_v3 + 4)), temp_v0 != 4)) {
          FUN_002b7510(*(unsigned int *)(temp_v3 + 4),1);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(int *)(temp_v2 + 0x2c));
    }
    temp_v1 = 0;
    do {
      temp_v3 = temp_v2 + temp_v1 * 4;
      temp_v0 = FUN_002bf41c(*(unsigned int *)(temp_v3 + 0x34));
      if (temp_v0 != 0) {
        FUN_002b74c4(*(unsigned int *)(temp_v3 + 0x34),1);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 10);
  }
  FUN_002c0110(2);
  return 1;
}
