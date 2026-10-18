/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029abc0` (_code @ 0x29abc0, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002931cc(unsigned int);
/* Supplied declaration required: FUN_002ae3f0. */
/* Supplied declaration required: FUN_002ae818. */


void FUN_0029abc0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002ae3f0();
  if (param_1 != 0) {
    temp_v0 = FUN_002931cc(0xc);
    if (temp_v0 != 0) {
      FUN_002ae818();
    }
    temp_v0 = FUN_002931cc(0xd);
    if (temp_v0 != 0) {
      FUN_002ae818();
    }
    temp_v0 = FUN_002931cc(0xe);
    if (temp_v0 != 0) {
      FUN_002ae818();
    }
    temp_v0 = FUN_002931cc(0xf);
    if (temp_v0 != 0) {
      FUN_002ae818();
    }
  }
  return;
}
