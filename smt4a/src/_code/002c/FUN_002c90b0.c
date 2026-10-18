/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c90b0` (_code @ 0x2c90b0, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f290; /* 0x57f290 */

extern int FUN_0026272c(void);


unsigned int FUN_002c90b0(void)

{
  int temp_v0;
  
  if (((DAT_0057f290 != 0) && (*(int *)(DAT_0057f290 + 0x925c) != 0)) &&
     ((*(char *)(DAT_0057f290 + 0x430) == '\0' || (temp_v0 = FUN_0026272c(), temp_v0 == 0)))) {
    return 1;
  }
  return 0;
}
