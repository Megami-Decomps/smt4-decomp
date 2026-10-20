/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe194` (_code @ 0x2fe194, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024679c(void);
int FUN_002ee56c(int);

extern int FUN_00246708(void);
/* Supplied declaration required: FUN_0024679c. */
extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_002ee56c. */


unsigned char FUN_002fe194(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 == 0) {
    FUN_0024679c();
  }
  temp_v0 = FUN_00246708();
  if (temp_v0 == 0) {
    FUN_002ee56c(0);
  }
  return temp_v0 != 0;
}

} /* extern "C" */
