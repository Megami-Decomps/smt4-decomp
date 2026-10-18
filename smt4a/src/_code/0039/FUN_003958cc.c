/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003958cc` (_code @ 0x3958cc, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005806a4; /* 0x5806a4 */

extern int FUN_003f9e6c(unsigned int);


unsigned int FUN_003958cc(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((*(char *)(DAT_005806a4 + 0x304) == '\0') ||
     (temp_v0 = FUN_003f9e6c(*(unsigned int *)(DAT_005806a4 + 700)), temp_v0 == 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
