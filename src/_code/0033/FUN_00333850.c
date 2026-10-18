/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333850` (_code @ 0x333850, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004c53e0; /* 0x4c53e0 */
extern unsigned int DAT_004c5400; /* 0x4c5400 */

extern int FUN_002c583c(unsigned int);


unsigned int FUN_00333850(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c583c(1);
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
