/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033361c` (_code @ 0x33361c, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_004c53e0; /* 0x4c53e0 */
extern unsigned int DAT_004c5400; /* 0x4c5400 */

extern int jyoucyuGetTableEntry(unsigned int);


unsigned int FUN_0033361c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 != 0) {
    temp_v1 = 0;
  }
  else {
    if (((DAT_004c53e0 & 2) == 0 || (DAT_004c53e0 & 0x20) == 0) &&
       ((DAT_004c5400 & 2) == 0 || (DAT_004c5400 & 0x20) == 0)) {
      return 0;
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
