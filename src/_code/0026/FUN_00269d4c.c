/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00269d4c` (_code @ 0x269d4c, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd68; /* 0x43dd68 */

extern int FUN_002a0ce8(void);


unsigned int FUN_00269d4c(void)

{
  int temp_v0;
  
  if (((DAT_0043dd68 != 0) && (*(int *)(DAT_0043dd68 + 0x95d8) != 0)) &&
     ((*(char *)(DAT_0043dd68 + 0x430) == '\0' || (temp_v0 = FUN_002a0ce8(), temp_v0 == 0)))) {
    return 1;
  }
  return 0;
}
