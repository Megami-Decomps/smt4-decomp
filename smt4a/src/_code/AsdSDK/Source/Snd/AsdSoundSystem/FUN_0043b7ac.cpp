/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043b7ac` (_code @ 0x43b7ac, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005c4c20; /* 0x5c4c20 */
extern unsigned int DAT_0064c014; /* 0x64c014 */
extern unsigned int DAT_0064c018; /* 0x64c018 */
extern unsigned int DAT_0064c01c; /* 0x64c01c */

extern int FUN_002eba64(unsigned int *);


unsigned int * FUN_0043b7ac(void)

{
  int temp_v0;
  
  if (((DAT_005c4c20 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c20), temp_v0 != 0)) {
    DAT_0064c014 = 0;
    DAT_0064c018 = 0;
    DAT_0064c01c = 0;
  }
  return &DAT_0064c014;
}

} /* extern "C" */
