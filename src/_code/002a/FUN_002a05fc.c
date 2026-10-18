/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a05fc` (_code @ 0x2a05fc, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_00297128. */
extern int FUN_002a0f88(void);


void FUN_002a05fc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0043dd68 != 0) {
    if ((*(char *)(DAT_0043dd68 + 0x430) != '\0') && (temp_v0 = FUN_002a0f88(), temp_v0 == 0)) {
      FUN_00297128();
    }
    if (DAT_0043dd68 != 0) {
      *(unsigned int *)(DAT_0043dd68 + 0x478) = 0xffffffff;
    }
  }
  return;
}
