/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001387c0` (_code @ 0x1387c0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013ebd8(void);
int FUN_0014374c(int);

extern signed char DAT_005b40c8; /* 0x5b40c8 */

/* Supplied declaration required: FUN_0013ebd8. */
/* Supplied declaration required: FUN_0014374c. */
extern unsigned int FUN_001a0380(void);


unsigned int FUN_001387c0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_005b40c8 == '\0') {
    temp_v0 = 1;
  }
  else {
    FUN_0014374c(DAT_005b40c8);
    temp_v1 = FUN_001a0380();
    FUN_0013ebd8();
    temp_v0 = 0;
    if ((temp_v1 & 0x80000000) == 0) {
      DAT_005b40c8 = '\0';
      temp_v0 = 1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
