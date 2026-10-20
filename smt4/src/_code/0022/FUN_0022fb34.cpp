/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022fb34` (_code @ 0x22fb34, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0026ee68(unsigned int);
extern int padIsButtonRepeat(unsigned int);


unsigned char FUN_0022fb34(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0026ee68(5);
  temp_v1 = padIsButtonRepeat(8);
  return temp_v1 != 0 || temp_v0 != 0;
}

} /* extern "C" */
