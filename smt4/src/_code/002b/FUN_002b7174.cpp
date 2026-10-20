/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7174` (_code @ 0x2b7174, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *FUN_002c08f0(void);


unsigned int FUN_002b7174(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002c08f0();
  return *puVar1;
}

} /* extern "C" */
