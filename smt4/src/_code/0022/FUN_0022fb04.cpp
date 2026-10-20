/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022fb04` (_code @ 0x22fb04, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0026ee68(unsigned int);
extern int padIsButtonRepeat(unsigned int);


unsigned char FUN_0022fb04(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0026ee68(6);
  temp_v1 = padIsButtonRepeat(7);
  return temp_v1 != 0 || temp_v0 != 0;
}

} /* extern "C" */
