/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3e7c` (_code @ 0x3c3e7c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_002c2758(unsigned short);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003c3e7c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  
  temp_v0 = 0;
  do {
    temp_v1 = FUN_002c2758(temp_v0);
    temp_v2 = temp_v0;
    if (temp_v1 == 1) break;
    temp_v0 = temp_v0 + 1;
    temp_v2 = 0;
  } while (temp_v0 < 0x20);
  FUN_003283ac(temp_v2);
  return 1;
}

} /* extern "C" */
