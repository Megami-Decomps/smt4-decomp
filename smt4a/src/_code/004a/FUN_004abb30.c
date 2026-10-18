/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004abb30` (_code @ 0x4abb30, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_0038e6bc(int);


unsigned char FUN_004abb30(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0038e6bc(DAT_0057a9c8 + 8);
  return temp_v0 != 0;
}
