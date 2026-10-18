/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d1c74` (_code @ 0x1d1c74, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00435d90; /* 0x435d90 */

extern int FUN_002b2378(unsigned int);


unsigned int FUN_001d1c74(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00435d90;
  if ((DAT_00435d90 != (unsigned int *)0x0) &&
     ((temp_v0 = FUN_002b2378(*DAT_00435d90), temp_v0 != 0 || (*(char *)(puVar1 + 0x18) == '\0')))) {
    return 1;
  }
  return 0;
}
