/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039bc5c` (_code @ 0x39bc5c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(unsigned int);

extern unsigned int DAT_005f0cf4; /* 0x5f0cf4 */

extern int FUN_0018719c(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0039bc5c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0018719c();
  if (temp_v0 != 0) {
    FUN_003283ac(DAT_005f0cf4);
  }
  return 1;
}

} /* extern "C" */
