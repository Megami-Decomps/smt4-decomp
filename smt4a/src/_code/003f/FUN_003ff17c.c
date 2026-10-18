/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ff17c` (_code @ 0x3ff17c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char *FUN_002840e0(void);


unsigned char FUN_003ff17c(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_002840e0();
  return *pbVar1 & 1;
}
