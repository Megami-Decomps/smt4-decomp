/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012426e` (_code @ 0x12426e, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00303208(int, int);

extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_00303208. */


void FUN_0012426e(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e760a(0x44);
  if (temp_v0 != 0) {
    FUN_00303208(temp_v0,0);
  }
  return;
}

} /* extern "C" */
