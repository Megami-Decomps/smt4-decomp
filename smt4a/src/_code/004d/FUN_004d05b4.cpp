/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d05b4` (_code @ 0x4d05b4, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *FUN_001ab888(void);


unsigned int FUN_004d05b4(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_001ab888();
  return *puVar1;
}

} /* extern "C" */
