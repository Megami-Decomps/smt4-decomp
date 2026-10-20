/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003deeb4` (_code @ 0x3deeb4, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_001abac8(void);


unsigned int FUN_003deeb4(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_001abac8();
  return (*pbVar1 & 0x20) >> 5;
}

} /* extern "C" */
