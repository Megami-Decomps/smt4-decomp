/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001385d4` (_code @ 0x1385d4, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00464af0; /* 0x464af0 */
extern signed char DAT_00464af1; /* 0x464af1 */
extern unsigned char DAT_00464af2; /* 0x464af2 */


unsigned char FUN_001385d4(void)

{
  unsigned char *puVar1;
  
  puVar1 = &DAT_00464af0;
  if (DAT_00464af1 != '\0') {
    puVar1 = (unsigned char *)(unsigned int)DAT_00464af2;
  }
  return DAT_00464af1 != '\0' && puVar1 != (unsigned char *)0x0;
}

} /* extern "C" */
