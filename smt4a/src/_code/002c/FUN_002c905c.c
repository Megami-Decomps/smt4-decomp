/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c905c` (_code @ 0x2c905c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f290; /* 0x57f290 */


unsigned int FUN_002c905c(void)

{
  int temp_v0;
  
  if ((*(char *)(DAT_0057f290 + 0x430) != '\0') &&
     (((temp_v0 = *(int *)(DAT_0057f290 + 0x434), temp_v0 == 8 || temp_v0 == 9 ||
       (temp_v0 == 10 || temp_v0 == 0xb)) || ((temp_v0 == 0xc || temp_v0 == 0xd) || temp_v0 == 0xe)))) {
    return 1;
  }
  return 0;
}
