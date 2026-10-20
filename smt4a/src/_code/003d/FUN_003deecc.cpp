/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003deecc` (_code @ 0x3deecc, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_001abac8(void);


unsigned int FUN_003deecc(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_001abac8();
  return (*pbVar1 & 0x40) >> 6;
}

} /* extern "C" */
