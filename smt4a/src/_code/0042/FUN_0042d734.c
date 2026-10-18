/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042d734` (_code @ 0x42d734, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005b4486; /* 0x5b4486 */
extern signed char DAT_005b4487; /* 0x5b4487 */
extern unsigned char DAT_005b4488; /* 0x5b4488 */

/* Supplied declaration required: FUN_0042fbe4. */
extern int FUN_0042fe18(void);
extern int FUN_00432104(void);


int FUN_0042d734(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_005b4486 != '\0') {
    if (DAT_005b4487 != '\0') {
      temp_v0 = FUN_00432104();
      if (temp_v0 < 0) {
        return temp_v0;
      }
      DAT_005b4488 = 0;
      DAT_005b4487 = '\0';
    }
    temp_v0 = FUN_0042fe18();
    if (-1 < temp_v0) {
      FUN_0042fbe4();
      DAT_005b4486 = '\0';
    }
  }
  return temp_v0;
}
