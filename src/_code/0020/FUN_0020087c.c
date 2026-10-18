/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020087c` (_code @ 0x20087c, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00289640(void);
extern int FUN_002cd934(void);
/* Supplied declaration required: FUN_0030a4fc. */
/* Supplied declaration required: FUN_0031c234. */


unsigned char FUN_0020087c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00289640();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002cd934();
    if (temp_v0 != 0) {
      FUN_0031c234();
    }
    return temp_v0 != 0;
  }
  FUN_0030a4fc();
  return 0;
}
