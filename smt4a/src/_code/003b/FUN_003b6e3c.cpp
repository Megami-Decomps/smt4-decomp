/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6e3c` (_code @ 0x3b6e3c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArg(int);

extern int FUN_00162e8c(void);
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_003b6e3c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_00162e8c();
  temp_v0 = scrGetArg(1);
  temp_v2 = scrGetArg(0);
  *(unsigned short *)(temp_v1 + temp_v2 * 2 + 0xd90) = temp_v0;
  return 1;
}

} /* extern "C" */
