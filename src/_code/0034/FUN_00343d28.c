/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343d28` (_code @ 0x343d28, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bbd40(void);


unsigned char FUN_00343d28(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002bbd40();
  return *(char *)(temp_v0 + 0x10) != '\0';
}
