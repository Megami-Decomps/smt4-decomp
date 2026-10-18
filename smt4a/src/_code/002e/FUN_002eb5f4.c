/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eb5f4` (_code @ 0x2eb5f4, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002eb56c(void);
extern int FUN_002ecedc(unsigned int, unsigned int);


unsigned int FUN_002eb5f4(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002eb56c();
  temp_v1 = FUN_002ecedc(1,temp_v0);
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0xc);
  }
  return temp_v0;
}
