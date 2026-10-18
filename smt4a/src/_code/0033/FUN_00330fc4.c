/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330fc4` (_code @ 0x330fc4, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00236038(void);
/* Supplied declaration required: FUN_00294928. */
/* Supplied declaration required: FUN_00294940. */
/* Supplied declaration required: FUN_00294958. */
/* Supplied declaration required: FUN_003252c4. */
/* Supplied declaration required: FUN_003252dc. */
/* Supplied declaration required: FUN_003252f4. */


unsigned int FUN_00330fc4(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00236038();
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 != 10) {
          if (temp_v0 != 0xb) {
            if (temp_v0 == 0xc) {
              FUN_003252f4();
            }
          }
          else {
            FUN_003252dc();
          }
        }
        else {
          FUN_003252c4();
        }
      }
      else {
        FUN_00294958();
      }
    }
    else {
      FUN_00294940();
    }
  }
  else {
    FUN_00294928();
  }
  return 1;
}
