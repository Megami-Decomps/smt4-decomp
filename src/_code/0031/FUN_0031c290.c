/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c290` (_code @ 0x31c290, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00289038. */
extern int FUN_002893d8(void);
extern int FUN_002b86bc(void);
/* Supplied declaration required: FUN_002c564c. */
/* Supplied declaration required: FUN_003840e4. */


unsigned char FUN_0031c290(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 == 0) {
    FUN_002c564c(0);
    FUN_00289038();
    FUN_003840e4();
  }
  temp_v0 = FUN_002b86bc();
  return temp_v0 == 0;
}
