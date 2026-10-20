/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002371b0` (_code @ 0x2371b0, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4120(int *, int);

/* Supplied declaration required: FUN_001b4120. */


void FUN_002371b0(void)

{
/* irregular: 2 native warning(s); review required */
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  uStack_20 = 1;
  uStack_1c = 0x10245;
  uStack_18 = 1;
  uStack_14 = 0xf0231;
  uStack_10 = 0;
  uStack_c = 0x10253;
  FUN_001b4120(&uStack_20,0x18);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
