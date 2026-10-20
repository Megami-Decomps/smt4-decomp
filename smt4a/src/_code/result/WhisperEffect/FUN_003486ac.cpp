/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003486ac` (_code @ 0x3486ac, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588c54; /* 0x588c54 */

extern int FUN_002deb84(int);


unsigned int FUN_003486ac(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (DAT_00588c54 == 0) {
    temp_v0 = 1;
  }
  else {
    temp_v1 = FUN_002deb84(DAT_00588c54);
    if (temp_v1 == 0) {
      *(unsigned char *)(DAT_00588c54 + 8) = 1;
    }
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
