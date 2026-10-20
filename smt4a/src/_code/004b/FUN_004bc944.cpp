/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bc944` (_code @ 0x4bc944, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00152978(void);


unsigned int FUN_004bc944(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00152978();
  return (*(unsigned char *)(temp_v0 + 3) & 0x40) >> 6;
}

} /* extern "C" */
