/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c3e0` (_code @ 0x31c3e0, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002892a0. */
extern int FUN_00289640(void);
extern int FUN_002b89fc(void);
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_003842f4. */


unsigned char FUN_0031c3e0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00289640();
  if (temp_v0 == 0) {
    FUN_002c583c(0);
    FUN_002892a0();
    FUN_003842f4();
  }
  temp_v0 = FUN_002b89fc();
  return temp_v0 == 0;
}
