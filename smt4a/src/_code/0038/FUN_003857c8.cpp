/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003857c8` (_code @ 0x3857c8, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern short *FUN_003564ec(void);


int FUN_003857c8(void)

{
  short *psVar1;
  
  psVar1 = (short *)FUN_003564ec();
  return (int)*psVar1;
}

} /* extern "C" */
