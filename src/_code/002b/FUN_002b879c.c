/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b879c` (_code @ 0x2b879c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00447060; /* 0x447060 */

/* Supplied declaration required: FUN_002aff0c. */
extern int FUN_002b2378(unsigned int);
/* Supplied declaration required: FUN_002c415c. */


unsigned int FUN_002b879c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00447060;
  if (DAT_00447060 != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2378(*DAT_00447060);
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 2) == '\0')) {
      return 1;
    }
    if (DAT_00447060 != (unsigned int *)0x0) {
      FUN_002aff0c(DAT_00447060 + 0x3b);
      FUN_002c415c(DAT_00447060);
      DAT_00447060 = (unsigned int *)0x0;
    }
  }
  return 0;
}
