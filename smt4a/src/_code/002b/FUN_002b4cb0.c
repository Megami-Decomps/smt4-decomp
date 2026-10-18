/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4cb0` (_code @ 0x2b4cb0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0057f568; /* 0x57f568 */

extern int FUN_00184e20(unsigned int);


unsigned int FUN_002b4cb0(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_0057f568;
  if ((DAT_0057f568 != (unsigned int *)0x0) &&
     ((temp_v0 = FUN_00184e20(*DAT_0057f568), temp_v0 != 0 || (*(char *)(puVar1 + 1) == '\0')))) {
    return 1;
  }
  return 0;
}
