/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024c278` (_code @ 0x24c278, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0026ee68(unsigned int);
extern int FUN_002bfde4(unsigned int);


unsigned char FUN_0024c278(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0026ee68(4);
  temp_v1 = FUN_002bfde4(10);
  return temp_v1 != 0 || temp_v0 != 0;
}
