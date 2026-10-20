/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049ccec` (_code @ 0x49ccec, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aocRecordLookup84(void);

extern int FUN_0019271c(void);
/* Supplied declaration required: aocRecordLookup84. */


void FUN_0049ccec(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019271c();
  if (temp_v0 == 10) {
    aocRecordLookup84();
  }
  return;
}

} /* extern "C" */
