/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026272c` (_code @ 0x26272c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f58c; /* 0x57f58c */


unsigned char FUN_0026272c(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_0057f58c != 0) {
    temp_v0 = *(char *)(DAT_0057f58c + 8);
  }
  return DAT_0057f58c == 0 || temp_v0 == '\0';
}

} /* extern "C" */
