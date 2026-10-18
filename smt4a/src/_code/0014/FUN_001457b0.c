/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001457b0` (_code @ 0x1457b0, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f58c; /* 0x57f58c */
extern signed char DAT_005e204d; /* 0x5e204d */

/* Supplied declaration required: FUN_001517b4. */


unsigned int FUN_001457b0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  FUN_001517b4(0,1);
  if (temp_v0 == 0) {
    temp_v0 = 9;
    FUN_001517b4(9,2);
    if (temp_v0 == 0) {
      temp_v0 = 6;
      FUN_001517b4(6,2);
      if (temp_v0 == 0) {
        temp_v0 = 10;
        FUN_001517b4(10,2);
        if ((temp_v0 == 0) && (DAT_005e204d == '\0')) {
          if ((*(int *)(DAT_0057f58c + 4) == param_1) &&
             (*(char *)(DAT_0057f58c + 0x19e8) == '\x01')) {
            temp_v0 = 1;
            FUN_001517b4();
            if (temp_v0 != 0) {
              return 1;
            }
          }
          return 0;
        }
      }
    }
  }
  return 1;
}
