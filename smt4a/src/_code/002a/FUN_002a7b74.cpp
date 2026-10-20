/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7b74` (_code @ 0x2a7b74, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003491e8(void);

extern int DAT_0057f290; /* 0x57f290 */

extern int FUN_0026272c(void);
/* Supplied declaration required: FUN_003491e8. */


void FUN_002a7b74(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0057f290 != 0) {
    if ((*(char *)(DAT_0057f290 + 0x430) != '\0') && (temp_v0 = FUN_0026272c(), temp_v0 == 0)) {
      FUN_003491e8();
    }
    if (DAT_0057f290 != 0) {
      *(unsigned int *)(DAT_0057f290 + 0x488) = 0xffffffff;
    }
  }
  return;
}

} /* extern "C" */
