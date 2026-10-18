/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00269fb0` (_code @ 0x269fb0, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd68; /* 0x43dd68 */

extern int FUN_002a0f88(void);


unsigned int FUN_00269fb0(void)

{
  int temp_v0;
  
  if (((DAT_0043dd68 != 0) && (*(int *)(DAT_0043dd68 + 0x95d8) != 0)) &&
     ((*(char *)(DAT_0043dd68 + 0x430) == '\0' || (temp_v0 = FUN_002a0f88(), temp_v0 == 0)))) {
    return 1;
  }
  return 0;
}
