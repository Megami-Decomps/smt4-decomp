/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029a924` (_code @ 0x29a924, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae164(void);
int FUN_002ae584(void);

extern int flagBitIsSet(unsigned int);
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_002ae584. */


void FUN_0029a924(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002ae164();
  if (param_1 != 0) {
    temp_v0 = flagBitIsSet(0xc);
    if (temp_v0 != 0) {
      FUN_002ae584();
    }
    temp_v0 = flagBitIsSet(0xd);
    if (temp_v0 != 0) {
      FUN_002ae584();
    }
    temp_v0 = flagBitIsSet(0xe);
    if (temp_v0 != 0) {
      FUN_002ae584();
    }
    temp_v0 = flagBitIsSet(0xf);
    if (temp_v0 != 0) {
      FUN_002ae584();
    }
  }
  return;
}

} /* extern "C" */
