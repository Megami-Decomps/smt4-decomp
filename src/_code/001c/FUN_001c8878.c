/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c8878` (_code @ 0x1c8878, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00296cbc(int);
extern unsigned int FUN_002bef70(int);
/* Supplied declaration required: FUN_002bef7c. */
/* Supplied declaration required: FUN_003b4bc0. */
/* Supplied declaration required: FUN_003b6150. */
/* Supplied declaration required: FUN_003b6c7c. */
/* Supplied declaration required: FUN_003b72a4. */


unsigned int FUN_001c8878(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = *param_1;
  if ((temp_v3 != 0) && (temp_v0 = FUN_00296cbc(temp_v3), temp_v0 != 0)) {
    if (*(int *)(temp_v3 + 0x352c) < 8) {
      FUN_003b6150(temp_v3,0);
    }
    temp_v0 = *(int *)(temp_v3 + 0x352c);
    if (temp_v0 != 10) {
      if (temp_v0 != 0x11) {
        if (temp_v0 == 0x12) {
          temp_v1 = FUN_002bef7c();
          temp_v2 = FUN_002bef70(temp_v3 + 0x598);
          FUN_003b6c7c(temp_v3,temp_v1,temp_v2);
        }
      }
      else {
        temp_v1 = FUN_002bef7c(temp_v3 + 0xac);
        temp_v2 = FUN_002bef70(temp_v3 + 0xac);
        FUN_003b4bc0(temp_v3,temp_v1,temp_v2);
      }
    }
    else {
      temp_v1 = FUN_002bef7c();
      temp_v2 = FUN_002bef70(temp_v3 + 0x50c);
      FUN_003b72a4(temp_v3,temp_v1,temp_v2);
    }
  }
  return 0;
}
